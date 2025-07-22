`include "common/riscv_defines.vh"

module instruction_mem_if (
    input logic clk,
    input logic [31:0] pc,
    input logic sim_load_en,
    input logic [`MEM_ADDR_WIDTH-1:0] sim_addr,
    input logic [31:0] sim_data,

    output logic [31:0] instr
);

    logic [31:0] mem [0:2**`MEM_ADDR_WIDTH-1];

    always_ff @(posedge clk) begin
        if (sim_load_en) begin
            mem[sim_addr] <= sim_data;
        end
        else begin
            instr <= mem[pc[`MEM_ADDR_WIDTH-1:0]];
        end
    end // always_ff
endmodule