// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->core__DOT__reg_file_inst__DOT__we = (1U 
                                                 & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                    >> 0xbU));
    vlSelf->core__DOT__reg_file_inst__DOT__rd = vlSelf->core__DOT__id_ex_rd;
    vlSelf->core__DOT__alu_inst__DOT__alu_op = (0xfU 
                                                & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                   >> 7U));
    vlSelf->core__DOT__branch_comp_inst__DOT__rs1 = vlSelf->core__DOT__id_ex_rv1;
    vlSelf->core__DOT__branch_comp_inst__DOT__rs2 = vlSelf->core__DOT__id_ex_rv2;
    vlSelf->core__DOT__branch_comp_inst__DOT__instr 
        = vlSelf->core__DOT__if_id_instr;
    vlSelf->core__DOT__memory_inst__DOT__wdata = vlSelf->core__DOT__id_ex_rv2;
    vlSelf->core__DOT__memory_inst__DOT__mem_rw = (1U 
                                                   & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                      >> 3U));
    vlSelf->core__DOT__branch_taken = vlSelf->core__DOT__branch_comp_inst__DOT__branch_taken;
    vlSelf->core__DOT__branch_comp_inst__DOT__diff 
        = (vlSelf->core__DOT__id_ex_rv1 - vlSelf->core__DOT__id_ex_rv2);
    vlSelf->core__DOT__decode_stage_inst__DOT__instr 
        = vlSelf->core__DOT__if_id_instr;
    vlSelf->core__DOT__instr = vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr;
    vlSelf->core__DOT__rd = (0x1fU & (vlSelf->core__DOT__if_id_instr 
                                      >> 7U));
    vlSelf->core__DOT__pc = vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc;
    vlSelf->core__DOT__reset = vlSelf->reset;
    vlSelf->core__DOT__decode_stage_inst__DOT__funct7 
        = (vlSelf->core__DOT__if_id_instr >> 0x19U);
    vlSelf->core__DOT__clk = vlSelf->clk;
    vlSelf->core__DOT__rs1 = (0x1fU & (vlSelf->core__DOT__if_id_instr 
                                       >> 0xfU));
    vlSelf->core__DOT__rs2 = (0x1fU & (vlSelf->core__DOT__if_id_instr 
                                       >> 0x14U));
    vlSelf->core__DOT__decode_stage_inst__DOT__funct3 
        = (7U & (vlSelf->core__DOT__if_id_instr >> 0xcU));
    vlSelf->core__DOT__mem_out = vlSelf->core__DOT__memory_inst__DOT__rdata;
    vlSelf->core__DOT__decode_stage_inst__DOT__opcode 
        = (0x7fU & vlSelf->core__DOT__if_id_instr);
    vlSelf->core__DOT__alu_a = ((0x10U & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                 ? vlSelf->core__DOT__id_ex_pc
                                 : vlSelf->core__DOT__id_ex_rv1);
    vlSelf->core__DOT__alu_b = ((0x20U & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                 ? vlSelf->core__DOT__id_ex_imm
                                 : vlSelf->core__DOT__id_ex_rv2);
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__instr 
        = vlSelf->core__DOT__decode_stage_inst__DOT__instr;
    vlSelf->core__DOT__fetch_stage_inst__DOT__instr 
        = vlSelf->core__DOT__instr;
    vlSelf->core__DOT__decode_stage_inst__DOT__rd = vlSelf->core__DOT__rd;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rd 
        = vlSelf->core__DOT__rd;
    vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc 
        = vlSelf->core__DOT__pc;
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc = vlSelf->core__DOT__pc;
    vlSelf->core__DOT__reg_file_inst__DOT__reset = vlSelf->core__DOT__reset;
    vlSelf->core__DOT__branch_comp_inst__DOT__reset 
        = vlSelf->core__DOT__reset;
    vlSelf->core__DOT__memory_inst__DOT__reset = vlSelf->core__DOT__reset;
    vlSelf->core__DOT__fetch_stage_inst__DOT__reset 
        = vlSelf->core__DOT__reset;
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct7 
        = vlSelf->core__DOT__decode_stage_inst__DOT__funct7;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct7 
        = vlSelf->core__DOT__decode_stage_inst__DOT__funct7;
    vlSelf->core__DOT__reg_file_inst__DOT__clk = vlSelf->core__DOT__clk;
    vlSelf->core__DOT__branch_comp_inst__DOT__clk = vlSelf->core__DOT__clk;
    vlSelf->core__DOT__memory_inst__DOT__clk = vlSelf->core__DOT__clk;
    vlSelf->core__DOT__fetch_stage_inst__DOT__clk = vlSelf->core__DOT__clk;
    vlSelf->core__DOT__reg_file_inst__DOT__rs1 = vlSelf->core__DOT__rs1;
    vlSelf->core__DOT__decode_stage_inst__DOT__rs1 
        = vlSelf->core__DOT__rs1;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs1 
        = vlSelf->core__DOT__rs1;
    vlSelf->core__DOT__reg_file_inst__DOT__rs2 = vlSelf->core__DOT__rs2;
    vlSelf->core__DOT__decode_stage_inst__DOT__rs2 
        = vlSelf->core__DOT__rs2;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs2 
        = vlSelf->core__DOT__rs2;
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct3 
        = vlSelf->core__DOT__decode_stage_inst__DOT__funct3;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct3 
        = vlSelf->core__DOT__decode_stage_inst__DOT__funct3;
    vlSelf->core__DOT__branch_comp_inst__DOT__funct3 
        = vlSelf->core__DOT__decode_stage_inst__DOT__funct3;
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__opcode 
        = vlSelf->core__DOT__decode_stage_inst__DOT__opcode;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__opcode 
        = vlSelf->core__DOT__decode_stage_inst__DOT__opcode;
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    if ((0x40U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            } else if ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                            vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm 
                                = (((- (IData)((vlSelf->core__DOT__if_id_instr 
                                                >> 0x1fU))) 
                                    << 0x15U) | ((0x100000U 
                                                  & (vlSelf->core__DOT__if_id_instr 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->core__DOT__if_id_instr) 
                                                    | ((0x800U 
                                                        & (vlSelf->core__DOT__if_id_instr 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->core__DOT__if_id_instr 
                                                             >> 0x14U))))));
                            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x30U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (5U | (0xff8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        } else {
                            vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                        }
                    } else {
                        vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x20U | (0xfcfU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (5U | (0xff8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                    } else {
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm 
                        = (((- (IData)((vlSelf->core__DOT__if_id_instr 
                                        >> 0x1fU))) 
                            << 0xdU) | ((0x1000U & 
                                         (vlSelf->core__DOT__if_id_instr 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->core__DOT__if_id_instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->core__DOT__if_id_instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->core__DOT__if_id_instr 
                                                    >> 7U))))));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x7ffU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x30U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = ((0x83fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                           | (0x80U | (((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3) 
                                               >> 2U)) 
                                        && (1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3) 
                                                  >> 1U))) 
                                       << 6U)));
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            if ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            } else if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                        vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm 
                            = (0xfffff000U & vlSelf->core__DOT__if_id_instr);
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x30U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x580U | (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (2U | (0xff9U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                    } else {
                        vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0xfcfU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (2U | (0xff9U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = ((0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                               | ((((((((((0U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))) 
                                          | (0x100U 
                                             == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                         | (7U == (
                                                   ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                        | (6U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                       | (4U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                      | (1U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                 << 3U) 
                                                | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                     | (5U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                << 3U) 
                                               | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                    | (0x105U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))))
                                    ? ((0U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                << 3U) 
                                               | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                        ? 0U : ((0x100U 
                                                 == 
                                                 (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                                 ? 1U
                                                 : 
                                                ((7U 
                                                  == 
                                                  (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                                  ? 2U
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                                      ? 6U
                                                      : 7U)))))))
                                    : ((2U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                << 3U) 
                                               | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                        ? 8U : ((3U 
                                                 == 
                                                 (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                                 ? 9U
                                                 : 0xaU))) 
                                  << 7U));
                    } else {
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            }
        } else if ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm 
                    = (((- (IData)((vlSelf->core__DOT__if_id_instr 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->core__DOT__if_id_instr 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->core__DOT__if_id_instr 
                                                      >> 7U))));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x7ffU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x20U | (0xfcfU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (8U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            } else {
                vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        if ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm 
                        = (0xfffff000U & vlSelf->core__DOT__if_id_instr);
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x30U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (2U | (0xff9U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm 
                    = (((- (IData)((vlSelf->core__DOT__if_id_instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->core__DOT__if_id_instr 
                          >> 0x14U));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x20U | (0xfcfU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (2U | (0xff9U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = ((0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                       | (((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                            ? ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                ? ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                                   ? 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7))
                                                    ? 7U
                                                    : 6U)
                                                   : 4U))
                            : ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                ? ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                    ? 9U : 8U) : ((1U 
                                                   & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                                   ? 5U
                                                   : 0U))) 
                          << 7U));
            } else {
                vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    } else if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    } else if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm 
                = (((- (IData)((vlSelf->core__DOT__if_id_instr 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelf->core__DOT__if_id_instr 
                      >> 0x14U));
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x20U | (0xfcfU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0xff9U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
        } else {
            vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else {
        vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    }
    vlSelf->core__DOT__pc_sel_final = ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                       & ((IData)(vlSelf->core__DOT__branch_comp_inst__DOT__branch_taken) 
                                          | (0x63U 
                                             != (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))));
    vlSelf->core__DOT__alu_inst__DOT__operand_a = vlSelf->core__DOT__alu_a;
    vlSelf->core__DOT__alu_inst__DOT__operand_b = vlSelf->core__DOT__alu_b;
    vlSelf->core__DOT__alu_inst__DOT__result = ((0x400U 
                                                 & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                 ? 
                                                ((0x200U 
                                                  & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                  ? 0U
                                                  : 
                                                 ((0x100U 
                                                   & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? vlSelf->core__DOT__alu_b
                                                    : vlSelf->core__DOT__alu_a)
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? 
                                                   ((vlSelf->core__DOT__alu_a 
                                                     < vlSelf->core__DOT__alu_b)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelf->core__DOT__alu_a, vlSelf->core__DOT__alu_b)
                                                     ? 1U
                                                     : 0U))))
                                                 : 
                                                ((0x200U 
                                                  & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                  ? 
                                                 ((0x100U 
                                                   & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->core__DOT__alu_a, 
                                                                  (0x1fU 
                                                                   & vlSelf->core__DOT__alu_b))
                                                    : 
                                                   (vlSelf->core__DOT__alu_a 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->core__DOT__alu_b)))
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? 
                                                   (vlSelf->core__DOT__alu_a 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->core__DOT__alu_b))
                                                    : 
                                                   (vlSelf->core__DOT__alu_a 
                                                    ^ vlSelf->core__DOT__alu_b)))
                                                  : 
                                                 ((0x100U 
                                                   & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? 
                                                   (vlSelf->core__DOT__alu_a 
                                                    | vlSelf->core__DOT__alu_b)
                                                    : 
                                                   (vlSelf->core__DOT__alu_a 
                                                    & vlSelf->core__DOT__alu_b))
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? 
                                                   (vlSelf->core__DOT__alu_a 
                                                    - vlSelf->core__DOT__alu_b)
                                                    : 
                                                   (vlSelf->core__DOT__alu_a 
                                                    + vlSelf->core__DOT__alu_b)))));
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__reset 
        = vlSelf->core__DOT__fetch_stage_inst__DOT__reset;
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk 
        = vlSelf->core__DOT__fetch_stage_inst__DOT__clk;
    vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__clk 
        = vlSelf->core__DOT__fetch_stage_inst__DOT__clk;
    vlSelf->core__DOT__imm = vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm;
    vlSelf->core__DOT__ctrl = vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl;
    if (vlSelf->core__DOT__pc_sel_final) {
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_sel = 1U;
        vlSelf->core__DOT__alu_out = vlSelf->core__DOT__alu_inst__DOT__result;
        vlSelf->core__DOT__decode_stage_inst__DOT__imm 
            = vlSelf->core__DOT__imm;
        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl 
            = vlSelf->core__DOT__ctrl;
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_sel 
            = vlSelf->core__DOT__fetch_stage_inst__DOT__pc_sel;
        vlSelf->core__DOT__memory_inst__DOT__addr = vlSelf->core__DOT__alu_out;
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_next 
            = ((IData)(vlSelf->core__DOT__pc_sel_final)
                ? vlSelf->core__DOT__alu_out : ((IData)(4U) 
                                                + vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc));
    } else {
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_sel = 0U;
        vlSelf->core__DOT__alu_out = vlSelf->core__DOT__alu_inst__DOT__result;
        vlSelf->core__DOT__decode_stage_inst__DOT__imm 
            = vlSelf->core__DOT__imm;
        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl 
            = vlSelf->core__DOT__ctrl;
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_sel 
            = vlSelf->core__DOT__fetch_stage_inst__DOT__pc_sel;
        vlSelf->core__DOT__memory_inst__DOT__addr = vlSelf->core__DOT__alu_out;
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_next 
            = ((IData)(4U) + vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc);
    }
    vlSelf->core__DOT__fetch_stage_inst__DOT__alu_out 
        = vlSelf->core__DOT__alu_out;
    vlSelf->core__DOT__writeback_result = ((0U == (3U 
                                                   & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                      >> 1U)))
                                            ? vlSelf->core__DOT__mem_out
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                    >> 1U)))
                                                ? vlSelf->core__DOT__alu_out
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                        >> 1U)))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->core__DOT__id_ex_pc)
                                                    : 0U)));
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__alu_out 
        = vlSelf->core__DOT__fetch_stage_inst__DOT__alu_out;
    vlSelf->core__DOT__reg_file_inst__DOT__wd = vlSelf->core__DOT__writeback_result;
    vlSelf->core__DOT__rv1 = ((0U == (IData)(vlSelf->core__DOT__rs1))
                               ? 0U : ((((IData)(vlSelf->core__DOT__id_ex_rd) 
                                         == (IData)(vlSelf->core__DOT__rs1)) 
                                        & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                           >> 0xbU))
                                        ? vlSelf->core__DOT__writeback_result
                                        : vlSelf->core__DOT__reg_file_inst__DOT__regs
                                       [vlSelf->core__DOT__rs1]));
    vlSelf->core__DOT__rv2 = ((0U == (IData)(vlSelf->core__DOT__rs2))
                               ? 0U : ((((IData)(vlSelf->core__DOT__id_ex_rd) 
                                         == (IData)(vlSelf->core__DOT__rs2)) 
                                        & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                           >> 0xbU))
                                        ? vlSelf->core__DOT__writeback_result
                                        : vlSelf->core__DOT__reg_file_inst__DOT__regs
                                       [vlSelf->core__DOT__rs2]));
    vlSelf->core__DOT__reg_file_inst__DOT__rv1 = vlSelf->core__DOT__rv1;
    vlSelf->core__DOT__reg_file_inst__DOT__rv2 = vlSelf->core__DOT__rv2;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__core__DOT__reg_file_inst__DOT__regs__v0;
    __Vdlyvset__core__DOT__reg_file_inst__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__core__DOT__reg_file_inst__DOT__regs__v32;
    __Vdlyvdim0__core__DOT__reg_file_inst__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__core__DOT__reg_file_inst__DOT__regs__v32;
    __Vdlyvval__core__DOT__reg_file_inst__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__core__DOT__reg_file_inst__DOT__regs__v32;
    __Vdlyvset__core__DOT__reg_file_inst__DOT__regs__v32 = 0;
    // Body
    __Vdlyvset__core__DOT__reg_file_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__core__DOT__reg_file_inst__DOT__regs__v32 = 0U;
    if (vlSelf->reset) {
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 1U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 3U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 5U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 6U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 7U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 8U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 9U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__core__DOT__reg_file_inst__DOT__regs__v0 = 1U;
        vlSelf->core__DOT__id_ex_rs2 = 0U;
        vlSelf->core__DOT__id_ex_rs1 = 0U;
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc = 0U;
        vlSelf->core__DOT__id_ex_imm = 0U;
        vlSelf->core__DOT__id_ex_pc = 0U;
        vlSelf->core__DOT__if_id_instr = 0U;
        vlSelf->core__DOT__id_ex_rd = 0U;
        vlSelf->core__DOT__if_id_pc = 0U;
    } else {
        if ((((IData)(vlSelf->core__DOT__id_ex_ctrl) 
              >> 0xbU) & (0U != (IData)(vlSelf->core__DOT__id_ex_rd)))) {
            __Vdlyvval__core__DOT__reg_file_inst__DOT__regs__v32 
                = vlSelf->core__DOT__writeback_result;
            __Vdlyvset__core__DOT__reg_file_inst__DOT__regs__v32 = 1U;
            __Vdlyvdim0__core__DOT__reg_file_inst__DOT__regs__v32 
                = vlSelf->core__DOT__id_ex_rd;
        }
        vlSelf->core__DOT__id_ex_rs2 = vlSelf->core__DOT__rs2;
        vlSelf->core__DOT__id_ex_rs1 = vlSelf->core__DOT__rs1;
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc 
            = vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_next;
        vlSelf->core__DOT__id_ex_imm = vlSelf->core__DOT__imm;
        vlSelf->core__DOT__id_ex_pc = vlSelf->core__DOT__if_id_pc;
        vlSelf->core__DOT__if_id_instr = vlSelf->core__DOT__instr;
        vlSelf->core__DOT__id_ex_rd = vlSelf->core__DOT__rd;
        vlSelf->core__DOT__if_id_pc = vlSelf->core__DOT__pc;
    }
    if (__Vdlyvset__core__DOT__reg_file_inst__DOT__regs__v0) {
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[1U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[2U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[3U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[4U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[5U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[6U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[7U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[8U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[9U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0xaU] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0xbU] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0xcU] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0xdU] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0xeU] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0xfU] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x10U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x11U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x12U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x13U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x14U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x15U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x16U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x17U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x18U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x19U] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x1aU] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x1bU] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x1cU] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x1dU] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x1eU] = 0U;
        vlSelf->core__DOT__reg_file_inst__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__core__DOT__reg_file_inst__DOT__regs__v32) {
        vlSelf->core__DOT__reg_file_inst__DOT__regs[__Vdlyvdim0__core__DOT__reg_file_inst__DOT__regs__v32] 
            = __Vdlyvval__core__DOT__reg_file_inst__DOT__regs__v32;
    }
    vlSelf->core__DOT__branch_comp_inst__DOT__instr 
        = vlSelf->core__DOT__if_id_instr;
    vlSelf->core__DOT__decode_stage_inst__DOT__instr 
        = vlSelf->core__DOT__if_id_instr;
    vlSelf->core__DOT__decode_stage_inst__DOT__funct7 
        = (vlSelf->core__DOT__if_id_instr >> 0x19U);
    vlSelf->core__DOT__rs1 = (0x1fU & (vlSelf->core__DOT__if_id_instr 
                                       >> 0xfU));
    vlSelf->core__DOT__rs2 = (0x1fU & (vlSelf->core__DOT__if_id_instr 
                                       >> 0x14U));
    vlSelf->core__DOT__decode_stage_inst__DOT__opcode 
        = (0x7fU & vlSelf->core__DOT__if_id_instr);
    vlSelf->core__DOT__rd = (0x1fU & (vlSelf->core__DOT__if_id_instr 
                                      >> 7U));
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__instr 
        = vlSelf->core__DOT__decode_stage_inst__DOT__instr;
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct7 
        = vlSelf->core__DOT__decode_stage_inst__DOT__funct7;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct7 
        = vlSelf->core__DOT__decode_stage_inst__DOT__funct7;
    vlSelf->core__DOT__reg_file_inst__DOT__rs1 = vlSelf->core__DOT__rs1;
    vlSelf->core__DOT__decode_stage_inst__DOT__rs1 
        = vlSelf->core__DOT__rs1;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs1 
        = vlSelf->core__DOT__rs1;
    vlSelf->core__DOT__reg_file_inst__DOT__rs2 = vlSelf->core__DOT__rs2;
    vlSelf->core__DOT__decode_stage_inst__DOT__rs2 
        = vlSelf->core__DOT__rs2;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs2 
        = vlSelf->core__DOT__rs2;
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__opcode 
        = vlSelf->core__DOT__decode_stage_inst__DOT__opcode;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__opcode 
        = vlSelf->core__DOT__decode_stage_inst__DOT__opcode;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm 
        = ((0x40U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
            ? ((0x20U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                ? ((0x10U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                    ? 0U : ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                             ? ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                 ? ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                     ? ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                         ? (((- (IData)(
                                                        (vlSelf->core__DOT__if_id_instr 
                                                         >> 0x1fU))) 
                                             << 0x15U) 
                                            | ((0x100000U 
                                                & (vlSelf->core__DOT__if_id_instr 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->core__DOT__if_id_instr) 
                                                  | ((0x800U 
                                                      & (vlSelf->core__DOT__if_id_instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->core__DOT__if_id_instr 
                                                           >> 0x14U))))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->core__DOT__if_id_instr 
                                                                  >> 0x1fU))) 
                                                      << 0xdU) 
                                                     | ((0x1000U 
                                                         & (vlSelf->core__DOT__if_id_instr 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->core__DOT__if_id_instr 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->core__DOT__if_id_instr 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->core__DOT__if_id_instr 
                                                                    >> 7U))))))
                                                     : 0U)
                                                    : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                              ? ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                           ? ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->core__DOT__if_id_instr)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                               ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->core__DOT__if_id_instr 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->core__DOT__if_id_instr 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->core__DOT__if_id_instr 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                              ? ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                           ? ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->core__DOT__if_id_instr)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->core__DOT__if_id_instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->core__DOT__if_id_instr 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->core__DOT__if_id_instr 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->core__DOT__if_id_instr 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    vlSelf->core__DOT__decode_stage_inst__DOT__rd = vlSelf->core__DOT__rd;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rd 
        = vlSelf->core__DOT__rd;
    vlSelf->core__DOT__reg_file_inst__DOT__rd = vlSelf->core__DOT__id_ex_rd;
    vlSelf->core__DOT__imm = vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm;
    vlSelf->core__DOT__decode_stage_inst__DOT__imm 
        = vlSelf->core__DOT__imm;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__core__DOT__memory_inst__DOT__mem__v0;
    __Vdlyvdim0__core__DOT__memory_inst__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__core__DOT__memory_inst__DOT__mem__v0;
    __Vdlyvval__core__DOT__memory_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__core__DOT__memory_inst__DOT__mem__v0;
    __Vdlyvset__core__DOT__memory_inst__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__core__DOT__memory_inst__DOT__mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((8U & (IData)(vlSelf->core__DOT__id_ex_ctrl))) {
            __Vdlyvval__core__DOT__memory_inst__DOT__mem__v0 
                = vlSelf->core__DOT__id_ex_rv2;
            __Vdlyvset__core__DOT__memory_inst__DOT__mem__v0 = 1U;
            __Vdlyvdim0__core__DOT__memory_inst__DOT__mem__v0 
                = (0x3ffU & vlSelf->core__DOT__alu_out);
        }
    }
    vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
        = vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__mem
        [(0x3ffU & vlSelf->core__DOT__pc)];
    vlSelf->core__DOT__memory_inst__DOT__rdata = ((IData)(vlSelf->reset)
                                                   ? 0U
                                                   : 
                                                  vlSelf->core__DOT__memory_inst__DOT__mem
                                                  [
                                                  (0x3ffU 
                                                   & vlSelf->core__DOT__alu_out)]);
    vlSelf->core__DOT__branch_comp_inst__DOT__branch_taken 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((4U 
                                                  & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                                    ? 
                                                   (vlSelf->core__DOT__id_ex_rv1 
                                                    >= vlSelf->core__DOT__id_ex_rv2)
                                                    : 
                                                   (vlSelf->core__DOT__id_ex_rv1 
                                                    < vlSelf->core__DOT__id_ex_rv2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                                    ? 
                                                   VL_LTES_III(32, 0U, vlSelf->core__DOT__branch_comp_inst__DOT__diff)
                                                    : 
                                                   VL_GTS_III(32, 0U, vlSelf->core__DOT__branch_comp_inst__DOT__diff)))
                                                  : 
                                                 ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3) 
                                                       >> 1U))) 
                                                  && ((1U 
                                                       & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                                       ? 
                                                      (0U 
                                                       != vlSelf->core__DOT__branch_comp_inst__DOT__diff)
                                                       : 
                                                      (0U 
                                                       == vlSelf->core__DOT__branch_comp_inst__DOT__diff)))));
    if (__Vdlyvset__core__DOT__memory_inst__DOT__mem__v0) {
        vlSelf->core__DOT__memory_inst__DOT__mem[__Vdlyvdim0__core__DOT__memory_inst__DOT__mem__v0] 
            = __Vdlyvval__core__DOT__memory_inst__DOT__mem__v0;
    }
    vlSelf->core__DOT__instr = vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr;
    vlSelf->core__DOT__mem_out = vlSelf->core__DOT__memory_inst__DOT__rdata;
    vlSelf->core__DOT__branch_taken = vlSelf->core__DOT__branch_comp_inst__DOT__branch_taken;
    vlSelf->core__DOT__fetch_stage_inst__DOT__instr 
        = vlSelf->core__DOT__instr;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->core__DOT__pc = vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc;
    vlSelf->core__DOT__decode_stage_inst__DOT__funct3 
        = (7U & (vlSelf->core__DOT__if_id_instr >> 0xcU));
    if (vlSelf->reset) {
        vlSelf->core__DOT__id_ex_ctrl = 0U;
        vlSelf->core__DOT__id_ex_rv1 = 0U;
        vlSelf->core__DOT__id_ex_rv2 = 0U;
    } else {
        vlSelf->core__DOT__id_ex_ctrl = vlSelf->core__DOT__ctrl;
        vlSelf->core__DOT__id_ex_rv1 = vlSelf->core__DOT__rv1;
        vlSelf->core__DOT__id_ex_rv2 = vlSelf->core__DOT__rv2;
    }
    vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc 
        = vlSelf->core__DOT__pc;
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc = vlSelf->core__DOT__pc;
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct3 
        = vlSelf->core__DOT__decode_stage_inst__DOT__funct3;
    vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct3 
        = vlSelf->core__DOT__decode_stage_inst__DOT__funct3;
    vlSelf->core__DOT__branch_comp_inst__DOT__funct3 
        = vlSelf->core__DOT__decode_stage_inst__DOT__funct3;
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    if ((0x40U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            } else if ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x30U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (5U | (0xff8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        } else {
                            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                        }
                    } else {
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x20U | (0xfcfU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (5U | (0xff8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                    } else {
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x7ffU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x30U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = ((0x83fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                           | (0x80U | (((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3) 
                                               >> 2U)) 
                                        && (1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3) 
                                                  >> 1U))) 
                                       << 6U)));
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            if ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            } else if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x30U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x580U | (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (2U | (0xff9U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                    } else {
                        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0xfcfU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (2U | (0xff9U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = ((0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                           | ((((((((((0U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                               << 3U) 
                                              | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))) 
                                      | (0x100U == 
                                         (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                           << 3U) | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                     | (7U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                << 3U) 
                                               | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                    | (6U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                               << 3U) 
                                              | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                   | (4U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                              << 3U) 
                                             | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                  | (1U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                             << 3U) 
                                            | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                 | (5U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                            << 3U) 
                                           | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))) 
                                | (0x105U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                               << 3U) 
                                              | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))))
                                ? ((0U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                            << 3U) 
                                           | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                    ? 0U : ((0x100U 
                                             == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                             ? 1U : 
                                            ((7U == 
                                              (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                << 3U) 
                                               | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                              ? 2U : 
                                             ((6U == 
                                               (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                 << 3U) 
                                                | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                               ? 3U
                                               : ((4U 
                                                   == 
                                                   (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                                   ? 4U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                                     ? 6U
                                                     : 7U)))))))
                                : ((2U == (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                            << 3U) 
                                           | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                    ? 8U : ((3U == 
                                             (((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7) 
                                               << 3U) 
                                              | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3)))
                                             ? 9U : 0xaU))) 
                              << 7U));
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else if ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x7ffU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x20U | (0xfcfU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (8U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            } else {
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        if ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x30U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (2U | (0xff9U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                } else {
                    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x20U | (0xfcfU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (2U | (0xff9U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = ((0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                       | (((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                            ? ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                ? ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                                   ? 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct7))
                                                    ? 7U
                                                    : 6U)
                                                   : 4U))
                            : ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                ? ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                    ? 9U : 8U) : ((1U 
                                                   & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__funct3))
                                                   ? 5U
                                                   : 0U))) 
                          << 7U));
            } else {
                vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((8U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    } else if ((4U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    } else if ((2U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))) {
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x800U | (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x20U | (0xfcfU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x87fU & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0xff9U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
        } else {
            vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else {
        vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    }
    vlSelf->core__DOT__ctrl = vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl;
    vlSelf->core__DOT__reg_file_inst__DOT__we = (1U 
                                                 & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                    >> 0xbU));
    vlSelf->core__DOT__alu_inst__DOT__alu_op = (0xfU 
                                                & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                   >> 7U));
    vlSelf->core__DOT__memory_inst__DOT__mem_rw = (1U 
                                                   & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                      >> 3U));
    vlSelf->core__DOT__decode_stage_inst__DOT__ctrl 
        = vlSelf->core__DOT__ctrl;
    vlSelf->core__DOT__branch_comp_inst__DOT__rs1 = vlSelf->core__DOT__id_ex_rv1;
    vlSelf->core__DOT__alu_a = ((0x10U & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                 ? vlSelf->core__DOT__id_ex_pc
                                 : vlSelf->core__DOT__id_ex_rv1);
    vlSelf->core__DOT__branch_comp_inst__DOT__rs2 = vlSelf->core__DOT__id_ex_rv2;
    vlSelf->core__DOT__memory_inst__DOT__wdata = vlSelf->core__DOT__id_ex_rv2;
    vlSelf->core__DOT__branch_comp_inst__DOT__diff 
        = (vlSelf->core__DOT__id_ex_rv1 - vlSelf->core__DOT__id_ex_rv2);
    vlSelf->core__DOT__alu_b = ((0x20U & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                 ? vlSelf->core__DOT__id_ex_imm
                                 : vlSelf->core__DOT__id_ex_rv2);
    vlSelf->core__DOT__alu_inst__DOT__operand_a = vlSelf->core__DOT__alu_a;
    vlSelf->core__DOT__alu_inst__DOT__operand_b = vlSelf->core__DOT__alu_b;
    vlSelf->core__DOT__alu_inst__DOT__result = ((0x400U 
                                                 & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                 ? 
                                                ((0x200U 
                                                  & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                  ? 0U
                                                  : 
                                                 ((0x100U 
                                                   & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? vlSelf->core__DOT__alu_b
                                                    : vlSelf->core__DOT__alu_a)
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? 
                                                   ((vlSelf->core__DOT__alu_a 
                                                     < vlSelf->core__DOT__alu_b)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelf->core__DOT__alu_a, vlSelf->core__DOT__alu_b)
                                                     ? 1U
                                                     : 0U))))
                                                 : 
                                                ((0x200U 
                                                  & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                  ? 
                                                 ((0x100U 
                                                   & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->core__DOT__alu_a, 
                                                                  (0x1fU 
                                                                   & vlSelf->core__DOT__alu_b))
                                                    : 
                                                   (vlSelf->core__DOT__alu_a 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->core__DOT__alu_b)))
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? 
                                                   (vlSelf->core__DOT__alu_a 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->core__DOT__alu_b))
                                                    : 
                                                   (vlSelf->core__DOT__alu_a 
                                                    ^ vlSelf->core__DOT__alu_b)))
                                                  : 
                                                 ((0x100U 
                                                   & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? 
                                                   (vlSelf->core__DOT__alu_a 
                                                    | vlSelf->core__DOT__alu_b)
                                                    : 
                                                   (vlSelf->core__DOT__alu_a 
                                                    & vlSelf->core__DOT__alu_b))
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->core__DOT__id_ex_ctrl))
                                                    ? 
                                                   (vlSelf->core__DOT__alu_a 
                                                    - vlSelf->core__DOT__alu_b)
                                                    : 
                                                   (vlSelf->core__DOT__alu_a 
                                                    + vlSelf->core__DOT__alu_b)))));
    vlSelf->core__DOT__alu_out = vlSelf->core__DOT__alu_inst__DOT__result;
    vlSelf->core__DOT__memory_inst__DOT__addr = vlSelf->core__DOT__alu_out;
    vlSelf->core__DOT__fetch_stage_inst__DOT__alu_out 
        = vlSelf->core__DOT__alu_out;
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__alu_out 
        = vlSelf->core__DOT__fetch_stage_inst__DOT__alu_out;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->core__DOT__pc_sel_final = ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                       & ((IData)(vlSelf->core__DOT__branch_comp_inst__DOT__branch_taken) 
                                          | (0x63U 
                                             != (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__opcode))));
    vlSelf->core__DOT__writeback_result = ((0U == (3U 
                                                   & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                      >> 1U)))
                                            ? vlSelf->core__DOT__mem_out
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                    >> 1U)))
                                                ? vlSelf->core__DOT__alu_out
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                                        >> 1U)))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->core__DOT__id_ex_pc)
                                                    : 0U)));
    if (vlSelf->core__DOT__pc_sel_final) {
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_sel = 1U;
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_next 
            = ((IData)(vlSelf->core__DOT__pc_sel_final)
                ? vlSelf->core__DOT__alu_out : ((IData)(4U) 
                                                + vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc));
    } else {
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_sel = 0U;
        vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_next 
            = ((IData)(4U) + vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc);
    }
    vlSelf->core__DOT__reg_file_inst__DOT__wd = vlSelf->core__DOT__writeback_result;
    vlSelf->core__DOT__rv1 = ((0U == (IData)(vlSelf->core__DOT__rs1))
                               ? 0U : ((((IData)(vlSelf->core__DOT__id_ex_rd) 
                                         == (IData)(vlSelf->core__DOT__rs1)) 
                                        & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                           >> 0xbU))
                                        ? vlSelf->core__DOT__writeback_result
                                        : vlSelf->core__DOT__reg_file_inst__DOT__regs
                                       [vlSelf->core__DOT__rs1]));
    vlSelf->core__DOT__rv2 = ((0U == (IData)(vlSelf->core__DOT__rs2))
                               ? 0U : ((((IData)(vlSelf->core__DOT__id_ex_rd) 
                                         == (IData)(vlSelf->core__DOT__rs2)) 
                                        & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                           >> 0xbU))
                                        ? vlSelf->core__DOT__writeback_result
                                        : vlSelf->core__DOT__reg_file_inst__DOT__regs
                                       [vlSelf->core__DOT__rs2]));
    vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_sel 
        = vlSelf->core__DOT__fetch_stage_inst__DOT__pc_sel;
    vlSelf->core__DOT__reg_file_inst__DOT__rv1 = vlSelf->core__DOT__rv1;
    vlSelf->core__DOT__reg_file_inst__DOT__rv2 = vlSelf->core__DOT__rv2;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/jeremymills/Desktop/RISC-V-Quantum/sim/../src/core/core.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/jeremymills/Desktop/RISC-V-Quantum/sim/../src/core/core.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/jeremymills/Desktop/RISC-V-Quantum/sim/../src/core/core.v", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
