// riscv-defines.vh
`ifndef RISCV_DEFINES_VH
`define RISCV_DEFINES_VH

// -----------------------------------------------------------------------------
// Core configuration
// -----------------------------------------------------------------------------
`define XLEN            32                // Register & data path width
`define RESET_ADDR      32'h0000_0000     // Reset vector address
`define MEM_ADDR_WIDTH  10
`define MEM_DATA_WIDTH  32

// -----------------------------------------------------------------------------
// Base ISA opcodes
// -----------------------------------------------------------------------------
`define OPCODE_LOAD     7'b0000011
`define OPCODE_STORE    7'b0100011
`define OPCODE_BRANCH   7'b1100011
`define OPCODE_JALR     7'b1100111
`define OPCODE_JAL      7'b1101111
`define OPCODE_OP_IMM   7'b0010011
`define OPCODE_OP       7'b0110011
`define OPCODE_LUI      7'b0110111
`define OPCODE_AUIPC    7'b0010111
`define OPCODE_MISC_MEM 7'b0001111
`define OPCODE_SYSTEM   7'b1110011
`define OPCODE_QUANTUM    7'b0001011

// -----------------------------------------------------------------------------
// funct3 fields (common)
// -----------------------------------------------------------------------------
`define FUNCT3_ADD_SUB  3'b000
`define FUNCT3_SLL      3'b001
`define FUNCT3_SLT      3'b010
`define FUNCT3_SLTU     3'b011
`define FUNCT3_XOR      3'b100
`define FUNCT3_SRL_SRA  3'b101
`define FUNCT3_OR       3'b110
`define FUNCT3_AND      3'b111

// -----------------------------------------------------------------------------
// funct3 fields for Branch instructions
// -----------------------------------------------------------------------------
`define FUNCT3_BEQ      3'b000
`define FUNCT3_BNE      3'b001
`define FUNCT3_BLT      3'b100
`define FUNCT3_BGE      3'b101
`define FUNCT3_BLTU     3'b110
`define FUNCT3_BGEU     3'b111

// -----------------------------------------------------------------------------
// funct7 fields for OP
// -----------------------------------------------------------------------------
`define FUNCT7_ADD      7'b0000000
`define FUNCT7_SUB      7'b0100000
`define FUNCT7_SRL      7'b0000000
`define FUNCT7_SRA      7'b0100000

// -----------------------------------------------------------------------------
// ALU ops for OP
// -----------------------------------------------------------------------------
`define ALU_OP_ADD      4'b0000
`define ALU_OP_SUB      4'b0001
`define ALU_OP_AND      4'b0010
`define ALU_OP_OR       4'b0011
`define ALU_OP_XOR      4'b0100
`define ALU_OP_SLL      4'b0101
`define ALU_OP_SRL      4'b0110
`define ALU_OP_SRA      4'b0111
`define ALU_OP_SLT      4'b1000
`define ALU_OP_SLTU     4'b1001
`define ALU_OP_ID_A     4'b1010
`define ALU_OP_ID_B     4'b1011

// -----------------------------------------------------------------------------
// Branch predictor states
// -----------------------------------------------------------------------------
`define BP_DEPTH        8

// -----------------------------------------------------------------------------
// Pulse register fields
// -----------------------------------------------------------------------------
`define PULSE_REG_PHASE_W  16
`define PULSE_REG_AMP_W    14
`define PULSE_REG_FREQ_W   32
`define PULSE_REG_TSTART_W 12
`define PULSE_REG_TLEN_W   16
`define ENVELOPE_ADDR_W    16
`define PULSE_REG_W        128
`define PULSE_MEM_ADDR_W   16

// -----------------------------------------------------------------------------
// Pulse register decode start
// -----------------------------------------------------------------------------
`define PULSE_REG_FREQ_START    0
`define PULSE_REG_FREQ_END      31
`define PULSE_REG_PHASE_START   32
`define PULSE_REG_PHASE_END     47
`define PULSE_REG_AMP_START     48
`define PULSE_REG_AMP_END       61
`define PULSE_REG_TLEN_START    64
`define PULSE_REG_TLEN_END      79
`define PULSE_REG_ENV_ADDR_START 80
`define PULSE_REG_ENV_ADDR_END   95




`endif // RISCV_DEFINES_VH