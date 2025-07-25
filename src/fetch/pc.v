`include "common/riscv_defines.vh"

module pc (
    input  logic        clk,
    input  logic        reset,

    // Control for PC selection
    input  logic [1:0]  pc_sel,          // 0 = pc+4, 1 = alu output, 2 = predicted pc
    input  logic [31:0] alu_out,
    input  logic        take_predicted_pc,
    input  logic [31:0] predicted_pc,
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
        else if (take_predicted_pc)
            pc <= predicted_pc;
        else
            pc <= pc_next;
    end

endmodule