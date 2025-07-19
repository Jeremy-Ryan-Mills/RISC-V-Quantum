`include "common/riscv_defines.vh"

module pc (
    input  logic        clk,
    input  logic        reset,

    // Control for PC selection
    input  logic        pc_sel,          // 0 = pc+4, 1 = alu output
    input  logic [31:0] alu_out,

    output logic [31:0] pc
);

    // ----------------------------
    // PC register
    // ----------------------------
    logic [31:0] pc_next;

    always_comb begin
        case (pc_sel)
            1'b0: pc_next = pc + 4;
            1'b1: pc_next = alu_out;
            default: pc_next = pc + 4;
        endcase
    end

    always_ff @(posedge clk or posedge reset) begin
        if (reset)
            pc <= `RESET_ADDR;
        else
            pc <= pc_next;
    end

endmodule