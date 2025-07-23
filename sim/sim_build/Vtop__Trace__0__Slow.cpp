// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"pc_sel_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"if_id_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"if_id_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rv1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"rv2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+16,0,"reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+18,0,"brun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"mem_rw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+23,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+24,0,"id_ex_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"id_ex_rv1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"id_ex_rv2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"id_ex_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"id_ex_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"id_ex_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"id_ex_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("id_ex_ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+31,0,"reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+33,0,"brun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"mem_rw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+38,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+39,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"writeback_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("branch_comp_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+49,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+56,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode_stage_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+62,0,"reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+64,0,"brun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"b_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"mem_rw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+69,0,"pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+70,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+71,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("ctrl_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+74,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+76,0,"reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+78,0,"brun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"b_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"mem_rw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+83,0,"pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decoder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+86,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+87,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+88,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+91,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch_stage_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("instruction_mem_if_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+101,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memory_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+107,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"mem_rw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+118,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"rv1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"rv2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+122+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+154,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullBit(oldp+3,(vlSelf->core__DOT__clk));
    bufp->fullBit(oldp+4,(vlSelf->core__DOT__reset));
    bufp->fullIData(oldp+5,(vlSelf->core__DOT__pc),32);
    bufp->fullBit(oldp+6,(vlSelf->core__DOT__pc_sel_final));
    bufp->fullIData(oldp+7,(vlSelf->core__DOT__instr),32);
    bufp->fullIData(oldp+8,(vlSelf->core__DOT__if_id_instr),32);
    bufp->fullIData(oldp+9,(vlSelf->core__DOT__if_id_pc),32);
    bufp->fullCData(oldp+10,(vlSelf->core__DOT__rs1),5);
    bufp->fullCData(oldp+11,(vlSelf->core__DOT__rs2),5);
    bufp->fullCData(oldp+12,(vlSelf->core__DOT__rd),5);
    bufp->fullIData(oldp+13,(vlSelf->core__DOT__rv1),32);
    bufp->fullIData(oldp+14,(vlSelf->core__DOT__rv2),32);
    bufp->fullIData(oldp+15,(vlSelf->core__DOT__imm),32);
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                  >> 0xbU))));
    bufp->fullCData(oldp+17,((0xfU & ((IData)(vlSelf->core__DOT__ctrl) 
                                      >> 7U))),4);
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                  >> 6U))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                  >> 5U))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                  >> 3U))));
    bufp->fullCData(oldp+22,((3U & ((IData)(vlSelf->core__DOT__ctrl) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+23,((1U & (IData)(vlSelf->core__DOT__ctrl))));
    bufp->fullIData(oldp+24,(vlSelf->core__DOT__id_ex_pc),32);
    bufp->fullIData(oldp+25,(vlSelf->core__DOT__id_ex_rv1),32);
    bufp->fullIData(oldp+26,(vlSelf->core__DOT__id_ex_rv2),32);
    bufp->fullIData(oldp+27,(vlSelf->core__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+28,(vlSelf->core__DOT__id_ex_rs1),5);
    bufp->fullCData(oldp+29,(vlSelf->core__DOT__id_ex_rs2),5);
    bufp->fullCData(oldp+30,(vlSelf->core__DOT__id_ex_rd),5);
    bufp->fullBit(oldp+31,((1U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                  >> 0xbU))));
    bufp->fullCData(oldp+32,((0xfU & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                      >> 7U))),4);
    bufp->fullBit(oldp+33,((1U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                  >> 6U))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                  >> 5U))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                  >> 3U))));
    bufp->fullCData(oldp+37,((3U & ((IData)(vlSelf->core__DOT__id_ex_ctrl) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+38,((1U & (IData)(vlSelf->core__DOT__id_ex_ctrl))));
    bufp->fullIData(oldp+39,(vlSelf->core__DOT__alu_out),32);
    bufp->fullIData(oldp+40,(vlSelf->core__DOT__alu_a),32);
    bufp->fullIData(oldp+41,(vlSelf->core__DOT__alu_b),32);
    bufp->fullBit(oldp+42,(vlSelf->core__DOT__branch_taken));
    bufp->fullIData(oldp+43,(vlSelf->core__DOT__mem_out),32);
    bufp->fullIData(oldp+44,(vlSelf->core__DOT__writeback_result),32);
    bufp->fullCData(oldp+45,(vlSelf->core__DOT__alu_inst__DOT__alu_op),4);
    bufp->fullIData(oldp+46,(vlSelf->core__DOT__alu_inst__DOT__operand_a),32);
    bufp->fullIData(oldp+47,(vlSelf->core__DOT__alu_inst__DOT__operand_b),32);
    bufp->fullIData(oldp+48,(vlSelf->core__DOT__alu_inst__DOT__result),32);
    bufp->fullBit(oldp+49,(vlSelf->core__DOT__branch_comp_inst__DOT__clk));
    bufp->fullBit(oldp+50,(vlSelf->core__DOT__branch_comp_inst__DOT__reset));
    bufp->fullIData(oldp+51,(vlSelf->core__DOT__branch_comp_inst__DOT__rs1),32);
    bufp->fullIData(oldp+52,(vlSelf->core__DOT__branch_comp_inst__DOT__rs2),32);
    bufp->fullIData(oldp+53,(vlSelf->core__DOT__branch_comp_inst__DOT__instr),32);
    bufp->fullBit(oldp+54,(vlSelf->core__DOT__branch_comp_inst__DOT__branch_taken));
    bufp->fullCData(oldp+55,(vlSelf->core__DOT__branch_comp_inst__DOT__funct3),3);
    bufp->fullIData(oldp+56,(vlSelf->core__DOT__branch_comp_inst__DOT__diff),32);
    bufp->fullIData(oldp+57,(vlSelf->core__DOT__decode_stage_inst__DOT__instr),32);
    bufp->fullCData(oldp+58,(vlSelf->core__DOT__decode_stage_inst__DOT__rs1),5);
    bufp->fullCData(oldp+59,(vlSelf->core__DOT__decode_stage_inst__DOT__rs2),5);
    bufp->fullCData(oldp+60,(vlSelf->core__DOT__decode_stage_inst__DOT__rd),5);
    bufp->fullIData(oldp+61,(vlSelf->core__DOT__decode_stage_inst__DOT__imm),32);
    bufp->fullBit(oldp+62,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                  >> 0xbU))));
    bufp->fullCData(oldp+63,((0xfU & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                      >> 7U))),4);
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                  >> 6U))));
    bufp->fullBit(oldp+65,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                  >> 5U))));
    bufp->fullBit(oldp+66,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+67,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                  >> 3U))));
    bufp->fullCData(oldp+68,((3U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+69,((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl))));
    bufp->fullCData(oldp+70,(vlSelf->core__DOT__decode_stage_inst__DOT__opcode),7);
    bufp->fullCData(oldp+71,(vlSelf->core__DOT__decode_stage_inst__DOT__funct3),3);
    bufp->fullCData(oldp+72,(vlSelf->core__DOT__decode_stage_inst__DOT__funct7),7);
    bufp->fullCData(oldp+73,(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__opcode),7);
    bufp->fullCData(oldp+74,(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct3),3);
    bufp->fullCData(oldp+75,(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct7),7);
    bufp->fullBit(oldp+76,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                  >> 0xbU))));
    bufp->fullCData(oldp+77,((0xfU & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                      >> 7U))),4);
    bufp->fullBit(oldp+78,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                  >> 6U))));
    bufp->fullBit(oldp+79,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                  >> 5U))));
    bufp->fullBit(oldp+80,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+81,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                  >> 3U))));
    bufp->fullCData(oldp+82,((3U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+83,((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl))));
    bufp->fullIData(oldp+84,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__instr),32);
    bufp->fullCData(oldp+85,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__opcode),7);
    bufp->fullCData(oldp+86,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct3),3);
    bufp->fullCData(oldp+87,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct7),7);
    bufp->fullCData(oldp+88,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rd),5);
    bufp->fullCData(oldp+89,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs1),5);
    bufp->fullCData(oldp+90,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs2),5);
    bufp->fullIData(oldp+91,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm),32);
    bufp->fullBit(oldp+92,(vlSelf->core__DOT__fetch_stage_inst__DOT__clk));
    bufp->fullBit(oldp+93,(vlSelf->core__DOT__fetch_stage_inst__DOT__reset));
    bufp->fullBit(oldp+94,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_sel));
    bufp->fullIData(oldp+95,(vlSelf->core__DOT__fetch_stage_inst__DOT__alu_out),32);
    bufp->fullIData(oldp+96,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc),32);
    bufp->fullIData(oldp+97,(vlSelf->core__DOT__fetch_stage_inst__DOT__instr),32);
    bufp->fullBit(oldp+98,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__clk));
    bufp->fullIData(oldp+99,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc),32);
    bufp->fullIData(oldp+100,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr),32);
    bufp->fullBit(oldp+101,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk));
    bufp->fullBit(oldp+102,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__reset));
    bufp->fullBit(oldp+103,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_sel));
    bufp->fullIData(oldp+104,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__alu_out),32);
    bufp->fullIData(oldp+105,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc),32);
    bufp->fullIData(oldp+106,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_next),32);
    bufp->fullBit(oldp+107,(vlSelf->core__DOT__memory_inst__DOT__clk));
    bufp->fullBit(oldp+108,(vlSelf->core__DOT__memory_inst__DOT__reset));
    bufp->fullIData(oldp+109,(vlSelf->core__DOT__memory_inst__DOT__addr),32);
    bufp->fullIData(oldp+110,(vlSelf->core__DOT__memory_inst__DOT__wdata),32);
    bufp->fullBit(oldp+111,(vlSelf->core__DOT__memory_inst__DOT__mem_rw));
    bufp->fullIData(oldp+112,(vlSelf->core__DOT__memory_inst__DOT__rdata),32);
    bufp->fullBit(oldp+113,(vlSelf->core__DOT__reg_file_inst__DOT__clk));
    bufp->fullBit(oldp+114,(vlSelf->core__DOT__reg_file_inst__DOT__reset));
    bufp->fullBit(oldp+115,(vlSelf->core__DOT__reg_file_inst__DOT__we));
    bufp->fullCData(oldp+116,(vlSelf->core__DOT__reg_file_inst__DOT__rs1),5);
    bufp->fullCData(oldp+117,(vlSelf->core__DOT__reg_file_inst__DOT__rs2),5);
    bufp->fullCData(oldp+118,(vlSelf->core__DOT__reg_file_inst__DOT__rd),5);
    bufp->fullIData(oldp+119,(vlSelf->core__DOT__reg_file_inst__DOT__wd),32);
    bufp->fullIData(oldp+120,(vlSelf->core__DOT__reg_file_inst__DOT__rv1),32);
    bufp->fullIData(oldp+121,(vlSelf->core__DOT__reg_file_inst__DOT__rv2),32);
    bufp->fullIData(oldp+122,(vlSelf->core__DOT__reg_file_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+123,(vlSelf->core__DOT__reg_file_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+124,(vlSelf->core__DOT__reg_file_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+125,(vlSelf->core__DOT__reg_file_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+126,(vlSelf->core__DOT__reg_file_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+127,(vlSelf->core__DOT__reg_file_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+128,(vlSelf->core__DOT__reg_file_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+129,(vlSelf->core__DOT__reg_file_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+130,(vlSelf->core__DOT__reg_file_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+131,(vlSelf->core__DOT__reg_file_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+132,(vlSelf->core__DOT__reg_file_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+133,(vlSelf->core__DOT__reg_file_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+134,(vlSelf->core__DOT__reg_file_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+135,(vlSelf->core__DOT__reg_file_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+136,(vlSelf->core__DOT__reg_file_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+137,(vlSelf->core__DOT__reg_file_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+138,(vlSelf->core__DOT__reg_file_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+139,(vlSelf->core__DOT__reg_file_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+140,(vlSelf->core__DOT__reg_file_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+141,(vlSelf->core__DOT__reg_file_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+142,(vlSelf->core__DOT__reg_file_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+143,(vlSelf->core__DOT__reg_file_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+144,(vlSelf->core__DOT__reg_file_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+145,(vlSelf->core__DOT__reg_file_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+146,(vlSelf->core__DOT__reg_file_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+147,(vlSelf->core__DOT__reg_file_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+148,(vlSelf->core__DOT__reg_file_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+149,(vlSelf->core__DOT__reg_file_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+150,(vlSelf->core__DOT__reg_file_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+151,(vlSelf->core__DOT__reg_file_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+152,(vlSelf->core__DOT__reg_file_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+153,(vlSelf->core__DOT__reg_file_inst__DOT__regs[31]),32);
    bufp->fullIData(oldp+154,(vlSelf->core__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i),32);
}
