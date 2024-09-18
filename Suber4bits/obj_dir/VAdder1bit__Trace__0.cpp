// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder1bit__Syms.h"


void VAdder1bit___024root__trace_chg_sub_0(VAdder1bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VAdder1bit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder1bit___024root__trace_chg_top_0\n"); );
    // Init
    VAdder1bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder1bit___024root*>(voidSelf);
    VAdder1bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAdder1bit___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VAdder1bit___024root__trace_chg_sub_0(VAdder1bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder1bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder1bit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->Suber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin));
        bufp->chgBit(oldp+1,(vlSelf->Suber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin));
        bufp->chgBit(oldp+2,(vlSelf->Suber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin));
    }
    bufp->chgCData(oldp+3,(vlSelf->A),4);
    bufp->chgCData(oldp+4,(vlSelf->B),4);
    bufp->chgCData(oldp+5,(vlSelf->S),4);
    bufp->chgBit(oldp+6,(vlSelf->Cout));
    bufp->chgCData(oldp+7,((1U | (((IData)(vlSelf->Cout) 
                                   << 4U) | (((IData)(vlSelf->Suber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                              << 3U) 
                                             | (((IData)(vlSelf->Suber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                                 << 2U) 
                                                | ((IData)(vlSelf->Suber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                                   << 1U)))))),5);
    bufp->chgBit(oldp+8,((1U & (IData)(vlSelf->A))));
    bufp->chgBit(oldp+9,((1U & (~ (IData)(vlSelf->B)))));
    bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->B) 
                                 ^ (IData)(vlSelf->A)))));
    bufp->chgBit(oldp+11,((1U & ((IData)(vlSelf->A) 
                                 >> 1U))));
    bufp->chgBit(oldp+12,((1U & (~ ((IData)(vlSelf->B) 
                                    >> 1U)))));
    bufp->chgBit(oldp+13,((1U & (((IData)(vlSelf->A) 
                                  >> 1U) ^ ((~ ((IData)(vlSelf->B) 
                                                >> 1U)) 
                                            ^ (IData)(vlSelf->Suber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin))))));
    bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->A) 
                                 >> 2U))));
    bufp->chgBit(oldp+15,((1U & (~ ((IData)(vlSelf->B) 
                                    >> 2U)))));
    bufp->chgBit(oldp+16,((1U & (((IData)(vlSelf->A) 
                                  >> 2U) ^ ((~ ((IData)(vlSelf->B) 
                                                >> 2U)) 
                                            ^ (IData)(vlSelf->Suber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin))))));
    bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->A) 
                                 >> 3U))));
    bufp->chgBit(oldp+18,((1U & (~ ((IData)(vlSelf->B) 
                                    >> 3U)))));
    bufp->chgBit(oldp+19,((1U ^ ((((IData)(vlSelf->A) 
                                   ^ (IData)(vlSelf->B)) 
                                  >> 3U) ^ (IData)(vlSelf->Suber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin)))));
}

void VAdder1bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder1bit___024root__trace_cleanup\n"); );
    // Init
    VAdder1bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder1bit___024root*>(voidSelf);
    VAdder1bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
