`include "common/riscv_defines.vh"

module branch_comp (
    input logic clk,
    input logic reset,
    input logic [31:0] rs1,
    input logic [31:0] rs2,
    input logic [31:0] instr,
    output logic branch_taken
);

    logic [2:0] funct3;

    assign funct3 = instr[14:12];

    logic [31:0] diff;

    assign diff = $signed(rs1) - $signed(rs2);

    always_ff @(posedge clk) begin
        if (reset) begin
            branch_taken <= 0;
        end
        else begin
            case(funct3)
                `FUNCT3_BEQ: branch_taken = (diff == 0);
                `FUNCT3_BNE: branch_taken = (diff != 0);
                `FUNCT3_BLT: branch_taken = (diff < 0);
                `FUNCT3_BGE: branch_taken = (diff >= 0);
                `FUNCT3_BLTU: branch_taken = (rs1 < rs2);
                `FUNCT3_BGEU: branch_taken = (rs1 >= rs2);
                default: branch_taken = 0;
            endcase
        end
    end

endmodule