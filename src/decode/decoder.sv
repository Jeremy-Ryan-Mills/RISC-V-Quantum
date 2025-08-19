`include "common/riscv_defines.vh"

module decoder (
    input  logic [31:0] instr,
    output logic [6:0]  opcode,
    output logic [2:0]  funct3,
    output logic [6:0]  funct7,
    output logic [4:0]  rd,
    output logic [4:0]  rs1,
    output logic [4:0]  rs2,
    output logic [31:0] imm
);
    assign opcode = instr[6:0];
    assign rd     = instr[11:7];
    assign funct3 = instr[14:12];
    assign rs1    = instr[19:15];
    assign rs2    = instr[24:20];
    assign funct7 = instr[31:25];

    always_comb begin
        case (opcode)
            `OPCODE_OP_IMM: imm = {{20{instr[31]}}, instr[31:20]}; // I-type
            `OPCODE_LOAD:   imm = {{20{instr[31]}}, instr[31:20]};
            `OPCODE_STORE:  imm = {{20{instr[31]}}, instr[31:25], instr[11:7]}; // S-type
            `OPCODE_BRANCH: imm = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0}; // B-type
            `OPCODE_LUI,
            `OPCODE_AUIPC:  imm = {instr[31:12], 12'b0}; // U-type
            `OPCODE_JAL:    imm = {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0}; // J-type
            `OPCODE_QUANTUM: imm = {{20{instr[31]}}, instr[31:20]}; // Q-type
            default:        imm = 32'b0;
        endcase
    end
endmodule