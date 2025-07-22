// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_memory.h"

VL_INLINE_OPT void Vtop_memory___nba_sequent__TOP__core__memory_inst__0(Vtop_memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_memory___nba_sequent__TOP__core__memory_inst__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__mem__v0;
    __Vdlyvdim0__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    __Vdlyvval__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    __Vdlyvset__mem__v0 = 0;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->mem_rw) {
            __Vdlyvval__mem__v0 = vlSelf->wdata;
            __Vdlyvset__mem__v0 = 1U;
            __Vdlyvdim0__mem__v0 = (0x3ffU & vlSelf->addr);
        }
    }
    vlSelf->rdata = ((IData)(vlSelf->reset) ? 0U : 
                     vlSelf->mem[(0x3ffU & vlSelf->addr)]);
    if (__Vdlyvset__mem__v0) {
        vlSelf->mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}
