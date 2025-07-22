// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_core.h"

VL_ATTR_COLD void Vtop_core___ctor_var_reset(Vtop_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_core___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->pc_sel_final = VL_RAND_RESET_I(1);
    vlSelf->alu_out = VL_RAND_RESET_I(32);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->rv1 = VL_RAND_RESET_I(32);
    vlSelf->rv2 = VL_RAND_RESET_I(32);
    vlSelf->rs1 = VL_RAND_RESET_I(5);
    vlSelf->rs2 = VL_RAND_RESET_I(5);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->imm = VL_RAND_RESET_I(32);
    vlSelf->ctrl = VL_RAND_RESET_I(12);
    vlSelf->writeback_result = VL_RAND_RESET_I(32);
    vlSelf->mem_out = VL_RAND_RESET_I(32);
    vlSelf->branch_taken = VL_RAND_RESET_I(1);
    vlSelf->alu_a = VL_RAND_RESET_I(32);
    vlSelf->alu_b = VL_RAND_RESET_I(32);
    vlSelf->fetch_stage_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fetch_stage_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->fetch_stage_inst__DOT__pc_sel = VL_RAND_RESET_I(1);
    vlSelf->fetch_stage_inst__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->fetch_stage_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->fetch_stage_inst__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc_sel = VL_RAND_RESET_I(1);
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->decode_stage_inst__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->decode_stage_inst__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->decode_stage_inst__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->decode_stage_inst__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->decode_stage_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->decode_stage_inst__DOT__ctrl = VL_RAND_RESET_I(12);
    vlSelf->decode_stage_inst__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->decode_stage_inst__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->decode_stage_inst__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = VL_RAND_RESET_I(12);
    vlSelf->reg_file_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->reg_file_inst__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->reg_file_inst__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->reg_file_inst__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->reg_file_inst__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->reg_file_inst__DOT__wd = VL_RAND_RESET_I(32);
    vlSelf->reg_file_inst__DOT__rv1 = VL_RAND_RESET_I(32);
    vlSelf->reg_file_inst__DOT__rv2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->reg_file_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->alu_inst__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->alu_inst__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->alu_inst__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->alu_inst__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->branch_comp_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->branch_comp_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->branch_comp_inst__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->branch_comp_inst__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->branch_comp_inst__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->branch_comp_inst__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->branch_comp_inst__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->branch_comp_inst__DOT__diff = VL_RAND_RESET_I(32);
    vlSelf->writeback_mux_inst__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->writeback_mux_inst__DOT__pc_plus_four = VL_RAND_RESET_I(32);
    vlSelf->writeback_mux_inst__DOT__mem_out = VL_RAND_RESET_I(32);
    vlSelf->writeback_mux_inst__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->writeback_mux_inst__DOT__reg_out = VL_RAND_RESET_I(32);
}
