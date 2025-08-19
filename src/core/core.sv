`include "common/riscv_defines.vh"
`include "common/control_types.vh"
//`include "common/pulse_descriptor.vh"

module core (
    input logic clk,
    input logic reset,

    output logic [31:0] pc

    // Pulse instruction output to async fifo
    output pulse_descriptor_t pulse_descriptor,
    output logic pulse_descriptor_valid,

    input logic pulse_register_full,
    input logic pulse_register_empty
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
        if (reset || if_flush || qwait_busy || qdelay != 12'd0) begin
            if_id_instr <= 32'h00000013; // NOP
            if_id_pc    <= 32'd0;
        end else begin
            if_id_instr <= instr;
            if_id_pc    <= pc;
        end
    end

    // ----------------------------
    // DECODE stage
    // ----------------------------
    logic [4:0] rs1, rs2, rd;
    logic [31:0] rv1, rv2, imm;
    control_signals_t ctrl;
    logic        predict_taken;

    branch_predictor branch_predictor_inst (
        .clk(clk),
        .reset(reset),
        .pc(if_id_pc),
        .predict_taken(predict_taken),
        .update_en(id_ex_ctrl.is_branch),
        .pc_u(id_ex_pc),
        .branch_taken(branch_taken)
    );

    decode_stage decode_stage_inst (
        .instr(if_id_instr),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .imm(imm),
        .ctrl(ctrl)
    );

    logic [31:0] id_rs1_for_jump;
    assign id_rs1_for_jump =
        (ex_mem_ctrl.reg_wen && ex_mem_rd != 5'd0 && ex_mem_rd == rs1)
            ? writeback_result
            : rv1;


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
            force_pc = id_rs1_for_jump + imm;
            take_force_pc = 1'b1;
        end else if (ctrl.is_jump && (if_id_instr[6:0] == `OPCODE_JALR)) begin
            if_flush = 1'b1;
            id_flush = 1'b0;
            force_pc = id_rs1_for_jump + imm;
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
        .we(ex_mem_ctrl.reg_wen),
        .rs1(rs1),
        .rs2(rs2),
        .rd(ex_mem_rd),
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
        if (reset || id_flush || qwait_busy || qdelay != 12'd0) begin
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
    logic hit_fwd_rs1, hit_fwd_rs2;

    assign hit_fwd_rs1 = ex_mem_ctrl.reg_wen && (ex_mem_rd != 5'd0) && (ex_mem_rd == id_ex_rs1);
    assign hit_fwd_rs2 = ex_mem_ctrl.reg_wen && (ex_mem_rd != 5'd0) && (ex_mem_rd == id_ex_rs2);

    assign alu_a = id_ex_ctrl.a_sel ? id_ex_pc  : (hit_fwd_rs1 ? writeback_result : id_ex_rv1);
    assign alu_b = id_ex_ctrl.b_sel ? id_ex_imm : (hit_fwd_rs2 ? writeback_result : id_ex_rv2);

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
    logic [31:0] branch_in_1;
    logic [31:0] branch_in_2;

    assign branch_in_1 = hit_fwd_rs1 ? writeback_result : id_ex_rv1;
    assign branch_in_2 = hit_fwd_rs2 ? writeback_result : id_ex_rv2;

    branch_comp branch_comp_inst (
        .clk(clk),
        .reset(reset),
        .rs1(branch_in_1),
        .rs2(branch_in_2),
        .instr(id_ex_instr), // note: using current decoded instruction
        .branch_taken(branch_taken)
    );

    // ----------------------------
    // QUANTUM HANDLER
    // ----------------------------
    logic [11:0] qdelay;
    logic qwait_busy;

    // Quantum handler handles quantum instruction in the execute stage
    // - Output signals that interface with pulse scheduler are driven here
    quantum_handler quantum_handler_inst (
        .clk(clk),
        .reset(reset),
        .instr(id_ex_instr),
        .rv1(id_ex_rv1),
        .pulse_descriptor(pulse_descriptor),
        .pulse_descriptor_valid(pulse_descriptor_valid),
        .qdelay(qdelay),
        .qwait_busy(qwait_busy),
        .pulse_register_full(pulse_register_full),
        .pulse_register_empty(pulse_register_empty)
    );


    // ----------------------------
    // EX --> MEM/WB PIPELINE REGISTERS
    // We need the ALU output to
    // be registered for one cycle
    // to allow the memory to use it
    // for a read. See memory.sv for
    // more details.
    // ----------------------------
    logic [31:0] ex_mem_pc;
    logic [31:0] ex_mem_alu_out;
    logic [31:0] ex_mem_rv2;
    logic [4:0]  ex_mem_rd;
    control_signals_t ex_mem_ctrl;

    always_ff @(posedge clk or posedge reset) begin
        if (reset || qwait_busy || qdelay != 12'd0) begin
            ex_mem_pc   <= 32'd0;
            ex_mem_alu_out <= 32'd0;
            ex_mem_rv2  <= 32'd0;
            ex_mem_rd   <= 5'd0;
            ex_mem_ctrl <= '{
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
        end else begin
            ex_mem_pc   <= id_ex_pc;
            ex_mem_alu_out <= alu_out;
            ex_mem_rv2  <= id_ex_rv2;
            ex_mem_rd   <= id_ex_rd;
            ex_mem_ctrl <= id_ex_ctrl;
        end
    end

    // ----------------------------
    // MEMORY ACCESS
    // ----------------------------
    logic [31:0] mem_out;

    memory memory_inst (
        .clk(clk),
        .reset(reset),
        .addr(ex_mem_alu_out),
        .wdata(ex_mem_rv2),       // store uses rs2
        .mem_rw(ex_mem_ctrl.mem_rw),
        .rdata(mem_out)
    );

    // ----------------------------
    // WRITEBACK MUX
    // ----------------------------
    logic [31:0] writeback_result;

    always_comb begin
        unique case (ex_mem_ctrl.wb_sel)
            2'b00: writeback_result = mem_out;
            2'b01: writeback_result = ex_mem_alu_out;
            2'b10: writeback_result = ex_mem_pc + 32'd4;
            default: writeback_result = 32'd0;
        endcase
    end

endmodule