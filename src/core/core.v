`include "common/riscv_defines.vh"
`include "common/control_types.vh"

module core (
    input logic clk,
    input logic reset
);

    // ----------------------------
    // FETCH → IF stage
    // ----------------------------
    logic [31:0] pc;
    logic        pc_sel_final;
    logic [31:0] instr;

    fetch_stage fetch_stage_inst (
        .clk(clk),
        .reset(reset),
        .pc_sel(pc_sel_final),
        .alu_out(alu_out),     // branch target
        .pc(pc),
        .instr(instr)
    );

    // ----------------------------
    // IF/ID pipeline registers
    // ----------------------------
    logic [31:0] if_id_instr, if_id_pc;
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            if_id_instr <= 32'd0;
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

    decode_stage decode_stage_inst (
        .instr(if_id_instr),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .imm(imm),
        .ctrl(ctrl)
    );

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
    logic [31:0] id_ex_pc;
    logic [31:0] id_ex_rv1, id_ex_rv2, id_ex_imm;
    logic [4:0]  id_ex_rs1, id_ex_rs2, id_ex_rd;
    control_signals_t id_ex_ctrl;

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            id_ex_pc   <= 32'd0;
            id_ex_rv1  <= 32'd0;
            id_ex_rv2  <= 32'd0;
            id_ex_imm  <= 32'd0;
            id_ex_rs1  <= 5'd0;
            id_ex_rs2  <= 5'd0;
            id_ex_rd   <= 5'd0;
            id_ex_ctrl <= '0;
        end else begin
            id_ex_pc   <= if_id_pc;
            id_ex_rv1  <= rv1;
            id_ex_rv2  <= rv2;
            id_ex_imm  <= imm;
            id_ex_rs1  <= rs1;
            id_ex_rs2  <= rs2;
            id_ex_rd   <= rd;
            id_ex_ctrl <= ctrl;
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
        .instr(if_id_instr), // note: using current decoded instruction
        .branch_taken(branch_taken)
    );

    assign pc_sel_final = id_ex_ctrl.pc_sel & (branch_taken | (if_id_instr[6:0] != `OPCODE_BRANCH));
    
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