`include "common/riscv_defines.vh"

module fetch_stage (
    input logic clk,
    input logic reset,

    input logic pc_sel,
    input logic [31:0] alu_out,
    input logic take_predicted_pc,
    input logic [31:0] predicted_pc,
    output logic [31:0] pc,
    output logic [31:0] instr
);

    pc pc_inst (
        .clk(clk),
        .reset(reset),
        .pc_sel(pc_sel),
        .alu_out(alu_out),
        .take_predicted_pc(take_predicted_pc),
        .predicted_pc(predicted_pc),
        .pc(pc)
    );

    instruction_mem_if instruction_mem_if_inst (
        .clk(clk),
        .pc(pc),
        .instr(instr)
    );
endmodule