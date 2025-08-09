`include "common/riscv_defines.vh"

module instruction_mem_if (
    input logic clk,
    input logic reset,
    input logic [31:0] pc,

    output logic [31:0] instr
);

    logic [31:0] mem [0:1<<`MEM_ADDR_WIDTH-1];

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            mem = '{default:32'h00000013};  // NOP
        end
    end

    assign instr = mem[pc[`MEM_ADDR_WIDTH+1:2]];

endmodule