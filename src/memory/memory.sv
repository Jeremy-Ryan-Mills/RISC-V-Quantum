// NOTE: That this current memory implementation is asynchronous read for
// the read data. This is because with the current pipeline, a synchronous
// read would return the data a cycle too late. 


`include "common/riscv_defines.vh"

module memory (
    input logic clk,
    input logic reset,
    input logic [31:0] addr,
    input logic [`MEM_DATA_WIDTH-1:0] wdata,
    input logic mem_rw,

    output logic [31:0] rdata
);

    logic [`MEM_DATA_WIDTH-1:0] mem [0:1<<`MEM_ADDR_WIDTH-1];

    assign rdata = reset ? 32'd0 : mem[addr[`MEM_ADDR_WIDTH+1:2]];
    
    always_ff @(posedge clk) begin
        if (reset) begin
            // rdata <= 32'b0;
        end
        else begin
            if (mem_rw) begin
                mem[addr[`MEM_ADDR_WIDTH+1:2]] <= wdata;
            end
            //rdata <= mem[addr[`MEM_ADDR_WIDTH+1:2]];
        end
    end
endmodule