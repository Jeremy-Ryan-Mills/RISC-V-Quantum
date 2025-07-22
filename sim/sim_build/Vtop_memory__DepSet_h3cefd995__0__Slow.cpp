// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_memory.h"

VL_ATTR_COLD void Vtop_memory___ctor_var_reset(Vtop_memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_memory___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->addr = VL_RAND_RESET_I(32);
    vlSelf->wdata = VL_RAND_RESET_I(32);
    vlSelf->mem_rw = VL_RAND_RESET_I(1);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_RAND_RESET_I(32);
    }
}
