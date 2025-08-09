`include "common/riscv_defines.vh"

module fetch_stage (
    input logic clk,
    input logic reset,

    input logic [31:0] force_pc,
    input logic take_force_pc,

    output logic [31:0] pc,
    output logic [31:0] instr
);

    pc pc_inst (
        .clk(clk),
        .reset(reset),
        .take_force_pc(take_force_pc),
        .force_pc(force_pc),
        .pc(pc)
    );

    instruction_mem_if instruction_mem_if_inst (
        .clk(clk),
        .reset(reset),
        .pc(pc),
        .instr(instr)
    );
endmodule