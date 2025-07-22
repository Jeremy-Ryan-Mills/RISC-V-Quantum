// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_core.h"

VL_INLINE_OPT void Vtop_core___ico_sequent__TOP__core__0(Vtop_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_core___ico_sequent__TOP__core__0\n"); );
    // Body
    vlSelf->writeback_mux_inst__DOT__pc_plus_four = 
        ((IData)(4U) + vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc);
    vlSelf->branch_taken = vlSelf->branch_comp_inst__DOT__branch_taken;
    vlSelf->branch_comp_inst__DOT__diff = (vlSelf->reg_file_inst__DOT__rv1 
                                           - vlSelf->reg_file_inst__DOT__rv2);
    vlSelf->rs1 = (0x1fU & (vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
                            >> 0xfU));
    vlSelf->rs2 = (0x1fU & (vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
                            >> 0x14U));
    vlSelf->rd = (0x1fU & (vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
                           >> 7U));
    vlSelf->mem_out = vlSymsp->TOP__core__memory_inst.rdata;
    vlSelf->rv1 = vlSelf->reg_file_inst__DOT__rv1;
    vlSelf->pc = vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc;
    vlSelf->rv2 = vlSelf->reg_file_inst__DOT__rv2;
    vlSelf->instr = vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr;
    vlSelf->decode_stage_inst__DOT__funct7 = (vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
                                              >> 0x19U);
    vlSelf->decode_stage_inst__DOT__funct3 = (7U & 
                                              (vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
                                               >> 0xcU));
    vlSelf->decode_stage_inst__DOT__opcode = (0x7fU 
                                              & vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr);
    vlSelf->reg_file_inst__DOT__rs1 = vlSelf->rs1;
    vlSelf->decode_stage_inst__DOT__rs1 = vlSelf->rs1;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__rs1 
        = vlSelf->rs1;
    vlSelf->reg_file_inst__DOT__rs2 = vlSelf->rs2;
    vlSelf->decode_stage_inst__DOT__rs2 = vlSelf->rs2;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__rs2 
        = vlSelf->rs2;
    vlSelf->reg_file_inst__DOT__rd = vlSelf->rd;
    vlSelf->decode_stage_inst__DOT__rd = vlSelf->rd;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__rd 
        = vlSelf->rd;
    vlSelf->writeback_mux_inst__DOT__mem_out = vlSelf->mem_out;
    vlSelf->branch_comp_inst__DOT__rs1 = vlSelf->rv1;
    vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc 
        = vlSelf->pc;
    vlSelf->fetch_stage_inst__DOT__pc = vlSelf->pc;
    vlSymsp->TOP__core__memory_inst.wdata = vlSelf->rv2;
    vlSelf->branch_comp_inst__DOT__rs2 = vlSelf->rv2;
    vlSelf->branch_comp_inst__DOT__instr = vlSelf->instr;
    vlSelf->fetch_stage_inst__DOT__instr = vlSelf->instr;
    vlSelf->decode_stage_inst__DOT__instr = vlSelf->instr;
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__funct7 
        = vlSelf->decode_stage_inst__DOT__funct7;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__funct7 
        = vlSelf->decode_stage_inst__DOT__funct7;
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__funct3 
        = vlSelf->decode_stage_inst__DOT__funct3;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__funct3 
        = vlSelf->decode_stage_inst__DOT__funct3;
    vlSelf->branch_comp_inst__DOT__funct3 = vlSelf->decode_stage_inst__DOT__funct3;
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__opcode 
        = vlSelf->decode_stage_inst__DOT__opcode;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__opcode 
        = vlSelf->decode_stage_inst__DOT__opcode;
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    if ((0x40U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            } else if ((8U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                                = (((- (IData)((vlSelf->instr 
                                                >> 0x1fU))) 
                                    << 0x15U) | ((0x100000U 
                                                  & (vlSelf->instr 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->instr) 
                                                    | ((0x800U 
                                                        & (vlSelf->instr 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->instr 
                                                             >> 0x14U))))));
                            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x30U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (5U | (0xff8U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        } else {
                            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                        }
                    } else {
                        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x20U | (0xfcfU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (5U | (0xff8U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                    } else {
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                        = (((- (IData)((vlSelf->instr 
                                        >> 0x1fU))) 
                            << 0xdU) | ((0x1000U & 
                                         (vlSelf->instr 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->instr 
                                                    >> 7U))))));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x7ffU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x30U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = ((0x83fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                           | (0x80U | (((1U & ((IData)(vlSelf->decode_stage_inst__DOT__funct3) 
                                               >> 2U)) 
                                        && (1U & ((IData)(vlSelf->decode_stage_inst__DOT__funct3) 
                                                  >> 1U))) 
                                       << 6U)));
                } else {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            if ((8U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            } else if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                            = (0xfffff000U & vlSelf->instr);
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x30U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x580U | (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (2U | (0xff9U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                    } else {
                        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0xfcfU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (2U | (0xff9U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = ((0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                               | ((((((((((0U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->decode_stage_inst__DOT__funct3))) 
                                          | (0x100U 
                                             == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                         | (7U == (
                                                   ((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                        | (6U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                       | (4U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                      | (1U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                 << 3U) 
                                                | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                     | (5U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                << 3U) 
                                               | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                    | (0x105U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->decode_stage_inst__DOT__funct3))))
                                    ? ((0U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                << 3U) 
                                               | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                        ? 0U : ((0x100U 
                                                 == 
                                                 (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                 ? 1U
                                                 : 
                                                ((7U 
                                                  == 
                                                  (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                  ? 2U
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                      ? 6U
                                                      : 7U)))))))
                                    : ((2U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                << 3U) 
                                               | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                        ? 8U : ((3U 
                                                 == 
                                                 (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                 ? 9U
                                                 : 0xaU))) 
                                  << 7U));
                    } else {
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            }
        } else if ((8U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                    = (((- (IData)((vlSelf->instr >> 0x1fU))) 
                        << 0xcU) | ((0xfe0U & (vlSelf->instr 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->instr 
                                                >> 7U))));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x7ffU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x20U | (0xfcfU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (8U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            } else {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        if ((8U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                        = (0xfffff000U & vlSelf->instr);
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x30U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (2U | (0xff9U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                } else {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                    = (((- (IData)((vlSelf->instr >> 0x1fU))) 
                        << 0xcU) | (vlSelf->instr >> 0x14U));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x20U | (0xfcfU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (2U | (0xff9U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = ((0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                       | (((4U & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                            ? ((2U & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                ? ((1U & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                                   ? 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->decode_stage_inst__DOT__funct7))
                                                    ? 7U
                                                    : 6U)
                                                   : 4U))
                            : ((2U & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                ? ((1U & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                    ? 9U : 8U) : ((1U 
                                                   & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                                   ? 5U
                                                   : 0U))) 
                          << 7U));
            } else {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((8U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    } else if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    } else if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                = (((- (IData)((vlSelf->instr >> 0x1fU))) 
                    << 0xcU) | (vlSelf->instr >> 0x14U));
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x20U | (0xfcfU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0xff9U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
        } else {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else {
        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    }
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__instr 
        = vlSelf->decode_stage_inst__DOT__instr;
    vlSelf->imm = vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm;
    vlSymsp->TOP__core__memory_inst.mem_rw = (1U & 
                                              ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                               >> 3U));
    vlSelf->reg_file_inst__DOT__we = (1U & ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                            >> 0xbU));
    vlSelf->alu_inst__DOT__alu_op = (0xfU & ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                             >> 7U));
    vlSelf->writeback_mux_inst__DOT__wb_sel = (3U & 
                                               ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                                >> 1U));
    vlSelf->pc_sel_final = ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                            & ((IData)(vlSelf->branch_comp_inst__DOT__branch_taken) 
                               | (0x63U != (IData)(vlSelf->decode_stage_inst__DOT__opcode))));
    vlSelf->ctrl = vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl;
    vlSelf->decode_stage_inst__DOT__imm = vlSelf->imm;
    vlSelf->fetch_stage_inst__DOT__pc_sel = vlSelf->pc_sel_final;
    vlSelf->decode_stage_inst__DOT__ctrl = vlSelf->ctrl;
    vlSelf->alu_a = ((0x10U & (IData)(vlSelf->ctrl))
                      ? vlSelf->pc : vlSelf->rv1);
    vlSelf->alu_b = ((0x20U & (IData)(vlSelf->ctrl))
                      ? vlSelf->imm : vlSelf->rv2);
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc_sel 
        = vlSelf->fetch_stage_inst__DOT__pc_sel;
    vlSelf->alu_inst__DOT__operand_a = vlSelf->alu_a;
    vlSelf->alu_inst__DOT__operand_b = vlSelf->alu_b;
    vlSelf->alu_inst__DOT__result = ((0x400U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                      ? ((0x200U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                          ? 0U : ((0x100U 
                                                   & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                    ? vlSelf->alu_b
                                                    : vlSelf->alu_a)
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                    ? 
                                                   ((vlSelf->alu_a 
                                                     < vlSelf->alu_b)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelf->alu_a, vlSelf->alu_b)
                                                     ? 1U
                                                     : 0U))))
                                      : ((0x200U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                          ? ((0x100U 
                                              & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSelf->alu_a, 
                                                                (0x1fU 
                                                                 & vlSelf->alu_b))
                                                  : 
                                                 (vlSelf->alu_a 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->alu_b)))
                                              : ((0x80U 
                                                  & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                  ? 
                                                 (vlSelf->alu_a 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->alu_b))
                                                  : 
                                                 (vlSelf->alu_a 
                                                  ^ vlSelf->alu_b)))
                                          : ((0x100U 
                                              & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                  ? 
                                                 (vlSelf->alu_a 
                                                  | vlSelf->alu_b)
                                                  : 
                                                 (vlSelf->alu_a 
                                                  & vlSelf->alu_b))
                                              : ((0x80U 
                                                  & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                  ? 
                                                 (vlSelf->alu_a 
                                                  - vlSelf->alu_b)
                                                  : 
                                                 (vlSelf->alu_a 
                                                  + vlSelf->alu_b)))));
    vlSelf->alu_out = vlSelf->alu_inst__DOT__result;
    vlSymsp->TOP__core__memory_inst.addr = vlSelf->alu_out;
    vlSelf->writeback_mux_inst__DOT__alu_out = vlSelf->alu_out;
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc_next 
        = ((IData)(vlSelf->pc_sel_final) ? ((IData)(vlSelf->pc_sel_final)
                                             ? vlSelf->alu_out
                                             : ((IData)(4U) 
                                                + vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc))
            : ((IData)(4U) + vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc));
    vlSelf->fetch_stage_inst__DOT__alu_out = vlSelf->alu_out;
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
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__alu_out 
        = vlSelf->fetch_stage_inst__DOT__alu_out;
    vlSelf->writeback_result = vlSelf->writeback_mux_inst__DOT__reg_out;
    vlSelf->reg_file_inst__DOT__wd = vlSelf->writeback_result;
}

VL_INLINE_OPT void Vtop_core___ico_sequent__TOP__core__1(Vtop_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_core___ico_sequent__TOP__core__1\n"); );
    // Body
    vlSymsp->TOP__core__memory_inst.reset = vlSelf->reset;
    vlSelf->reg_file_inst__DOT__reset = vlSelf->reset;
    vlSelf->branch_comp_inst__DOT__reset = vlSelf->reset;
    vlSelf->fetch_stage_inst__DOT__reset = vlSelf->reset;
    vlSymsp->TOP__core__memory_inst.clk = vlSelf->clk;
    vlSelf->reg_file_inst__DOT__clk = vlSelf->clk;
    vlSelf->branch_comp_inst__DOT__clk = vlSelf->clk;
    vlSelf->fetch_stage_inst__DOT__clk = vlSelf->clk;
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__reset 
        = vlSelf->fetch_stage_inst__DOT__reset;
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__clk 
        = vlSelf->fetch_stage_inst__DOT__clk;
    vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__clk 
        = vlSelf->fetch_stage_inst__DOT__clk;
}

VL_INLINE_OPT void Vtop_core___nba_sequent__TOP__core__0(Vtop_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_core___nba_sequent__TOP__core__0\n"); );
    // Body
    vlSelf->mem_out = vlSymsp->TOP__core__memory_inst.rdata;
    vlSelf->writeback_mux_inst__DOT__mem_out = vlSelf->mem_out;
}

VL_INLINE_OPT void Vtop_core___nba_sequent__TOP__core__1(Vtop_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_core___nba_sequent__TOP__core__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__reg_file_inst__DOT__regs__v0;
    __Vdlyvdim0__reg_file_inst__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__reg_file_inst__DOT__regs__v0;
    __Vdlyvval__reg_file_inst__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__reg_file_inst__DOT__regs__v0;
    __Vdlyvset__reg_file_inst__DOT__regs__v0 = 0;
    // Body
    __Vdlyvset__reg_file_inst__DOT__regs__v0 = 0U;
    if ((((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
          >> 0xbU) & (0U != (IData)(vlSelf->rd)))) {
        __Vdlyvval__reg_file_inst__DOT__regs__v0 = vlSelf->writeback_result;
        __Vdlyvset__reg_file_inst__DOT__regs__v0 = 1U;
        __Vdlyvdim0__reg_file_inst__DOT__regs__v0 = vlSelf->rd;
    }
    if (vlSelf->reset) {
        vlSelf->reg_file_inst__DOT__rv1 = 0U;
        vlSelf->reg_file_inst__DOT__rv2 = 0U;
    } else {
        vlSelf->reg_file_inst__DOT__rv1 = ((0U == (IData)(vlSelf->rs1))
                                            ? 0U : 
                                           vlSelf->reg_file_inst__DOT__regs
                                           [vlSelf->rs1]);
        vlSelf->reg_file_inst__DOT__rv2 = ((0U == (IData)(vlSelf->rs2))
                                            ? 0U : 
                                           vlSelf->reg_file_inst__DOT__regs
                                           [vlSelf->rs2]);
    }
    vlSelf->branch_comp_inst__DOT__branch_taken = (
                                                   (1U 
                                                    & (~ (IData)(vlSelf->reset))) 
                                                   && ((4U 
                                                        & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                                          ? 
                                                         (vlSelf->rv1 
                                                          >= vlSelf->rv2)
                                                          : 
                                                         (vlSelf->rv1 
                                                          < vlSelf->rv2))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                                          ? 
                                                         VL_LTES_III(32, 0U, vlSelf->branch_comp_inst__DOT__diff)
                                                          : 
                                                         VL_GTS_III(32, 0U, vlSelf->branch_comp_inst__DOT__diff)))
                                                        : 
                                                       ((1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->decode_stage_inst__DOT__funct3) 
                                                             >> 1U))) 
                                                        && ((1U 
                                                             & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                                             ? 
                                                            (0U 
                                                             != vlSelf->branch_comp_inst__DOT__diff)
                                                             : 
                                                            (0U 
                                                             == vlSelf->branch_comp_inst__DOT__diff)))));
    vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
        = vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__mem
        [(0x3ffU & vlSelf->pc)];
    if (__Vdlyvset__reg_file_inst__DOT__regs__v0) {
        vlSelf->reg_file_inst__DOT__regs[__Vdlyvdim0__reg_file_inst__DOT__regs__v0] 
            = __Vdlyvval__reg_file_inst__DOT__regs__v0;
    }
    vlSelf->rv1 = vlSelf->reg_file_inst__DOT__rv1;
    vlSelf->branch_comp_inst__DOT__diff = (vlSelf->reg_file_inst__DOT__rv1 
                                           - vlSelf->reg_file_inst__DOT__rv2);
    vlSelf->rv2 = vlSelf->reg_file_inst__DOT__rv2;
    vlSelf->branch_taken = vlSelf->branch_comp_inst__DOT__branch_taken;
    vlSelf->rs1 = (0x1fU & (vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
                            >> 0xfU));
    vlSelf->rs2 = (0x1fU & (vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
                            >> 0x14U));
    vlSelf->rd = (0x1fU & (vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
                           >> 7U));
    vlSelf->instr = vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr;
    vlSelf->decode_stage_inst__DOT__funct7 = (vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
                                              >> 0x19U);
    vlSelf->decode_stage_inst__DOT__funct3 = (7U & 
                                              (vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr 
                                               >> 0xcU));
    vlSelf->decode_stage_inst__DOT__opcode = (0x7fU 
                                              & vlSelf->fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr);
    vlSelf->branch_comp_inst__DOT__rs1 = vlSelf->rv1;
    vlSymsp->TOP__core__memory_inst.wdata = vlSelf->rv2;
    vlSelf->branch_comp_inst__DOT__rs2 = vlSelf->rv2;
    vlSelf->reg_file_inst__DOT__rs1 = vlSelf->rs1;
    vlSelf->decode_stage_inst__DOT__rs1 = vlSelf->rs1;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__rs1 
        = vlSelf->rs1;
    vlSelf->reg_file_inst__DOT__rs2 = vlSelf->rs2;
    vlSelf->decode_stage_inst__DOT__rs2 = vlSelf->rs2;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__rs2 
        = vlSelf->rs2;
    vlSelf->reg_file_inst__DOT__rd = vlSelf->rd;
    vlSelf->decode_stage_inst__DOT__rd = vlSelf->rd;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__rd 
        = vlSelf->rd;
    vlSelf->branch_comp_inst__DOT__instr = vlSelf->instr;
    vlSelf->fetch_stage_inst__DOT__instr = vlSelf->instr;
    vlSelf->decode_stage_inst__DOT__instr = vlSelf->instr;
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__funct7 
        = vlSelf->decode_stage_inst__DOT__funct7;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__funct7 
        = vlSelf->decode_stage_inst__DOT__funct7;
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__funct3 
        = vlSelf->decode_stage_inst__DOT__funct3;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__funct3 
        = vlSelf->decode_stage_inst__DOT__funct3;
    vlSelf->branch_comp_inst__DOT__funct3 = vlSelf->decode_stage_inst__DOT__funct3;
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__opcode 
        = vlSelf->decode_stage_inst__DOT__opcode;
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__opcode 
        = vlSelf->decode_stage_inst__DOT__opcode;
    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    if ((0x40U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            } else if ((8U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                                = (((- (IData)((vlSelf->instr 
                                                >> 0x1fU))) 
                                    << 0x15U) | ((0x100000U 
                                                  & (vlSelf->instr 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->instr) 
                                                    | ((0x800U 
                                                        & (vlSelf->instr 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->instr 
                                                             >> 0x14U))))));
                            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x30U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                                = (5U | (0xff8U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        } else {
                            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                        }
                    } else {
                        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x20U | (0xfcfU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (5U | (0xff8U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                    } else {
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                        = (((- (IData)((vlSelf->instr 
                                        >> 0x1fU))) 
                            << 0xdU) | ((0x1000U & 
                                         (vlSelf->instr 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->instr 
                                                    >> 7U))))));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x7ffU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x30U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = ((0x83fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                           | (0x80U | (((1U & ((IData)(vlSelf->decode_stage_inst__DOT__funct3) 
                                               >> 2U)) 
                                        && (1U & ((IData)(vlSelf->decode_stage_inst__DOT__funct3) 
                                                  >> 1U))) 
                                       << 6U)));
                } else {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            if ((8U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            } else if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                            = (0xfffff000U & vlSelf->instr);
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x30U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x580U | (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (2U | (0xff9U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                    } else {
                        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (0xfcfU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = (2U | (0xff9U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                            = ((0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                               | ((((((((((0U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->decode_stage_inst__DOT__funct3))) 
                                          | (0x100U 
                                             == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                         | (7U == (
                                                   ((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                        | (6U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                       | (4U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                      | (1U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                 << 3U) 
                                                | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                     | (5U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                << 3U) 
                                               | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))) 
                                    | (0x105U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->decode_stage_inst__DOT__funct3))))
                                    ? ((0U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                << 3U) 
                                               | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                        ? 0U : ((0x100U 
                                                 == 
                                                 (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                 ? 1U
                                                 : 
                                                ((7U 
                                                  == 
                                                  (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                  ? 2U
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                      ? 6U
                                                      : 7U)))))))
                                    : ((2U == (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                << 3U) 
                                               | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                        ? 8U : ((3U 
                                                 == 
                                                 (((IData)(vlSelf->decode_stage_inst__DOT__funct7) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->decode_stage_inst__DOT__funct3)))
                                                 ? 9U
                                                 : 0xaU))) 
                                  << 7U));
                    } else {
                        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                    }
                } else {
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            }
        } else if ((8U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                    = (((- (IData)((vlSelf->instr >> 0x1fU))) 
                        << 0xcU) | ((0xfe0U & (vlSelf->instr 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->instr 
                                                >> 7U))));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x7ffU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x20U | (0xfcfU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (8U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            } else {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        if ((8U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        } else if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                        = (0xfffff000U & vlSelf->instr);
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x30U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                        = (2U | (0xff9U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                } else {
                    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                    vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
                }
            } else {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                    = (((- (IData)((vlSelf->instr >> 0x1fU))) 
                        << 0xcU) | (vlSelf->instr >> 0x14U));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (0x20U | (0xfcfU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = (2U | (0xff9U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                    = ((0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)) 
                       | (((4U & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                            ? ((2U & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                ? ((1U & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                                   ? 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->decode_stage_inst__DOT__funct7))
                                                    ? 7U
                                                    : 6U)
                                                   : 4U))
                            : ((2U & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                ? ((1U & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                    ? 9U : 8U) : ((1U 
                                                   & (IData)(vlSelf->decode_stage_inst__DOT__funct3))
                                                   ? 5U
                                                   : 0U))) 
                          << 7U));
            } else {
                vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
                vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
            }
        } else {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else if ((8U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    } else if ((4U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    } else if ((2U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->decode_stage_inst__DOT__opcode))) {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm 
                = (((- (IData)((vlSelf->instr >> 0x1fU))) 
                    << 0xcU) | (vlSelf->instr >> 0x14U));
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x800U | (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x20U | (0xfcfU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl)));
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0x87fU & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl 
                = (0xff9U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl));
        } else {
            vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
            vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
        }
    } else {
        vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm = 0U;
        vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl = 0U;
    }
    vlSelf->decode_stage_inst__DOT__decoder_i__DOT__instr 
        = vlSelf->decode_stage_inst__DOT__instr;
    vlSelf->imm = vlSelf->decode_stage_inst__DOT__decoder_i__DOT__imm;
    vlSymsp->TOP__core__memory_inst.mem_rw = (1U & 
                                              ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                               >> 3U));
    vlSelf->reg_file_inst__DOT__we = (1U & ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                            >> 0xbU));
    vlSelf->alu_inst__DOT__alu_op = (0xfU & ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                             >> 7U));
    vlSelf->writeback_mux_inst__DOT__wb_sel = (3U & 
                                               ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                                >> 1U));
    vlSelf->pc_sel_final = ((IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                            & ((IData)(vlSelf->branch_comp_inst__DOT__branch_taken) 
                               | (0x63U != (IData)(vlSelf->decode_stage_inst__DOT__opcode))));
    vlSelf->ctrl = vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl;
    vlSelf->decode_stage_inst__DOT__imm = vlSelf->imm;
    vlSelf->fetch_stage_inst__DOT__pc_sel = vlSelf->pc_sel_final;
    vlSelf->decode_stage_inst__DOT__ctrl = vlSelf->ctrl;
    vlSelf->alu_b = ((0x20U & (IData)(vlSelf->ctrl))
                      ? vlSelf->imm : vlSelf->rv2);
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc_sel 
        = vlSelf->fetch_stage_inst__DOT__pc_sel;
    vlSelf->alu_inst__DOT__operand_b = vlSelf->alu_b;
}

VL_INLINE_OPT void Vtop_core___nba_comb__TOP__core__0(Vtop_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_core___nba_comb__TOP__core__0\n"); );
    // Body
    vlSelf->alu_a = ((0x10U & (IData)(vlSelf->ctrl))
                      ? vlSelf->pc : vlSelf->rv1);
    vlSelf->alu_inst__DOT__operand_a = vlSelf->alu_a;
    vlSelf->alu_inst__DOT__result = ((0x400U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                      ? ((0x200U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                          ? 0U : ((0x100U 
                                                   & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                    ? vlSelf->alu_b
                                                    : vlSelf->alu_a)
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                    ? 
                                                   ((vlSelf->alu_a 
                                                     < vlSelf->alu_b)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelf->alu_a, vlSelf->alu_b)
                                                     ? 1U
                                                     : 0U))))
                                      : ((0x200U & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                          ? ((0x100U 
                                              & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSelf->alu_a, 
                                                                (0x1fU 
                                                                 & vlSelf->alu_b))
                                                  : 
                                                 (vlSelf->alu_a 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->alu_b)))
                                              : ((0x80U 
                                                  & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                  ? 
                                                 (vlSelf->alu_a 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->alu_b))
                                                  : 
                                                 (vlSelf->alu_a 
                                                  ^ vlSelf->alu_b)))
                                          : ((0x100U 
                                              & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                  ? 
                                                 (vlSelf->alu_a 
                                                  | vlSelf->alu_b)
                                                  : 
                                                 (vlSelf->alu_a 
                                                  & vlSelf->alu_b))
                                              : ((0x80U 
                                                  & (IData)(vlSelf->decode_stage_inst__DOT__ctrl_i__DOT__ctrl))
                                                  ? 
                                                 (vlSelf->alu_a 
                                                  - vlSelf->alu_b)
                                                  : 
                                                 (vlSelf->alu_a 
                                                  + vlSelf->alu_b)))));
    vlSelf->alu_out = vlSelf->alu_inst__DOT__result;
    vlSymsp->TOP__core__memory_inst.addr = vlSelf->alu_out;
    vlSelf->writeback_mux_inst__DOT__alu_out = vlSelf->alu_out;
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc_next 
        = ((IData)(vlSelf->pc_sel_final) ? ((IData)(vlSelf->pc_sel_final)
                                             ? vlSelf->alu_out
                                             : ((IData)(4U) 
                                                + vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc))
            : ((IData)(4U) + vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__pc));
    vlSelf->fetch_stage_inst__DOT__alu_out = vlSelf->alu_out;
    vlSelf->fetch_stage_inst__DOT__pc_inst__DOT__alu_out 
        = vlSelf->fetch_stage_inst__DOT__alu_out;
}
