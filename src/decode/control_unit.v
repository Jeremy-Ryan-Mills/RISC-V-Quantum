module control_unit (
    input  logic [6:0] opcode,
    input  logic [2:0] funct3,
    input  logic [6:0] funct7,
    output control_signals_t ctrl
);

    always_comb begin
        // Default values (NOP)
        ctrl = '{
            reg_write  : 1'b0,
            mem_read   : 1'b0,
            mem_write  : 1'b0,
            alu_op     : 4'b0000,
            alu_src    : 1'b0,
            mem_to_reg : 1'b0,
            branch     : 1'b0,
            jump       : 1'b0
        };

        case (opcode)
            `OPCODE_OP: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel   = 1'b0; // register
                ctrl.a_sel   = 1'b0; // register
                ctrl.wb_sel  = 2'b01; // alu result

                case ({funct7, funct3})
                    {`FUNCT7_ADD, `FUNCT3_ADD_SUB}: ctrl.alu_op = 4'b0000; // ADD
                    {`FUNCT7_SUB, `FUNCT3_ADD_SUB}: ctrl.alu_op = 4'b0001; // SUB
                    {7'b0000000, `FUNCT3_AND}     : ctrl.alu_op = 4'b0010; // AND
                    {7'b0000000, `FUNCT3_OR}      : ctrl.alu_op = 4'b0011; // OR
                    {7'b0000000, `FUNCT3_XOR}     : ctrl.alu_op = 4'b0100; // XOR
                    {7'b0000000, `FUNCT3_SLL}     : ctrl.alu_op = 4'b0101; // SLL
                    {`FUNCT7_SRL, `FUNCT3_SRL_SRA} : ctrl.alu_op = 4'b0110; // SRL
                    {`FUNCT7_SRA, `FUNCT3_SRL_SRA} : ctrl.alu_op = 4'b0111; // SRA
                    {7'b0000000, `FUNCT3_SLT}    : ctrl.alu_op = 4'b1000; // SLT
                    {7'b0000000, `FUNCT3_SLTU}: ctrl.alu_op = 4'b1001; // SLTU
                    default                      : ctrl.alu_op = 4'b0000;
                endcase
            end

            `OPCODE_OP_IMM: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel   = 1'b1; // immediate
                ctrl.a_sel   = 1'b0;
                ctrl.wb_sel  = 2'b01;

                case (funct3)
                    `FUNCT3_ADD_SUB: ctrl.alu_op = 4'b0000; // ADDI
                    `FUNCT3_AND:     ctrl.alu_op = 4'b0010; // ANDI
                    `FUNCT3_OR:      ctrl.alu_op = 4'b0011; // ORI
                    `FUNCT3_XOR:     ctrl.alu_op = 4'b0100; // XORI
                    `FUNCT3_SLL:     ctrl.alu_op = 4'b0101; // SLLI
                    `FUNCT3_SLT:     ctrl.alu_op = 4'b1000; // SLTI
                    `FUNCT3_SLTU:    ctrl.alu_op = 4'b1001; // SLTIU
                    `FUNCT3_SRL_SRA: ctrl.alu_op = (funct7 == `FUNCT7_SRA) ? 4'b0111 : 4'b0110; // SRAI/SRLI
                    default:          ctrl.alu_op = 4'b0000;
                endcase
            end

            `OPCODE_LOAD: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel   = 1'b1; // base + offset
                ctrl.a_sel   = 1'b0;
                ctrl.alu_op  = 4'b0000;
                ctrl.wb_sel  = 2'b00;   // from memory
            end

            `OPCODE_STORE: begin
                ctrl.reg_wen = 1'b0;
                ctrl.b_sel   = 1'b1;
                ctrl.a_sel   = 1'b0;
                ctrl.alu_op  = 4'b0000; // ADD
                ctrl.mem_rw  = 1'b1;
            end

            `OPCODE_BRANCH: begin
                ctrl.reg_wen = 1'b0;
                ctrl.b_sel   = 1'b1;
                ctrl.a_sel   = 1'b1;
                ctrl.alu_op  = 4'b0001; // SUB for comparison (used internally)

                // Use funct3 to set brun
                case (funct3)
                    3'b000, 3'b001, 3'b100, 3'b101: ctrl.brun = 1'b0; // BEQ, BNE, BLT, BGE (signed)
                    3'b110, 3'b111:               ctrl.brun = 1'b1; // BLTU, BGEU (unsigned)
                    default:                      ctrl.brun = 1'b0;
                endcase
            end

            `OPCODE_JAL, `OPCODE_JALR: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel = 1'b1;
                ctrl.a_sel = 1'b0;
                ctrl.wb_sel  = 2'b10;   // PC+4
            end

            `OPCODE_LUI: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel   = 1'b1;
                ctrl.a_sel   = 1'b0;
                ctrl.alu_op  = 4'b1010; // pass-through upper bits
                ctrl.wb_sel  = 2'b01;
            end

            `OPCODE_AUIPC: begin
                ctrl.reg_wen = 1'b1;
                ctrl.b_sel   = 1'b1;
                ctrl.a_sel   = 1'b1;    // PC
                ctrl.alu_op  = 4'b0000;
                ctrl.wb_sel  = 2'b01;
            end

            default: begin
                ctrl = '0;
            end
        endcase
    end
endmodule