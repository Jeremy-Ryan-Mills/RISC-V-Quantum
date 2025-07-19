`include "common/riscv_defines.vh"
`include "control_types.vh"

module core (
    input logic clk,
    input logic reset

);

    logic [31:0] pc;
    logic [31:0] alu_out;
    logic [31:0] instr;
    logic [31:0] rv1;
    logic [31:0] rv2;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] rd;
    logic [31:0] imm;
    control_signals_t ctrl;
    logic [31:0] writeback_result;
    logic [31:0] mem_out;

    // ----------------------------
    // FETCH STAGE
    // ----------------------------
    fetch_stage fetch_stage_inst (
        .clk(clk),
        .reset(reset),
        .pc_sel(pc_sel),
        .alu_out(alu_out),
        .pc(pc),
        .instr(instr)
    );

    // ----------------------------
    // DECODE STAGE
    // ----------------------------

    decode_stage decode_stage_inst (
        .instr(instr),
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
        .we(ctrl.reg_wen),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .wd(writeback_result),
        .rv1(rv1),
        .rv2(rv2)
    );

    // ----------------------------
    // EXECUTE STAGE
    // ----------------------------

    logic [31:0] alu_a;
    logic [31:0] alu_b;

    always_comb begin
        alu_a = ctrl.a_sel ? pc : rv1;
        alu_b = ctrl.b_sel ? imm : rv2;
    end

    alu alu_inst (
        .a(alu_a),
        .b(alu_b),
        .alu_op(ctrl.alu_op),
        .result(alu_out)
    );

    branch_comp branch_comp_inst (
        .rs1(rv1),
        .rs2(rv2),
        .instr(instr),
        .branch_taken(branch_taken)
    );

    assign ctrl.pc_sel = branch_taken & (instr[6:0] != `OPCODE_BRANCH);
    // ----------------------------
    // MEMORY STAGE
    // ----------------------------
    memory memory_inst (
        .clk(clk),
        .addr(alu_out),
        .wdata(rv2),
        .mem_rw(ctrl.mem_rw),
        .rdata(mem_out)
    );

    // ----------------------------
    // WRITEBACK STAGE
    // ----------------------------
    writeback_mux writeback_mux_inst (
        .alu_result(alu_out),
        .mem_result(mem_out),
        .pc_plus_4(pc + 4),
        .wb_sel(ctrl.wb_sel),
        .result(writeback_result)
    );

endmodule