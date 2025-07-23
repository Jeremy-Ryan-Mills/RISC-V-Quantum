// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgBit(oldp+2,(vlSelf->core__DOT__clk));
    bufp->chgBit(oldp+3,(vlSelf->core__DOT__reset));
    bufp->chgIData(oldp+4,(vlSelf->core__DOT__pc),32);
    bufp->chgBit(oldp+5,(vlSelf->core__DOT__pc_sel_final));
    bufp->chgIData(oldp+6,(vlSelf->core__DOT__instr),32);
    bufp->chgIData(oldp+7,(vlSelf->core__DOT__if_id_instr),32);
    bufp->chgIData(oldp+8,(vlSelf->core__DOT__if_id_pc),32);
    bufp->chgCData(oldp+9,(vlSelf->core__DOT__rs1),5);
    bufp->chgCData(oldp+10,(vlSelf->core__DOT__rs2),5);
    bufp->chgCData(oldp+11,(vlSelf->core__DOT__rd),5);
    bufp->chgIData(oldp+12,(vlSelf->core__DOT__rv1),32);
    bufp->chgIData(oldp+13,(vlSelf->core__DOT__rv2),32);
    bufp->chgIData(oldp+14,(vlSelf->core__DOT__imm),32);
    bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                 >> 0xbU))));
    bufp->chgCData(oldp+16,((0xfU & ((IData)(vlSelf->core__DOT__ctrl) 
                                     >> 7U))),4);
    bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                 >> 6U))));
    bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                 >> 5U))));
    bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                 >> 4U))));
    bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                 >> 3U))));
    bufp->chgCData(oldp+21,((3U & ((IData)(vlSelf->core__DOT__ctrl) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+22,((1U & (IData)(vlSelf->core__DOT__ctrl))));
    bufp->chgIData(oldp+23,(vlSelf->core__DOT__id_ex_pc),32);
    bufp->chgIData(oldp+24,(vlSelf->core__DOT__id_ex_rv1),32);
    bufp->chgIData(oldp+25,(vlSelf->core__DOT__id_ex_rv2),32);
    bufp->chgIData(oldp+26,(vlSelf->core__DOT__id_ex_imm),32);
    bufp->chgCData(oldp+27,(vlSelf->core__DOT__id_ex_rs1),5);
    bufp->chgCData(oldp+28,(vlSelf->core__DOT__id_ex_rs2),5);
    bufp->chgCData(oldp+29,(vlSelf->core__DOT__id_ex_rd),5);
    bufp->chgBit(oldp+30,((1U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                 >> 0xbU))));
    bufp->chgCData(oldp+31,((0xfU & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                     >> 7U))),4);
    bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                 >> 6U))));
    bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                 >> 5U))));
    bufp->chgBit(oldp+34,((1U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                 >> 4U))));
    bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                 >> 3U))));
    bufp->chgCData(oldp+36,((3U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+37,((1U & (IData)(vlSelf->core__DOT__id_ex_ctrl))));
    bufp->chgIData(oldp+38,(vlSelf->core__DOT__alu_out),32);
    bufp->chgIData(oldp+39,(vlSelf->core__DOT__alu_a),32);
    bufp->chgIData(oldp+40,(vlSelf->core__DOT__alu_b),32);
    bufp->chgBit(oldp+41,(vlSelf->core__DOT__branch_taken));
    bufp->chgIData(oldp+42,(vlSelf->core__DOT__mem_out),32);
    bufp->chgIData(oldp+43,(vlSelf->core__DOT__writeback_result),32);
    bufp->chgCData(oldp+44,(vlSelf->core__DOT__alu_inst__DOT__alu_op),4);
    bufp->chgIData(oldp+45,(vlSelf->core__DOT__alu_inst__DOT__operand_a),32);
    bufp->chgIData(oldp+46,(vlSelf->core__DOT__alu_inst__DOT__operand_b),32);
    bufp->chgIData(oldp+47,(vlSelf->core__DOT__alu_inst__DOT__result),32);
    bufp->chgBit(oldp+48,(vlSelf->core__DOT__branch_comp_inst__DOT__clk));
    bufp->chgBit(oldp+49,(vlSelf->core__DOT__branch_comp_inst__DOT__reset));
    bufp->chgIData(oldp+50,(vlSelf->core__DOT__branch_comp_inst__DOT__rs1),32);
    bufp->chgIData(oldp+51,(vlSelf->core__DOT__branch_comp_inst__DOT__rs2),32);
    bufp->chgIData(oldp+52,(vlSelf->core__DOT__branch_comp_inst__DOT__instr),32);
    bufp->chgBit(oldp+53,(vlSelf->core__DOT__branch_comp_inst__DOT__branch_taken));
    bufp->chgCData(oldp+54,(vlSelf->core__DOT__branch_comp_inst__DOT__funct3),3);
    bufp->chgIData(oldp+55,(vlSelf->core__DOT__branch_comp_inst__DOT__diff),32);
    bufp->chgIData(oldp+56,(vlSelf->core__DOT__decode_stage_inst__DOT__instr),32);
    bufp->chgCData(oldp+57,(vlSelf->core__DOT__decode_stage_inst__DOT__rs1),5);
    bufp->chgCData(oldp+58,(vlSelf->core__DOT__decode_stage_inst__DOT__rs2),5);
    bufp->chgCData(oldp+59,(vlSelf->core__DOT__decode_stage_inst__DOT__rd),5);
    bufp->chgIData(oldp+60,(vlSelf->core__DOT__decode_stage_inst__DOT__imm),32);
    bufp->chgBit(oldp+61,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                 >> 0xbU))));
    bufp->chgCData(oldp+62,((0xfU & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                     >> 7U))),4);
    bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                 >> 6U))));
    bufp->chgBit(oldp+64,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                 >> 5U))));
    bufp->chgBit(oldp+65,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                 >> 4U))));
    bufp->chgBit(oldp+66,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                 >> 3U))));
    bufp->chgCData(oldp+67,((3U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+68,((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl))));
    bufp->chgCData(oldp+69,(vlSelf->core__DOT__decode_stage_inst__DOT__opcode),7);
    bufp->chgCData(oldp+70,(vlSelf->core__DOT__decode_stage_inst__DOT__funct3),3);
    bufp->chgCData(oldp+71,(vlSelf->core__DOT__decode_stage_inst__DOT__funct7),7);
    bufp->chgCData(oldp+72,(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__opcode),7);
    bufp->chgCData(oldp+73,(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct3),3);
    bufp->chgCData(oldp+74,(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct7),7);
    bufp->chgBit(oldp+75,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                 >> 0xbU))));
    bufp->chgCData(oldp+76,((0xfU & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                     >> 7U))),4);
    bufp->chgBit(oldp+77,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                 >> 6U))));
    bufp->chgBit(oldp+78,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                 >> 5U))));
    bufp->chgBit(oldp+79,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                 >> 4U))));
    bufp->chgBit(oldp+80,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                 >> 3U))));
    bufp->chgCData(oldp+81,((3U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+82,((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl))));
    bufp->chgIData(oldp+83,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__instr),32);
    bufp->chgCData(oldp+84,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__opcode),7);
    bufp->chgCData(oldp+85,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct3),3);
    bufp->chgCData(oldp+86,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct7),7);
    bufp->chgCData(oldp+87,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rd),5);
    bufp->chgCData(oldp+88,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs1),5);
    bufp->chgCData(oldp+89,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs2),5);
    bufp->chgIData(oldp+90,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm),32);
    bufp->chgBit(oldp+91,(vlSelf->core__DOT__fetch_stage_inst__DOT__clk));
    bufp->chgBit(oldp+92,(vlSelf->core__DOT__fetch_stage_inst__DOT__reset));
    bufp->chgBit(oldp+93,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_sel));
    bufp->chgIData(oldp+94,(vlSelf->core__DOT__fetch_stage_inst__DOT__alu_out),32);
    bufp->chgIData(oldp+95,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc),32);
    bufp->chgIData(oldp+96,(vlSelf->core__DOT__fetch_stage_inst__DOT__instr),32);
    bufp->chgBit(oldp+97,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__clk));
    bufp->chgIData(oldp+98,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc),32);
    bufp->chgIData(oldp+99,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr),32);
    bufp->chgBit(oldp+100,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk));
    bufp->chgBit(oldp+101,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__reset));
    bufp->chgBit(oldp+102,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_sel));
    bufp->chgIData(oldp+103,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__alu_out),32);
    bufp->chgIData(oldp+104,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc),32);
    bufp->chgIData(oldp+105,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_next),32);
    bufp->chgBit(oldp+106,(vlSelf->core__DOT__memory_inst__DOT__clk));
    bufp->chgBit(oldp+107,(vlSelf->core__DOT__memory_inst__DOT__reset));
    bufp->chgIData(oldp+108,(vlSelf->core__DOT__memory_inst__DOT__addr),32);
    bufp->chgIData(oldp+109,(vlSelf->core__DOT__memory_inst__DOT__wdata),32);
    bufp->chgBit(oldp+110,(vlSelf->core__DOT__memory_inst__DOT__mem_rw));
    bufp->chgIData(oldp+111,(vlSelf->core__DOT__memory_inst__DOT__rdata),32);
    bufp->chgBit(oldp+112,(vlSelf->core__DOT__reg_file_inst__DOT__clk));
    bufp->chgBit(oldp+113,(vlSelf->core__DOT__reg_file_inst__DOT__reset));
    bufp->chgBit(oldp+114,(vlSelf->core__DOT__reg_file_inst__DOT__we));
    bufp->chgCData(oldp+115,(vlSelf->core__DOT__reg_file_inst__DOT__rs1),5);
    bufp->chgCData(oldp+116,(vlSelf->core__DOT__reg_file_inst__DOT__rs2),5);
    bufp->chgCData(oldp+117,(vlSelf->core__DOT__reg_file_inst__DOT__rd),5);
    bufp->chgIData(oldp+118,(vlSelf->core__DOT__reg_file_inst__DOT__wd),32);
    bufp->chgIData(oldp+119,(vlSelf->core__DOT__reg_file_inst__DOT__rv1),32);
    bufp->chgIData(oldp+120,(vlSelf->core__DOT__reg_file_inst__DOT__rv2),32);
    bufp->chgIData(oldp+121,(vlSelf->core__DOT__reg_file_inst__DOT__regs[0]),32);
    bufp->chgIData(oldp+122,(vlSelf->core__DOT__reg_file_inst__DOT__regs[1]),32);
    bufp->chgIData(oldp+123,(vlSelf->core__DOT__reg_file_inst__DOT__regs[2]),32);
    bufp->chgIData(oldp+124,(vlSelf->core__DOT__reg_file_inst__DOT__regs[3]),32);
    bufp->chgIData(oldp+125,(vlSelf->core__DOT__reg_file_inst__DOT__regs[4]),32);
    bufp->chgIData(oldp+126,(vlSelf->core__DOT__reg_file_inst__DOT__regs[5]),32);
    bufp->chgIData(oldp+127,(vlSelf->core__DOT__reg_file_inst__DOT__regs[6]),32);
    bufp->chgIData(oldp+128,(vlSelf->core__DOT__reg_file_inst__DOT__regs[7]),32);
    bufp->chgIData(oldp+129,(vlSelf->core__DOT__reg_file_inst__DOT__regs[8]),32);
    bufp->chgIData(oldp+130,(vlSelf->core__DOT__reg_file_inst__DOT__regs[9]),32);
    bufp->chgIData(oldp+131,(vlSelf->core__DOT__reg_file_inst__DOT__regs[10]),32);
    bufp->chgIData(oldp+132,(vlSelf->core__DOT__reg_file_inst__DOT__regs[11]),32);
    bufp->chgIData(oldp+133,(vlSelf->core__DOT__reg_file_inst__DOT__regs[12]),32);
    bufp->chgIData(oldp+134,(vlSelf->core__DOT__reg_file_inst__DOT__regs[13]),32);
    bufp->chgIData(oldp+135,(vlSelf->core__DOT__reg_file_inst__DOT__regs[14]),32);
    bufp->chgIData(oldp+136,(vlSelf->core__DOT__reg_file_inst__DOT__regs[15]),32);
    bufp->chgIData(oldp+137,(vlSelf->core__DOT__reg_file_inst__DOT__regs[16]),32);
    bufp->chgIData(oldp+138,(vlSelf->core__DOT__reg_file_inst__DOT__regs[17]),32);
    bufp->chgIData(oldp+139,(vlSelf->core__DOT__reg_file_inst__DOT__regs[18]),32);
    bufp->chgIData(oldp+140,(vlSelf->core__DOT__reg_file_inst__DOT__regs[19]),32);
    bufp->chgIData(oldp+141,(vlSelf->core__DOT__reg_file_inst__DOT__regs[20]),32);
    bufp->chgIData(oldp+142,(vlSelf->core__DOT__reg_file_inst__DOT__regs[21]),32);
    bufp->chgIData(oldp+143,(vlSelf->core__DOT__reg_file_inst__DOT__regs[22]),32);
    bufp->chgIData(oldp+144,(vlSelf->core__DOT__reg_file_inst__DOT__regs[23]),32);
    bufp->chgIData(oldp+145,(vlSelf->core__DOT__reg_file_inst__DOT__regs[24]),32);
    bufp->chgIData(oldp+146,(vlSelf->core__DOT__reg_file_inst__DOT__regs[25]),32);
    bufp->chgIData(oldp+147,(vlSelf->core__DOT__reg_file_inst__DOT__regs[26]),32);
    bufp->chgIData(oldp+148,(vlSelf->core__DOT__reg_file_inst__DOT__regs[27]),32);
    bufp->chgIData(oldp+149,(vlSelf->core__DOT__reg_file_inst__DOT__regs[28]),32);
    bufp->chgIData(oldp+150,(vlSelf->core__DOT__reg_file_inst__DOT__regs[29]),32);
    bufp->chgIData(oldp+151,(vlSelf->core__DOT__reg_file_inst__DOT__regs[30]),32);
    bufp->chgIData(oldp+152,(vlSelf->core__DOT__reg_file_inst__DOT__regs[31]),32);
    bufp->chgIData(oldp+153,(vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
