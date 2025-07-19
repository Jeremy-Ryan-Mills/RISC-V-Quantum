typedef struct packed {
    logic        reg_wen;     
    logic [3:0]  alu_op;      
    logic        brun;        // Branch unsigned
    logic        b_sel;       // 0: reg, 1: imm (for B input to ALU)
    logic        a_sel;       // 0: reg, 1: PC (for A input to ALU)
    logic        mem_rw;     
    logic [1:0]  wb_sel;      // 0: mem, 1: alu, 2: pc+4
} control_signals_t;