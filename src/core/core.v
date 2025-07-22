`include "common/riscv_defines.vh"
`include "common/control_types.vh"

module core (
    input logic clk,
    input logic reset,
    input logic sim_load_en,
    input logic [`MEM_ADDR_WIDTH-1:0] sim_addr,
    input logic [31:0] sim_data
);

    logic [31:0] pc;
    logic pc_sel_final;
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
    logic branch_taken;

    // ----------------------------
    // FETCH STAGE
    // ----------------------------
    fetch_stage fetch_stage_inst (
        .clk(clk),
        .reset(reset),
        .pc_sel(pc_sel_final),
        .alu_out(alu_out),
        .sim_load_en(sim_load_en),
        .sim_addr(sim_addr),
        .sim_data(sim_data),
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
        .reset(reset),
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
        .operand_a(alu_a),
        .operand_b(alu_b),
        .alu_op(ctrl.alu_op),
        .result(alu_out)
    );

    branch_comp branch_comp_inst (
        .clk(clk),
        .reset(reset),
        .rs1(rv1),
        .rs2(rv2),
        .instr(instr),
        .branch_taken(branch_taken)
    );

    assign pc_sel_final = ctrl.pc_sel & (branch_taken | (instr[6:0] != `OPCODE_BRANCH));

    // ----------------------------
    // MEMORY STAGE
    // ----------------------------
    memory memory_inst (
        .clk(clk),
        .reset(reset),
        .addr(alu_out),
        .wdata(rv2),
        .mem_rw(ctrl.mem_rw),
        .rdata(mem_out)
    );

    // ----------------------------
    // WRITEBACK STAGE
    // ----------------------------
    writeback_mux writeback_mux_inst (
        .alu_out(alu_out),
        .mem_out(mem_out),
        .pc_plus_four(pc + 4),
        .wb_sel(ctrl.wb_sel),
        .reg_out(writeback_result)
    );

endmodule