`include "common/riscv_defines.vh"
`include "common/control_types.vh"

module core (
    input logic clk,
    input logic reset
);

    // ----------------------------
    // FETCH → IF stage
    // ----------------------------
    logic [31:0] pc;            // Program Counter for IF stage
    logic [31:0] instr;         // Instruction fetched from memory for the IF stage
    logic [31:0] force_pc;      // Force PC for IF stage
    logic        take_force_pc; // Enable force PC

    fetch_stage fetch_stage_inst (
        .clk(clk),
        .reset(reset),
        .force_pc(force_pc),
        .take_force_pc(take_force_pc),
        .pc(pc),
        .instr(instr)
    );

 
    // ----------------------------
    // IF/ID pipeline registers
    // ----------------------------
    logic [31:0] if_id_instr;  // Pipelined register for instruction in decode stage
    logic [31:0] if_id_pc;     // Pipelined register for program counter in decode stage
    logic        if_flush;     // Enable flush for IF -> ID Pipeline
    logic        id_flush;     // Enable flush for ID -> EX Pipeline

    always_ff @(posedge clk or posedge reset) begin
        if (reset || if_flush) begin
            if_id_instr <= 32'h00000013; // NOP
            if_id_pc    <= 32'd0;
        end else begin
            if_id_instr <= instr;
            if_id_pc    <= pc;
        end
    end


    // ----------------------------
    // DECODE → ID stage
    // ----------------------------
    logic [4:0] rs1, rs2, rd;
    logic [31:0] rv1, rv2, imm;
    control_signals_t ctrl;
    logic        predict_taken;

    branch_predictor branch_predictor_inst (
        .clk(clk),
        .reset(reset),
        .pc(if_id_pc),
        .predict_taken(predict_taken)
    );

    decode_stage decode_stage_inst (
        .instr(if_id_instr),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .imm(imm),
        .ctrl(ctrl)
    );

    // Take care of branch misprediction in EX first
    // Then take care of jumps and predicted jumps in ID
    always_comb begin // Set branch prediction flushes and alternate pc
        if (id_ex_ctrl.is_branch && (branch_taken != id_ex_predict_taken)) begin
            if_flush = 1'b1;
            id_flush = 1'b1;
            force_pc = branch_taken ? (id_ex_pc + id_ex_imm) : (id_ex_pc + 32'd4);
            take_force_pc = 1'b1;
        end else if (ctrl.is_jump && (if_id_instr[6:0] == `OPCODE_JAL)) begin // If the ID is JAL, then jump
            if_flush = 1'b1;
            id_flush = 1'b0;
            force_pc = if_id_pc + imm;
            take_force_pc = 1'b1;
        end else if (ctrl.is_jump && (if_id_instr[6:0] == `OPCODE_JALR)) begin
            if_flush = 1'b1;
            id_flush = 1'b0;
            force_pc = rv1 + imm;
            take_force_pc = 1'b1;
        end else if (ctrl.is_branch) begin
            if_flush = predict_taken;
            id_flush = 1'b0;
            force_pc = predict_taken ? (if_id_pc + imm) : (if_id_pc + 32'd4);
            take_force_pc = predict_taken;
        end else begin
            if_flush = 1'b0;
            id_flush = 1'b0;
            force_pc = 32'd0;
            take_force_pc = 1'b0;
        end
    end

    // ----------------------------
    // REGISTER FILE
    // ----------------------------
    reg_file reg_file_inst (
        .clk(clk),
        .reset(reset),
        .we(id_ex_ctrl.reg_wen),
        .rs1(rs1),
        .rs2(rs2),
        .rd(id_ex_rd),
        .wd(writeback_result),
        .rv1(rv1),
        .rv2(rv2)
    );

    // ----------------------------
    // ID/EX pipeline registers
    // ----------------------------
    logic [31:0] id_ex_pc, id_ex_instr;
    logic [31:0] id_ex_rv1, id_ex_rv2, id_ex_imm;
    logic [4:0]  id_ex_rs1, id_ex_rs2, id_ex_rd;
    control_signals_t id_ex_ctrl;
    logic        id_ex_predict_taken;
    logic [31:0] id_ex_predicted_pc;

    always_ff @(posedge clk or posedge reset) begin
        if (reset || id_flush) begin
            id_ex_pc   <= 32'd0;
            id_ex_instr <= 32'h00000013; // NOP
            id_ex_rv1  <= 32'd0;
            id_ex_rv2  <= 32'd0;
            id_ex_imm  <= 32'd0;
            id_ex_rs1  <= 5'd0;
            id_ex_rs2  <= 5'd0;
            id_ex_rd   <= 5'd0;
            id_ex_ctrl <= '{
                reg_wen: 1'b0,
                alu_op: `ALU_OP_ADD,
                brun: 1'b0,
                b_sel: 1'b0,
                a_sel: 1'b0,
                mem_rw: 1'b0,
                wb_sel: 2'b00,
                is_branch: 1'b0,
                is_jump: 1'b0
            };
            id_ex_predict_taken <= 1'b0;
        end else begin
            id_ex_pc   <= if_id_pc;
            id_ex_instr <= if_id_instr;
            id_ex_rv1  <= rv1;
            id_ex_rv2  <= rv2;
            id_ex_imm  <= imm;
            id_ex_rs1  <= rs1;
            id_ex_rs2  <= rs2;
            id_ex_rd   <= rd;
            id_ex_ctrl <= ctrl;
            id_ex_predict_taken <= predict_taken;
        end
    end


    // ----------------------------
    // EXECUTE / WRITEBACK stage
    // ----------------------------
    logic [31:0] alu_out;
    logic [31:0] alu_a, alu_b;

    assign alu_a = id_ex_ctrl.a_sel ? id_ex_pc  : id_ex_rv1;
    assign alu_b = id_ex_ctrl.b_sel ? id_ex_imm : id_ex_rv2;

    alu alu_inst (
        .operand_a(alu_a),
        .operand_b(alu_b),
        .alu_op   (id_ex_ctrl.alu_op),
        .result   (alu_out)
    );

    // ----------------------------
    // BRANCH LOGIC
    // ----------------------------
    logic branch_taken;

    branch_comp branch_comp_inst (
        .clk(clk),
        .reset(reset),
        .rs1(id_ex_rv1),
        .rs2(id_ex_rv2),
        .instr(id_ex_instr), // note: using current decoded instruction
        .branch_taken(branch_taken)
    );

    // ----------------------------
    // MEMORY ACCESS
    // ----------------------------
    logic [31:0] mem_out;

    memory memory_inst (
        .clk(clk),
        .reset(reset),
        .addr(alu_out),
        .wdata(id_ex_rv2),       // store uses rs2
        .mem_rw(id_ex_ctrl.mem_rw),
        .rdata(mem_out)
    );

    // ----------------------------
    // WRITEBACK MUX
    // ----------------------------
    logic [31:0] writeback_result;

    always_comb begin
        unique case (id_ex_ctrl.wb_sel)
            2'b00: writeback_result = mem_out;
            2'b01: writeback_result = alu_out;
            2'b10: writeback_result = id_ex_pc + 32'd4;
            default: writeback_result = 32'd0;
        endcase
    end

endmodule