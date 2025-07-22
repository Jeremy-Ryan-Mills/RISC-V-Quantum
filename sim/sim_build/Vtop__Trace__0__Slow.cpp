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
    tracep->declBit(c+3,0,"sim_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"sim_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+5,0,"sim_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"sim_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"sim_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+10,0,"sim_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"pc_sel_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"rv1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"rv2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+21,0,"reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+23,0,"brun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"mem_rw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+28,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+29,0,"writeback_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("branch_comp_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode_stage_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+51,0,"reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"brun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"b_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"mem_rw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+58,0,"pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+59,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+60,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+61,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("ctrl_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+63,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+64,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+65,0,"reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+67,0,"brun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"b_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"mem_rw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+72,0,"pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decoder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+75,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+77,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+78,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+79,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+80,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch_stage_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+85,0,"sim_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"sim_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+87,0,"sim_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("instruction_mem_if_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+90,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"sim_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"sim_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+94,0,"sim_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+96,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memory_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+102,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"mem_rw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+108,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+113,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"rv1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"rv2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+117+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("writeback_mux_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+149,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"pc_plus_four",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"mem_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"wb_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+153,0,"reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullBit(oldp+3,(vlSelf->sim_load_en));
    bufp->fullSData(oldp+4,(vlSelf->sim_addr),10);
    bufp->fullIData(oldp+5,(vlSelf->sim_data),32);
    bufp->fullBit(oldp+6,(vlSelf->core__DOT__clk));
    bufp->fullBit(oldp+7,(vlSelf->core__DOT__reset));
    bufp->fullBit(oldp+8,(vlSelf->core__DOT__sim_load_en));
    bufp->fullSData(oldp+9,(vlSelf->core__DOT__sim_addr),10);
    bufp->fullIData(oldp+10,(vlSelf->core__DOT__sim_data),32);
    bufp->fullIData(oldp+11,(vlSelf->core__DOT__pc),32);
    bufp->fullBit(oldp+12,(vlSelf->core__DOT__pc_sel_final));
    bufp->fullIData(oldp+13,(vlSelf->core__DOT__alu_out),32);
    bufp->fullIData(oldp+14,(vlSelf->core__DOT__instr),32);
    bufp->fullIData(oldp+15,(vlSelf->core__DOT__rv1),32);
    bufp->fullIData(oldp+16,(vlSelf->core__DOT__rv2),32);
    bufp->fullCData(oldp+17,(vlSelf->core__DOT__rs1),5);
    bufp->fullCData(oldp+18,(vlSelf->core__DOT__rs2),5);
    bufp->fullCData(oldp+19,(vlSelf->core__DOT__rd),5);
    bufp->fullIData(oldp+20,(vlSelf->core__DOT__imm),32);
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                  >> 0xbU))));
    bufp->fullCData(oldp+22,((0xfU & ((IData)(vlSelf->core__DOT__ctrl) 
                                      >> 7U))),4);
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                  >> 6U))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                  >> 5U))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->core__DOT__ctrl) 
                                  >> 3U))));
    bufp->fullCData(oldp+27,((3U & ((IData)(vlSelf->core__DOT__ctrl) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+28,((1U & (IData)(vlSelf->core__DOT__ctrl))));
    bufp->fullIData(oldp+29,(vlSelf->core__DOT__writeback_result),32);
    bufp->fullIData(oldp+30,(vlSelf->core__DOT__mem_out),32);
    bufp->fullBit(oldp+31,(vlSelf->core__DOT__branch_taken));
    bufp->fullIData(oldp+32,(vlSelf->core__DOT__alu_a),32);
    bufp->fullIData(oldp+33,(vlSelf->core__DOT__alu_b),32);
    bufp->fullCData(oldp+34,(vlSelf->core__DOT__alu_inst__DOT__alu_op),4);
    bufp->fullIData(oldp+35,(vlSelf->core__DOT__alu_inst__DOT__operand_a),32);
    bufp->fullIData(oldp+36,(vlSelf->core__DOT__alu_inst__DOT__operand_b),32);
    bufp->fullIData(oldp+37,(vlSelf->core__DOT__alu_inst__DOT__result),32);
    bufp->fullBit(oldp+38,(vlSelf->core__DOT__branch_comp_inst__DOT__clk));
    bufp->fullBit(oldp+39,(vlSelf->core__DOT__branch_comp_inst__DOT__reset));
    bufp->fullIData(oldp+40,(vlSelf->core__DOT__branch_comp_inst__DOT__rs1),32);
    bufp->fullIData(oldp+41,(vlSelf->core__DOT__branch_comp_inst__DOT__rs2),32);
    bufp->fullIData(oldp+42,(vlSelf->core__DOT__branch_comp_inst__DOT__instr),32);
    bufp->fullBit(oldp+43,(vlSelf->core__DOT__branch_comp_inst__DOT__branch_taken));
    bufp->fullCData(oldp+44,(vlSelf->core__DOT__branch_comp_inst__DOT__funct3),3);
    bufp->fullIData(oldp+45,(vlSelf->core__DOT__branch_comp_inst__DOT__diff),32);
    bufp->fullIData(oldp+46,(vlSelf->core__DOT__decode_stage_inst__DOT__instr),32);
    bufp->fullCData(oldp+47,(vlSelf->core__DOT__decode_stage_inst__DOT__rs1),5);
    bufp->fullCData(oldp+48,(vlSelf->core__DOT__decode_stage_inst__DOT__rs2),5);
    bufp->fullCData(oldp+49,(vlSelf->core__DOT__decode_stage_inst__DOT__rd),5);
    bufp->fullIData(oldp+50,(vlSelf->core__DOT__decode_stage_inst__DOT__imm),32);
    bufp->fullBit(oldp+51,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                  >> 0xbU))));
    bufp->fullCData(oldp+52,((0xfU & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                      >> 7U))),4);
    bufp->fullBit(oldp+53,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                  >> 6U))));
    bufp->fullBit(oldp+54,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                  >> 5U))));
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                  >> 3U))));
    bufp->fullCData(oldp+57,((3U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+58,((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl))));
    bufp->fullCData(oldp+59,(vlSelf->core__DOT__decode_stage_inst__DOT__opcode),7);
    bufp->fullCData(oldp+60,(vlSelf->core__DOT__decode_stage_inst__DOT__funct3),3);
    bufp->fullCData(oldp+61,(vlSelf->core__DOT__decode_stage_inst__DOT__funct7),7);
    bufp->fullCData(oldp+62,(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__opcode),7);
    bufp->fullCData(oldp+63,(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct3),3);
    bufp->fullCData(oldp+64,(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct7),7);
    bufp->fullBit(oldp+65,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                  >> 0xbU))));
    bufp->fullCData(oldp+66,((0xfU & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                      >> 7U))),4);
    bufp->fullBit(oldp+67,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                  >> 6U))));
    bufp->fullBit(oldp+68,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                  >> 5U))));
    bufp->fullBit(oldp+69,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+70,((1U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                  >> 3U))));
    bufp->fullCData(oldp+71,((3U & ((IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+72,((1U & (IData)(vlSelf->core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl))));
    bufp->fullIData(oldp+73,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__instr),32);
    bufp->fullCData(oldp+74,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__opcode),7);
    bufp->fullCData(oldp+75,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct3),3);
    bufp->fullCData(oldp+76,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct7),7);
    bufp->fullCData(oldp+77,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rd),5);
    bufp->fullCData(oldp+78,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs1),5);
    bufp->fullCData(oldp+79,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs2),5);
    bufp->fullIData(oldp+80,(vlSelf->core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm),32);
    bufp->fullBit(oldp+81,(vlSelf->core__DOT__fetch_stage_inst__DOT__clk));
    bufp->fullBit(oldp+82,(vlSelf->core__DOT__fetch_stage_inst__DOT__reset));
    bufp->fullBit(oldp+83,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_sel));
    bufp->fullIData(oldp+84,(vlSelf->core__DOT__fetch_stage_inst__DOT__alu_out),32);
    bufp->fullBit(oldp+85,(vlSelf->core__DOT__fetch_stage_inst__DOT__sim_load_en));
    bufp->fullSData(oldp+86,(vlSelf->core__DOT__fetch_stage_inst__DOT__sim_addr),10);
    bufp->fullIData(oldp+87,(vlSelf->core__DOT__fetch_stage_inst__DOT__sim_data),32);
    bufp->fullIData(oldp+88,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc),32);
    bufp->fullIData(oldp+89,(vlSelf->core__DOT__fetch_stage_inst__DOT__instr),32);
    bufp->fullBit(oldp+90,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__clk));
    bufp->fullIData(oldp+91,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc),32);
    bufp->fullBit(oldp+92,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__sim_load_en));
    bufp->fullSData(oldp+93,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__sim_addr),10);
    bufp->fullIData(oldp+94,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__sim_data),32);
    bufp->fullIData(oldp+95,(vlSelf->core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr),32);
    bufp->fullBit(oldp+96,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk));
    bufp->fullBit(oldp+97,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__reset));
    bufp->fullBit(oldp+98,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_sel));
    bufp->fullIData(oldp+99,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__alu_out),32);
    bufp->fullIData(oldp+100,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc),32);
    bufp->fullIData(oldp+101,(vlSelf->core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_next),32);
    bufp->fullBit(oldp+102,(vlSelf->core__DOT__memory_inst__DOT__clk));
    bufp->fullBit(oldp+103,(vlSelf->core__DOT__memory_inst__DOT__reset));
    bufp->fullIData(oldp+104,(vlSelf->core__DOT__memory_inst__DOT__addr),32);
    bufp->fullIData(oldp+105,(vlSelf->core__DOT__memory_inst__DOT__wdata),32);
    bufp->fullBit(oldp+106,(vlSelf->core__DOT__memory_inst__DOT__mem_rw));
    bufp->fullIData(oldp+107,(vlSelf->core__DOT__memory_inst__DOT__rdata),32);
    bufp->fullBit(oldp+108,(vlSelf->core__DOT__reg_file_inst__DOT__clk));
    bufp->fullBit(oldp+109,(vlSelf->core__DOT__reg_file_inst__DOT__reset));
    bufp->fullBit(oldp+110,(vlSelf->core__DOT__reg_file_inst__DOT__we));
    bufp->fullCData(oldp+111,(vlSelf->core__DOT__reg_file_inst__DOT__rs1),5);
    bufp->fullCData(oldp+112,(vlSelf->core__DOT__reg_file_inst__DOT__rs2),5);
    bufp->fullCData(oldp+113,(vlSelf->core__DOT__reg_file_inst__DOT__rd),5);
    bufp->fullIData(oldp+114,(vlSelf->core__DOT__reg_file_inst__DOT__wd),32);
    bufp->fullIData(oldp+115,(vlSelf->core__DOT__reg_file_inst__DOT__rv1),32);
    bufp->fullIData(oldp+116,(vlSelf->core__DOT__reg_file_inst__DOT__rv2),32);
    bufp->fullIData(oldp+117,(vlSelf->core__DOT__reg_file_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+118,(vlSelf->core__DOT__reg_file_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+119,(vlSelf->core__DOT__reg_file_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+120,(vlSelf->core__DOT__reg_file_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+121,(vlSelf->core__DOT__reg_file_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+122,(vlSelf->core__DOT__reg_file_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+123,(vlSelf->core__DOT__reg_file_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+124,(vlSelf->core__DOT__reg_file_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+125,(vlSelf->core__DOT__reg_file_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+126,(vlSelf->core__DOT__reg_file_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+127,(vlSelf->core__DOT__reg_file_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+128,(vlSelf->core__DOT__reg_file_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+129,(vlSelf->core__DOT__reg_file_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+130,(vlSelf->core__DOT__reg_file_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+131,(vlSelf->core__DOT__reg_file_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+132,(vlSelf->core__DOT__reg_file_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+133,(vlSelf->core__DOT__reg_file_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+134,(vlSelf->core__DOT__reg_file_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+135,(vlSelf->core__DOT__reg_file_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+136,(vlSelf->core__DOT__reg_file_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+137,(vlSelf->core__DOT__reg_file_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+138,(vlSelf->core__DOT__reg_file_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+139,(vlSelf->core__DOT__reg_file_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+140,(vlSelf->core__DOT__reg_file_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+141,(vlSelf->core__DOT__reg_file_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+142,(vlSelf->core__DOT__reg_file_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+143,(vlSelf->core__DOT__reg_file_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+144,(vlSelf->core__DOT__reg_file_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+145,(vlSelf->core__DOT__reg_file_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+146,(vlSelf->core__DOT__reg_file_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+147,(vlSelf->core__DOT__reg_file_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+148,(vlSelf->core__DOT__reg_file_inst__DOT__regs[31]),32);
    bufp->fullIData(oldp+149,(vlSelf->core__DOT__writeback_mux_inst__DOT__alu_out),32);
    bufp->fullIData(oldp+150,(vlSelf->core__DOT__writeback_mux_inst__DOT__pc_plus_four),32);
    bufp->fullIData(oldp+151,(vlSelf->core__DOT__writeback_mux_inst__DOT__mem_out),32);
    bufp->fullCData(oldp+152,(vlSelf->core__DOT__writeback_mux_inst__DOT__wb_sel),2);
    bufp->fullIData(oldp+153,(vlSelf->core__DOT__writeback_mux_inst__DOT__reg_out),32);
}
