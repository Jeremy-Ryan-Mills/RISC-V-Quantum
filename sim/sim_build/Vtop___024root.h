// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ core__DOT__clk;
        CData/*0:0*/ core__DOT__reset;
        CData/*0:0*/ core__DOT__pc_sel_final;
        CData/*4:0*/ core__DOT__rs1;
        CData/*4:0*/ core__DOT__rs2;
        CData/*4:0*/ core__DOT__rd;
        CData/*0:0*/ core__DOT__branch_taken;
        CData/*0:0*/ core__DOT__fetch_stage_inst__DOT__clk;
        CData/*0:0*/ core__DOT__fetch_stage_inst__DOT__reset;
        CData/*0:0*/ core__DOT__fetch_stage_inst__DOT__pc_sel;
        CData/*0:0*/ core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk;
        CData/*0:0*/ core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__reset;
        CData/*0:0*/ core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_sel;
        CData/*0:0*/ core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__clk;
        CData/*4:0*/ core__DOT__decode_stage_inst__DOT__rs1;
        CData/*4:0*/ core__DOT__decode_stage_inst__DOT__rs2;
        CData/*4:0*/ core__DOT__decode_stage_inst__DOT__rd;
        CData/*6:0*/ core__DOT__decode_stage_inst__DOT__opcode;
        CData/*2:0*/ core__DOT__decode_stage_inst__DOT__funct3;
        CData/*6:0*/ core__DOT__decode_stage_inst__DOT__funct7;
        CData/*6:0*/ core__DOT__decode_stage_inst__DOT__decoder_i__DOT__opcode;
        CData/*2:0*/ core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct3;
        CData/*6:0*/ core__DOT__decode_stage_inst__DOT__decoder_i__DOT__funct7;
        CData/*4:0*/ core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rd;
        CData/*4:0*/ core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs1;
        CData/*4:0*/ core__DOT__decode_stage_inst__DOT__decoder_i__DOT__rs2;
        CData/*6:0*/ core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__opcode;
        CData/*2:0*/ core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct3;
        CData/*6:0*/ core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__funct7;
        CData/*0:0*/ core__DOT__reg_file_inst__DOT__clk;
        CData/*0:0*/ core__DOT__reg_file_inst__DOT__reset;
        CData/*0:0*/ core__DOT__reg_file_inst__DOT__we;
        CData/*4:0*/ core__DOT__reg_file_inst__DOT__rs1;
        CData/*4:0*/ core__DOT__reg_file_inst__DOT__rs2;
        CData/*4:0*/ core__DOT__reg_file_inst__DOT__rd;
        CData/*3:0*/ core__DOT__alu_inst__DOT__alu_op;
        CData/*0:0*/ core__DOT__branch_comp_inst__DOT__clk;
        CData/*0:0*/ core__DOT__branch_comp_inst__DOT__reset;
        CData/*0:0*/ core__DOT__branch_comp_inst__DOT__branch_taken;
        CData/*2:0*/ core__DOT__branch_comp_inst__DOT__funct3;
        CData/*0:0*/ core__DOT__memory_inst__DOT__clk;
        CData/*0:0*/ core__DOT__memory_inst__DOT__reset;
        CData/*0:0*/ core__DOT__memory_inst__DOT__mem_rw;
        CData/*1:0*/ core__DOT__writeback_mux_inst__DOT__wb_sel;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ core__DOT__ctrl;
        SData/*11:0*/ core__DOT__decode_stage_inst__DOT__ctrl;
        SData/*11:0*/ core__DOT__decode_stage_inst__DOT__ctrl_i__DOT__ctrl;
        IData/*31:0*/ core__DOT__pc;
        IData/*31:0*/ core__DOT__alu_out;
        IData/*31:0*/ core__DOT__instr;
        IData/*31:0*/ core__DOT__rv1;
        IData/*31:0*/ core__DOT__rv2;
        IData/*31:0*/ core__DOT__imm;
        IData/*31:0*/ core__DOT__writeback_result;
        IData/*31:0*/ core__DOT__mem_out;
        IData/*31:0*/ core__DOT__alu_a;
        IData/*31:0*/ core__DOT__alu_b;
    };
    struct {
        IData/*31:0*/ core__DOT__fetch_stage_inst__DOT__alu_out;
        IData/*31:0*/ core__DOT__fetch_stage_inst__DOT__pc;
        IData/*31:0*/ core__DOT__fetch_stage_inst__DOT__instr;
        IData/*31:0*/ core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__alu_out;
        IData/*31:0*/ core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc;
        IData/*31:0*/ core__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_next;
        IData/*31:0*/ core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc;
        IData/*31:0*/ core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr;
        IData/*31:0*/ core__DOT__decode_stage_inst__DOT__instr;
        IData/*31:0*/ core__DOT__decode_stage_inst__DOT__imm;
        IData/*31:0*/ core__DOT__decode_stage_inst__DOT__decoder_i__DOT__instr;
        IData/*31:0*/ core__DOT__decode_stage_inst__DOT__decoder_i__DOT__imm;
        IData/*31:0*/ core__DOT__reg_file_inst__DOT__wd;
        IData/*31:0*/ core__DOT__reg_file_inst__DOT__rv1;
        IData/*31:0*/ core__DOT__reg_file_inst__DOT__rv2;
        IData/*31:0*/ core__DOT__alu_inst__DOT__operand_a;
        IData/*31:0*/ core__DOT__alu_inst__DOT__operand_b;
        IData/*31:0*/ core__DOT__alu_inst__DOT__result;
        IData/*31:0*/ core__DOT__branch_comp_inst__DOT__rs1;
        IData/*31:0*/ core__DOT__branch_comp_inst__DOT__rs2;
        IData/*31:0*/ core__DOT__branch_comp_inst__DOT__instr;
        IData/*31:0*/ core__DOT__branch_comp_inst__DOT__diff;
        IData/*31:0*/ core__DOT__memory_inst__DOT__addr;
        IData/*31:0*/ core__DOT__memory_inst__DOT__wdata;
        IData/*31:0*/ core__DOT__memory_inst__DOT__rdata;
        IData/*31:0*/ core__DOT__writeback_mux_inst__DOT__alu_out;
        IData/*31:0*/ core__DOT__writeback_mux_inst__DOT__pc_plus_four;
        IData/*31:0*/ core__DOT__writeback_mux_inst__DOT__mem_out;
        IData/*31:0*/ core__DOT__writeback_mux_inst__DOT__reg_out;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 1024> core__DOT__fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> core__DOT__reg_file_inst__DOT__regs;
        VlUnpacked<IData/*31:0*/, 1024> core__DOT__memory_inst__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
