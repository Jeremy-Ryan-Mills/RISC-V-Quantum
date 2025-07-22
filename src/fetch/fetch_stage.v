`include "common/riscv_defines.vh"

module fetch_stage (
    input logic clk,
    input logic reset,

    input logic pc_sel,
    input logic [31:0] alu_out,
    input logic sim_load_en,
    input logic [`MEM_ADDR_WIDTH-1:0] sim_addr,
    input logic [31:0] sim_data,

    output logic [31:0] pc,
    output logic [31:0] instr
);

    pc pc_inst (
        .clk(clk),
        .reset(reset),
        .pc_sel(pc_sel),
        .alu_out(alu_out),
        .pc(pc)
    );

    instruction_mem_if instruction_mem_if_inst (
        .clk(clk),
        .pc(pc),
        .sim_load_en(sim_load_en),
        .sim_addr(sim_addr),
        .sim_data(sim_data),
        .instr(instr)
    );
endmodule