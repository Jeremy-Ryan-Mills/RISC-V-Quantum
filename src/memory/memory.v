`include "common/riscv_defines.vh"

module memory (
    input logic clk,
    input logic [31:0] addr,
    input logic [31:0] wdata,
    input logic mem_rw,

    output logic [31:0] rdata
);

    logic [MEM_DATA_WIDTH-1:0] mem [0:2**MEM_ADDR_WIDTH-1];

    always_ff @(posedge clk) begin
        if (mem_rw) begin
            mem[addr] <= wdata;
        end
    end

    assign rdata = mem[addr];
endmodule