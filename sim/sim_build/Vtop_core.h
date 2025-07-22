// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CORE_H_
#define VERILATED_VTOP_CORE_H_  // guard

#include "verilated.h"
class Vtop_memory;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_core final : public VerilatedModule {
  public:
    // CELLS
    Vtop_memory* memory_inst;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ pc_sel_final;
        CData/*4:0*/ rs1;
        CData/*4:0*/ rs2;
        CData/*4:0*/ rd;
        CData/*0:0*/ branch_taken;
        CData/*0:0*/ fetch_stage_inst__DOT__clk;
        CData/*0:0*/ fetch_stage_inst__DOT__reset;
        CData/*0:0*/ fetch_stage_inst__DOT__pc_sel;
        CData/*0:0*/ fetch_stage_inst__DOT__pc_inst__DOT__clk;
        CData/*0:0*/ fetch_stage_inst__DOT__pc_inst__DOT__reset;
        CData/*0:0*/ fetch_stage_inst__DOT__pc_inst__DOT__pc_sel;
        CData/*0:0*/ fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__clk;
        CData/*4:0*/ decode_stage_inst__DOT__rs1;
        CData/*4:0*/ decode_stage_inst__DOT__rs2;
        CData/*4:0*/ decode_stage_inst__DOT__rd;
        CData/*6:0*/ decode_stage_inst__DOT__opcode;
        CData/*2:0*/ decode_stage_inst__DOT__funct3;
        CData/*6:0*/ decode_stage_inst__DOT__funct7;
        CData/*6:0*/ decode_stage_inst__DOT__decoder_i__DOT__opcode;
        CData/*2:0*/ decode_stage_inst__DOT__decoder_i__DOT__funct3;
        CData/*6:0*/ decode_stage_inst__DOT__decoder_i__DOT__funct7;
        CData/*4:0*/ decode_stage_inst__DOT__decoder_i__DOT__rd;
        CData/*4:0*/ decode_stage_inst__DOT__decoder_i__DOT__rs1;
        CData/*4:0*/ decode_stage_inst__DOT__decoder_i__DOT__rs2;
        CData/*6:0*/ decode_stage_inst__DOT__ctrl_i__DOT__opcode;
        CData/*2:0*/ decode_stage_inst__DOT__ctrl_i__DOT__funct3;
        CData/*6:0*/ decode_stage_inst__DOT__ctrl_i__DOT__funct7;
        CData/*0:0*/ reg_file_inst__DOT__clk;
        CData/*0:0*/ reg_file_inst__DOT__reset;
        CData/*0:0*/ reg_file_inst__DOT__we;
        CData/*4:0*/ reg_file_inst__DOT__rs1;
        CData/*4:0*/ reg_file_inst__DOT__rs2;
        CData/*4:0*/ reg_file_inst__DOT__rd;
        CData/*3:0*/ alu_inst__DOT__alu_op;
        CData/*0:0*/ branch_comp_inst__DOT__clk;
        CData/*0:0*/ branch_comp_inst__DOT__reset;
        CData/*0:0*/ branch_comp_inst__DOT__branch_taken;
        CData/*2:0*/ branch_comp_inst__DOT__funct3;
        CData/*1:0*/ writeback_mux_inst__DOT__wb_sel;
        SData/*11:0*/ ctrl;
        SData/*11:0*/ decode_stage_inst__DOT__ctrl;
        SData/*11:0*/ decode_stage_inst__DOT__ctrl_i__DOT__ctrl;
        IData/*31:0*/ pc;
        IData/*31:0*/ alu_out;
        IData/*31:0*/ instr;
        IData/*31:0*/ rv1;
        IData/*31:0*/ rv2;
        IData/*31:0*/ imm;
        IData/*31:0*/ writeback_result;
        IData/*31:0*/ mem_out;
        IData/*31:0*/ alu_a;
        IData/*31:0*/ alu_b;
        IData/*31:0*/ fetch_stage_inst__DOT__alu_out;
        IData/*31:0*/ fetch_stage_inst__DOT__pc;
        IData/*31:0*/ fetch_stage_inst__DOT__instr;
        IData/*31:0*/ fetch_stage_inst__DOT__pc_inst__DOT__alu_out;
        IData/*31:0*/ fetch_stage_inst__DOT__pc_inst__DOT__pc;
        IData/*31:0*/ fetch_stage_inst__DOT__pc_inst__DOT__pc_next;
        IData/*31:0*/ fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__pc;
        IData/*31:0*/ fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__instr;
        IData/*31:0*/ decode_stage_inst__DOT__instr;
        IData/*31:0*/ decode_stage_inst__DOT__imm;
    };
    struct {
        IData/*31:0*/ decode_stage_inst__DOT__decoder_i__DOT__instr;
        IData/*31:0*/ decode_stage_inst__DOT__decoder_i__DOT__imm;
        IData/*31:0*/ reg_file_inst__DOT__wd;
        IData/*31:0*/ reg_file_inst__DOT__rv1;
        IData/*31:0*/ reg_file_inst__DOT__rv2;
        IData/*31:0*/ alu_inst__DOT__operand_a;
        IData/*31:0*/ alu_inst__DOT__operand_b;
        IData/*31:0*/ alu_inst__DOT__result;
        IData/*31:0*/ branch_comp_inst__DOT__rs1;
        IData/*31:0*/ branch_comp_inst__DOT__rs2;
        IData/*31:0*/ branch_comp_inst__DOT__instr;
        IData/*31:0*/ branch_comp_inst__DOT__diff;
        IData/*31:0*/ writeback_mux_inst__DOT__alu_out;
        IData/*31:0*/ writeback_mux_inst__DOT__pc_plus_four;
        IData/*31:0*/ writeback_mux_inst__DOT__mem_out;
        IData/*31:0*/ writeback_mux_inst__DOT__reg_out;
        VlUnpacked<IData/*31:0*/, 1024> fetch_stage_inst__DOT__instruction_mem_if_inst__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> reg_file_inst__DOT__regs;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_core(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_core();
    VL_UNCOPYABLE(Vtop_core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
