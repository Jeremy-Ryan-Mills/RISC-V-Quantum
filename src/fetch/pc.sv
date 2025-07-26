`include "common/riscv_defines.vh"

module pc (
    input  logic        clk,
    input  logic        reset,

    // Control for PC selection
    input  logic        take_force_pc,
    input  logic [31:0] force_pc,
    output logic [31:0] pc
);

    // ----------------------------
    // PC register
    // ----------------------------

    always_ff @(posedge clk or posedge reset) begin
        if (reset)
            pc <= `RESET_ADDR;
        else if (take_force_pc)
            pc <= force_pc;
        else
            pc <= pc + 4;
    end

endmodule