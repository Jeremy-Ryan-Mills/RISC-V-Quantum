`include "common/riscv_defines.vh"

module control_unit (
    input  logic [6:0] opcode,
    input  logic [2:0] funct3,
    input  logic [6:0] funct7,
    output control_signals_t ctrl
);

    always_comb begin
        // Default values (NOP)
        ctrl = '{
            reg_wen  : 1'b0,
            alu_op   : 4'b0000,
            brun     : 1'b0,
            b_sel    : 1'b0,
            a_sel    : 1'b0,
            mem_rw   : 1'b0,
            wb_sel   : 2'b00,
            pc_sel   : 1'b0 
        };

        case (opcode)
            `OPCODE_OP: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel   = 1'b0; // register
                ctrl.a_sel   = 1'b0; // register
                ctrl.wb_sel  = 2'b01; // alu result

                case ({funct7, funct3})
                    {`FUNCT7_ADD, `FUNCT3_ADD_SUB}: ctrl.alu_op = `ALU_OP_ADD; // ADD
                    {`FUNCT7_SUB, `FUNCT3_ADD_SUB}: ctrl.alu_op = `ALU_OP_SUB; // SUB
                    {7'b0000000, `FUNCT3_AND}     : ctrl.alu_op = `ALU_OP_AND; // AND
                    {7'b0000000, `FUNCT3_OR}      : ctrl.alu_op = `ALU_OP_OR; // OR
                    {7'b0000000, `FUNCT3_XOR}     : ctrl.alu_op = `ALU_OP_XOR; // XOR
                    {7'b0000000, `FUNCT3_SLL}     : ctrl.alu_op = `ALU_OP_SLL; // SLL
                    {`FUNCT7_SRL, `FUNCT3_SRL_SRA} : ctrl.alu_op = `ALU_OP_SRL; // SRL
                    {`FUNCT7_SRA, `FUNCT3_SRL_SRA} : ctrl.alu_op = `ALU_OP_SRA; // SRA
                    {7'b0000000, `FUNCT3_SLT}    : ctrl.alu_op = `ALU_OP_SLT; // SLT
                    {7'b0000000, `FUNCT3_SLTU}: ctrl.alu_op = `ALU_OP_SLTU; // SLTU
                    default                      : ctrl.alu_op = `ALU_OP_ID_A;
                endcase
            end

            `OPCODE_OP_IMM: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel   = 1'b1; // immediate
                ctrl.a_sel   = 1'b0;
                ctrl.wb_sel  = 2'b01;

                case (funct3)
                    `FUNCT3_ADD_SUB: ctrl.alu_op = `ALU_OP_ADD; // ADDI
                    `FUNCT3_AND:     ctrl.alu_op = `ALU_OP_AND; // ANDI
                    `FUNCT3_OR:      ctrl.alu_op = `ALU_OP_OR; // ORI
                    `FUNCT3_XOR:     ctrl.alu_op = `ALU_OP_XOR; // XORI
                    `FUNCT3_SLL:     ctrl.alu_op = `ALU_OP_SLL; // SLLI
                    `FUNCT3_SLT:     ctrl.alu_op = `ALU_OP_SLT; // SLTI
                    `FUNCT3_SLTU:    ctrl.alu_op = `ALU_OP_SLTU; // SLTIU
                    `FUNCT3_SRL_SRA: ctrl.alu_op = (funct7 == `FUNCT7_SRA) ? `ALU_OP_SRA : `ALU_OP_SRL; // SRAI/SRLI
                    default:          ctrl.alu_op = `ALU_OP_ID_A;
                endcase
            end

            `OPCODE_LOAD: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel   = 1'b1; // base + offset
                ctrl.a_sel   = 1'b0;
                ctrl.alu_op  = `ALU_OP_ADD;
                ctrl.wb_sel  = 2'b00;   // from memory
            end

            `OPCODE_STORE: begin
                ctrl.reg_wen = 1'b0;
                ctrl.b_sel   = 1'b1;
                ctrl.a_sel   = 1'b0;
                ctrl.alu_op  = `ALU_OP_ADD; // ADD
                ctrl.mem_rw  = 1'b1;
            end

            `OPCODE_BRANCH: begin
                ctrl.reg_wen = 1'b0;
                ctrl.b_sel   = 1'b1;
                ctrl.a_sel   = 1'b1;
                ctrl.alu_op  = `ALU_OP_SUB; // SUB for comparison (used internally)

                // Use funct3 to set brun
                case (funct3)
                    3'b000, 3'b001, 3'b100, 3'b101: ctrl.brun = 1'b0; // BEQ, BNE, BLT, BGE (signed)
                    3'b110, 3'b111:               ctrl.brun = 1'b1; // BLTU, BGEU (unsigned)
                    default:                      ctrl.brun = 1'b0;
                endcase
            end

            `OPCODE_JAL: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel = 1'b1;
                ctrl.a_sel = 1'b1;
                ctrl.alu_op  = `ALU_OP_ADD;
                ctrl.wb_sel  = 2'b10;   // PC+4
                ctrl.pc_sel  = 1'b1;
            end

            `OPCODE_JALR: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel = 1'b1;
                ctrl.a_sel = 1'b0;
                ctrl.alu_op  = `ALU_OP_ADD;
                ctrl.wb_sel  = 2'b10;   // PC+4
                ctrl.pc_sel  = 1'b1;
            end
            `OPCODE_LUI: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel   = 1'b1;
                ctrl.a_sel   = 1'b1;
                ctrl.alu_op  = `ALU_OP_ID_B; // pass-through upper bits
                ctrl.wb_sel  = 2'b01;
            end

            `OPCODE_AUIPC: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel   = 1'b1;
                ctrl.a_sel   = 1'b1;    // PC
                ctrl.alu_op  = `ALU_OP_ADD;
                ctrl.wb_sel  = 2'b01;
            end

            default: begin
                ctrl = '0;
            end
        endcase
    end
endmodule