`include "common/riscv_defines.vh"

module alu (
    input logic [3:0] alu_op,
    input logic [31:0] operand_a,
    input logic [31:0] operand_b,
    output logic [31:0] result
);

    always_comb begin
        case (alu_op)
            ALU_OP_ADD: result = operand_a + operand_b;     // ADD
            ALU_OP_SUB: result = operand_a - operand_b;     // SUB
            ALU_OP_AND: result = operand_a & operand_b;     // AND
            ALU_OP_OR: result = operand_a | operand_b;     // OR
            ALU_OP_XOR: result = operand_a ^ operand_b;     // XOR
            ALU_OP_SLL: result = operand_a << operand_b[4:0]; // SLL
            ALU_OP_SRL: result = operand_a >> operand_b[4:0]; // SRL
            ALU_OP_SRA: result = $signed(operand_a) >>> operand_b[4:0]; // SRA
            ALU_OP_SLT: result = ($signed(operand_a) < $signed(operand_b)) ? 32'b1 : 32'b0; // SLT
            ALU_OP_SLTU: result = (operand_a < operand_b) ? 32'b1 : 32'b0; // SLTU
            ALU_OP_ID_A: result = operand_a;
            ALU_OP_ID_B: result = operand_b;
            default: result = 32'b0;
        endcase
    end
endmodule 