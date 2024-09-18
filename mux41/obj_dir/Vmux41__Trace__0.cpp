// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux41__Syms.h"


void Vmux41___024root__trace_chg_sub_0(Vmux41___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux41___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_chg_top_0\n"); );
    // Init
    Vmux41___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux41___024root*>(voidSelf);
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux41___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux41___024root__trace_chg_sub_0(Vmux41___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->D0));
    bufp->chgBit(oldp+1,(vlSelf->D1));
    bufp->chgBit(oldp+2,(vlSelf->D2));
    bufp->chgBit(oldp+3,(vlSelf->D3));
    bufp->chgCData(oldp+4,(vlSelf->S),2);
    bufp->chgBit(oldp+5,(vlSelf->Y));
    bufp->chgBit(oldp+6,((((~ (IData)(vlSelf->S)) & (IData)(vlSelf->D0)) 
                          | ((IData)(vlSelf->D1) & (IData)(vlSelf->S)))));
    bufp->chgBit(oldp+7,((((~ (IData)(vlSelf->S)) & (IData)(vlSelf->D2)) 
                          | ((IData)(vlSelf->D3) & (IData)(vlSelf->S)))));
    bufp->chgBit(oldp+8,((1U & (IData)(vlSelf->S))));
    bufp->chgBit(oldp+9,((1U & ((IData)(vlSelf->S) 
                                >> 1U))));
}

void Vmux41___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_cleanup\n"); );
    // Init
    Vmux41___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux41___024root*>(voidSelf);
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
