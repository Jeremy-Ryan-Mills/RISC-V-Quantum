// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop___024unit.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_core);
    __Vhier.remove(&__Vscope_core, &__Vscope_core__alu_inst);
    __Vhier.remove(&__Vscope_core, &__Vscope_core__branch_comp_inst);
    __Vhier.remove(&__Vscope_core, &__Vscope_core__decode_stage_inst);
    __Vhier.remove(&__Vscope_core, &__Vscope_core__fetch_stage_inst);
    __Vhier.remove(&__Vscope_core, &__Vscope_core__memory_inst);
    __Vhier.remove(&__Vscope_core, &__Vscope_core__reg_file_inst);
    __Vhier.remove(&__Vscope_core__decode_stage_inst, &__Vscope_core__decode_stage_inst__ctrl_i);
    __Vhier.remove(&__Vscope_core__decode_stage_inst, &__Vscope_core__decode_stage_inst__decoder_i);
    __Vhier.remove(&__Vscope_core__fetch_stage_inst, &__Vscope_core__fetch_stage_inst__instruction_mem_if_inst);
    __Vhier.remove(&__Vscope_core__fetch_stage_inst, &__Vscope_core__fetch_stage_inst__pc_inst);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_core.configure(this, name(), "core", "core", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_core__alu_inst.configure(this, name(), "core.alu_inst", "alu_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_core__branch_comp_inst.configure(this, name(), "core.branch_comp_inst", "branch_comp_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_core__decode_stage_inst.configure(this, name(), "core.decode_stage_inst", "decode_stage_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_core__decode_stage_inst__ctrl_i.configure(this, name(), "core.decode_stage_inst.ctrl_i", "ctrl_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_core__decode_stage_inst__decoder_i.configure(this, name(), "core.decode_stage_inst.decoder_i", "decoder_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_core__fetch_stage_inst.configure(this, name(), "core.fetch_stage_inst", "fetch_stage_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_core__fetch_stage_inst__instruction_mem_if_inst.configure(this, name(), "core.fetch_stage_inst.instruction_mem_if_inst", "instruction_mem_if_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_core__fetch_stage_inst__pc_inst.configure(this, name(), "core.fetch_stage_inst.pc_inst", "pc_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_core__memory_inst.configure(this, name(), "core.memory_inst", "memory_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_core__reg_file_inst.configure(this, name(), "core.reg_file_inst", "reg_file_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_core__reg_file_inst__unnamedblk1.configure(this, name(), "core.reg_file_inst.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_core);
    __Vhier.add(&__Vscope_core, &__Vscope_core__alu_inst);
    __Vhier.add(&__Vscope_core, &__Vscope_core__branch_comp_inst);
    __Vhier.add(&__Vscope_core, &__Vscope_core__decode_stage_inst);
    __Vhier.add(&__Vscope_core, &__Vscope_core__fetch_stage_inst);
    __Vhier.add(&__Vscope_core, &__Vscope_core__memory_inst);
    __Vhier.add(&__Vscope_core, &__Vscope_core__reg_file_inst);
    __Vhier.add(&__Vscope_core__decode_stage_inst, &__Vscope_core__decode_stage_inst__ctrl_i);
    __Vhier.add(&__Vscope_core__decode_stage_inst, &__Vscope_core__decode_stage_inst__decoder_i);
    __Vhier.add(&__Vscope_core__fetch_stage_inst, &__Vscope_core__fetch_stage_inst__instruction_mem_if_inst);
    __Vhier.add(&__Vscope_core__fetch_stage_inst, &__Vscope_core__fetch_stage_inst__pc_inst);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"reset", &(TOP.reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_core.varInsert(__Vfinal,"alu_a", &(TOP.core__DOT__alu_a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"alu_b", &(TOP.core__DOT__alu_b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"alu_out", &(TOP.core__DOT__alu_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"branch_taken", &(TOP.core__DOT__branch_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core.varInsert(__Vfinal,"clk", &(TOP.core__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core.varInsert(__Vfinal,"ctrl", &(TOP.core__DOT__ctrl), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_core.varInsert(__Vfinal,"id_ex_ctrl", &(TOP.core__DOT__id_ex_ctrl), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_core.varInsert(__Vfinal,"id_ex_imm", &(TOP.core__DOT__id_ex_imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"id_ex_pc", &(TOP.core__DOT__id_ex_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"id_ex_rd", &(TOP.core__DOT__id_ex_rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core.varInsert(__Vfinal,"id_ex_rs1", &(TOP.core__DOT__id_ex_rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core.varInsert(__Vfinal,"id_ex_rs2", &(TOP.core__DOT__id_ex_rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core.varInsert(__Vfinal,"id_ex_rv1", &(TOP.core__DOT__id_ex_rv1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"id_ex_rv2", &(TOP.core__DOT__id_ex_rv2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"if_id_instr", &(TOP.core__DOT__if_id_instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"if_id_pc", &(TOP.core__DOT__if_id_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"imm", &(TOP.core__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"instr", &(TOP.core__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"mem_out", &(TOP.core__DOT__mem_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"pc", &(TOP.core__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"pc_sel_final", &(TOP.core__DOT__pc_sel_final), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core.varInsert(__Vfinal,"rd", &(TOP.core__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core.varInsert(__Vfinal,"reset", &(TOP.core__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core.varInsert(__Vfinal,"rs1", &(TOP.core__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core.varInsert(__Vfinal,"rs2", &(TOP.core__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core.varInsert(__Vfinal,"rv1", &(TOP.core__DOT__rv1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"rv2", &(TOP.core__DOT__rv2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"writeback_result", &(TOP.core__DOT__writeback_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__alu_inst.varInsert(__Vfinal,"alu_op", &(TOP.core__DOT__alu_inst__DOT__alu_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_core__alu_inst.varInsert(__Vfinal,"operand_a", &(TOP.core__DOT__alu_inst__DOT__operand_a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__alu_inst.varInsert(__Vfinal,"operand_b", &(TOP.core__DOT__alu_inst__DOT__operand_b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__alu_inst.varInsert(__Vfinal,"result", &(TOP.core__DOT__alu_inst__DOT__result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__branch_comp_inst.varInsert(__Vfinal,"branch_taken", &(TOP.core__DOT__branch_comp_inst__DOT__branch_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__branch_comp_inst.varInsert(__Vfinal,"clk", &(TOP.core__DOT__branch_comp_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__branch_comp_inst.varInsert(__Vfinal,"diff", &(TOP.core__DOT__branch_comp_inst__DOT__diff), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__branch_comp_inst.varInsert(__Vfinal,"funct3", &(TOP.core__DOT__branch_comp_inst__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_core__branch_comp_inst.varInsert(__Vfinal,"instr", &(TOP.core__DOT__branch_comp_inst__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__branch_comp_inst.varInsert(__Vfinal,"reset", &(TOP.core__DOT__branch_comp_inst__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__branch_comp_inst.varInsert(__Vfinal,"rs1", &(TOP.core__DOT__branch_comp_inst__DOT__rs1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__branch_comp_inst.varInsert(__Vfinal,"rs2", &(TOP.core__DOT__branch_comp_inst__DOT__rs2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__decode_stage_inst.varInsert(__Vfinal,"ctrl", &(TOP.core__DOT__decode_stage_inst__DOT__ctrl), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_core__decode_stage_inst.varInsert(__Vfinal,"funct3", &(TOP.core__DOT__decode_stage_inst__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_core__decode_stage_inst.varInsert(__Vfinal,"funct7", &(TOP.core__DOT__decode_stage_inst__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_core__decode_stage_inst.varInsert(__Vfinal,"imm", &(TOP.core__DOT__decode_stage_inst__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__decode_stage_inst.varInsert(__Vfinal,"instr", &(TOP.core__DOT__decode_stage_inst__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__decode_stage_inst.varInsert(__Vfinal,"opcode", &(TOP.core__DOT__decode_stage_inst__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_core__decode_stage_inst.varInsert(__Vfinal,"rd", &(TOP.core__DOT__decode_stage_inst__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core__decode_stage_inst.varInsert(__Vfinal,"rs1", &(TOP.core__DOT__decode_stage_inst__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core__decode_stage_inst.varInsert(__Vfinal,"rs2", &(TOP.core__DOT__decode_stage_inst__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core__decode_stage_inst__ctrl_i.varInsert(__Vfinal,"ctrl", &(TOP.core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_core__decode_stage_inst__ctrl_i.varInsert(__Vfinal,"funct3", &(TOP.core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_core__decode_stage_inst__ctrl_i.varInsert(__Vfinal,"funct7", &(TOP.core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_core__decode_stage_inst__ctrl_i.varInsert(__Vfinal,"opcode", &(TOP.core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_core__decode_stage_inst__decoder_i.varInsert(__Vfinal,"funct3", &(TOP.core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_core__decode_stage_inst__decoder_i.varInsert(__Vfinal,"funct7", &(TOP.core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_core__decode_stage_inst__decoder_i.varInsert(__Vfinal,"imm", &(TOP.core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__decode_stage_inst__decoder_i.varInsert(__Vfinal,"instr", &(TOP.core__DOT__decode_stage_inst__DOT__decoder_i__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__decode_stage_inst__decoder_i.varInsert(__Vfinal,"opcode", &(TOP.core__DOT__decode_stage_inst__DOT__decoder_i__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_core__decode_stage_inst__decoder_i.varInsert(__Vfinal,"rd", &(TOP.core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core__decode_stage_inst__decoder_i.varInsert(__Vfinal,"rs1", &(TOP.core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core__decode_stage_inst__decoder_i.varInsert(__Vfinal,"rs2", &(TOP.core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core__fetch_stage_inst.varInsert(__Vfinal,"alu_out", &(TOP.core__DOT__fetch_stage_inst__DOT__alu_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__fetch_stage_inst.varInsert(__Vfinal,"clk", &(TOP.core__DOT__fetch_stage_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__fetch_stage_inst.varInsert(__Vfinal,"instr", &(TOP.core__DOT__fetch_stage_inst__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__fetch_stage_inst.varInsert(__Vfinal,"pc", &(TOP.core__DOT__fetch_stage_inst__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__fetch_stage_inst.varInsert(__Vfinal,"pc_sel", &(TOP.core__DOT__fetch_stage_inst__DOT__pc_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__fetch_stage_inst.varInsert(__Vfinal,"reset", &(TOP.core__DOT__fetch_stage_inst__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__fetch_stage_inst__instruction_mem_if_inst.varInsert(__Vfinal,"clk", &(TOP.core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__fetch_stage_inst__instruction_mem_if_inst.varInsert(__Vfinal,"instr", &(TOP.core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__fetch_stage_inst__instruction_mem_if_inst.varInsert(__Vfinal,"mem", &(TOP.core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,1023);
        __Vscope_core__fetch_stage_inst__instruction_mem_if_inst.varInsert(__Vfinal,"pc", &(TOP.core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__fetch_stage_inst__pc_inst.varInsert(__Vfinal,"alu_out", &(TOP.core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__alu_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__fetch_stage_inst__pc_inst.varInsert(__Vfinal,"clk", &(TOP.core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__fetch_stage_inst__pc_inst.varInsert(__Vfinal,"pc", &(TOP.core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__fetch_stage_inst__pc_inst.varInsert(__Vfinal,"pc_next", &(TOP.core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_next), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__fetch_stage_inst__pc_inst.varInsert(__Vfinal,"pc_sel", &(TOP.core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__fetch_stage_inst__pc_inst.varInsert(__Vfinal,"reset", &(TOP.core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__memory_inst.varInsert(__Vfinal,"addr", &(TOP.core__DOT__memory_inst__DOT__addr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__memory_inst.varInsert(__Vfinal,"clk", &(TOP.core__DOT__memory_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__memory_inst.varInsert(__Vfinal,"mem", &(TOP.core__DOT__memory_inst__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,1023);
        __Vscope_core__memory_inst.varInsert(__Vfinal,"mem_rw", &(TOP.core__DOT__memory_inst__DOT__mem_rw), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__memory_inst.varInsert(__Vfinal,"rdata", &(TOP.core__DOT__memory_inst__DOT__rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__memory_inst.varInsert(__Vfinal,"reset", &(TOP.core__DOT__memory_inst__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__memory_inst.varInsert(__Vfinal,"wdata", &(TOP.core__DOT__memory_inst__DOT__wdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__reg_file_inst.varInsert(__Vfinal,"clk", &(TOP.core__DOT__reg_file_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__reg_file_inst.varInsert(__Vfinal,"rd", &(TOP.core__DOT__reg_file_inst__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core__reg_file_inst.varInsert(__Vfinal,"regs", &(TOP.core__DOT__reg_file_inst__DOT__regs), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,31);
        __Vscope_core__reg_file_inst.varInsert(__Vfinal,"reset", &(TOP.core__DOT__reg_file_inst__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__reg_file_inst.varInsert(__Vfinal,"rs1", &(TOP.core__DOT__reg_file_inst__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core__reg_file_inst.varInsert(__Vfinal,"rs2", &(TOP.core__DOT__reg_file_inst__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_core__reg_file_inst.varInsert(__Vfinal,"rv1", &(TOP.core__DOT__reg_file_inst__DOT__rv1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__reg_file_inst.varInsert(__Vfinal,"rv2", &(TOP.core__DOT__reg_file_inst__DOT__rv2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__reg_file_inst.varInsert(__Vfinal,"wd", &(TOP.core__DOT__reg_file_inst__DOT__wd), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_core__reg_file_inst.varInsert(__Vfinal,"we", &(TOP.core__DOT__reg_file_inst__DOT__we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_core__reg_file_inst__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
    }
}
