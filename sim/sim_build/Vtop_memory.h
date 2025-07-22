// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_MEMORY_H_
#define VERILATED_VTOP_MEMORY_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_memory final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(mem_rw,0,0);
    VL_IN(addr,31,0);
    VL_IN(wdata,31,0);
    VL_OUT(rdata,31,0);
    VlUnpacked<IData/*31:0*/, 1024> mem;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_memory(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_memory();
    VL_UNCOPYABLE(Vtop_memory);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
