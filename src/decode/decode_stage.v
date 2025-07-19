`include "common/riscv_defines.vh"
`include "common/control_types.vh"

module decode_stage (
    input  logic [31:0] instr,
    output logic [4:0]  rs1,
    output logic [4:0]  rs2,
    output logic [4:0]  rd,
    output logic [31:0] imm,
    output control_signals_t ctrl
);

    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [6:0] funct7;

    decoder decoder_i (
        .instr(instr),
        .opcode(opcode),
        .funct3(funct3),
        .funct7(funct7),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .imm(imm)
    );

    control_unit ctrl_i (
        .opcode(opcode),
        .funct3(funct3),
        .funct7(funct7),
        .ctrl(ctrl)
    );

endmodule