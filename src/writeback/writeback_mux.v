`include "common/riscv_defines.vh"

module writeback_mux(
    input logic [31:0] alu_out,
    input logic [31:0] pc_plus_four,
    input logic [31:0] mem_out,
    input logic [1:0] wb_sel,
    output logic [31:0] reg_out
);
    always_comb begin
        case(wb_sel)
            2'b00: reg_out = mem_out;
            2'b01: reg_out = alu_out;
            2'b10: reg_out = pc_plus_four;
            default: reg_out = 32'b0;
        endcase
    end

endmodule