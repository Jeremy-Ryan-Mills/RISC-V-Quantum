// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_core.h"

VL_INLINE_OPT void Vtop_core___nba_sequent__TOP__core__2(Vtop_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_core___nba_sequent__TOP__core__2\n"); );
    // Body
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc 
        = ((IData)(vlSelf->reset) ? 0U : vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc_next);
    vlSelf->writeback_mux_inst__DOT__pc_plus_four = 
        ((IData)(4U) + vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc);
    vlSelf->pc = vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc;
    vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc 
        = vlSelf->pc;
    vlSelf->fetch_stage_inst__DOT__pc = vlSelf->pc;
}

VL_INLINE_OPT void Vtop_core___nba_comb__TOP__core__1(Vtop_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_core___nba_comb__TOP__core__1\n"); );
    // Body
    vlSelf->writeback_mux_inst__DOT__reg_out = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                                     >> 1U)))
                                                 ? vlSelf->mem_out
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                                      >> 1U)))
                                                  ? vlSelf->alu_out
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                                       >> 1U)))
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc)
                                                   : 0U)));
    vlSelf->writeback_result = vlSelf->writeback_mux_inst__DOT__reg_out;
    vlSelf->reg_file_inst__DOT__wd = vlSelf->writeback_result;
}
