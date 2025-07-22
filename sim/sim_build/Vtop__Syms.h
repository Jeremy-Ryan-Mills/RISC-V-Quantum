// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_core;
    VerilatedScope __Vscope_core__alu_inst;
    VerilatedScope __Vscope_core__branch_comp_inst;
    VerilatedScope __Vscope_core__decode_stage_inst;
    VerilatedScope __Vscope_core__decode_stage_inst__ctrl_i;
    VerilatedScope __Vscope_core__decode_stage_inst__decoder_i;
    VerilatedScope __Vscope_core__fetch_stage_inst;
    VerilatedScope __Vscope_core__fetch_stage_inst__instruction_mem_if_inst;
    VerilatedScope __Vscope_core__fetch_stage_inst__pc_inst;
    VerilatedScope __Vscope_core__memory_inst;
    VerilatedScope __Vscope_core__reg_file_inst;
    VerilatedScope __Vscope_core__writeback_mux_inst;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
