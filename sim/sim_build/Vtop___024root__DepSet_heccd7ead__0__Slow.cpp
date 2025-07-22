// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/jeremymills/Desktop/RISC-V-Quantum/sim/../src/core/core.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__pc_sel_final = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rv1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rv2 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ctrl = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__writeback_result = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__mem_out = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__fetch_stage_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__fetch_stage_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_sel = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__fetch_stage_inst__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__fetch_stage_inst__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_sel = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__decode_stage_inst__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__decode_stage_inst__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__decode_stage_inst__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__decode_stage_inst__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__decode_stage_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__decode_stage_inst__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__decode_stage_inst__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__decode_stage_inst__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__reg_file_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__reg_file_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__reg_file_inst__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__reg_file_inst__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__reg_file_inst__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__reg_file_inst__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__reg_file_inst__DOT__wd = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__reg_file_inst__DOT__rv1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__reg_file_inst__DOT__rv2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core__DOT__reg_file_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__alu_inst__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__alu_inst__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__alu_inst__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__alu_inst__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__branch_comp_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__branch_comp_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__branch_comp_inst__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__branch_comp_inst__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__branch_comp_inst__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__branch_comp_inst__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__branch_comp_inst__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__branch_comp_inst__DOT__diff = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__memory_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__memory_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__memory_inst__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__memory_inst__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__memory_inst__DOT__mem_rw = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__memory_inst__DOT__rdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->core__DOT__memory_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__writeback_mux_inst__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__writeback_mux_inst__DOT__pc_plus_four = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__writeback_mux_inst__DOT__mem_out = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__writeback_mux_inst__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__writeback_mux_inst__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
