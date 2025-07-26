`include "common/riscv_defines.vh"

module instruction_mem_if (
    input logic clk,
    input logic [31:0] pc,

    output logic [31:0] instr
);

    logic [31:0] mem [0:1<<`MEM_ADDR_WIDTH-1];

    always_ff @(posedge clk) begin
        instr <= mem[pc[`MEM_ADDR_WIDTH+1:2]];
    end // always_ff
endmodule