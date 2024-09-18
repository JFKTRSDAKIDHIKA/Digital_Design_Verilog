// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder8bits__Syms.h"


void VAdder8bits___024root__trace_chg_sub_0(VAdder8bits___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VAdder8bits___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root__trace_chg_top_0\n"); );
    // Init
    VAdder8bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder8bits___024root*>(voidSelf);
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAdder8bits___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VAdder8bits___024root__trace_chg_sub_0(VAdder8bits___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin));
        bufp->chgBit(oldp+1,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin));
        bufp->chgBit(oldp+2,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin));
        bufp->chgBit(oldp+3,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin));
        bufp->chgBit(oldp+4,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin));
        bufp->chgBit(oldp+5,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin));
        bufp->chgBit(oldp+6,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin));
    }
    bufp->chgCData(oldp+7,(vlSelf->A),8);
    bufp->chgCData(oldp+8,(vlSelf->B),8);
    bufp->chgCData(oldp+9,(vlSelf->S),8);
    bufp->chgBit(oldp+10,(vlSelf->Cout));
    bufp->chgSData(oldp+11,((((IData)(vlSelf->Cout) 
                              << 8U) | (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                                                << 2U) 
                                                               | ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                                                  << 1U))))))))),9);
    bufp->chgBit(oldp+12,((1U & (IData)(vlSelf->A))));
    bufp->chgBit(oldp+13,((1U & (IData)(vlSelf->B))));
    bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->A) 
                                 ^ (IData)(vlSelf->B)))));
    bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->A) 
                                 >> 1U))));
    bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->B) 
                                 >> 1U))));
    bufp->chgBit(oldp+17,((1U & (((IData)(vlSelf->A) 
                                  >> 1U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                            ^ ((IData)(vlSelf->B) 
                                               >> 1U))))));
    bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->A) 
                                 >> 2U))));
    bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->B) 
                                 >> 2U))));
    bufp->chgBit(oldp+20,((1U & (((IData)(vlSelf->A) 
                                  >> 2U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                            ^ ((IData)(vlSelf->B) 
                                               >> 2U))))));
    bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->A) 
                                 >> 3U))));
    bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->B) 
                                 >> 3U))));
    bufp->chgBit(oldp+23,((1U & (((IData)(vlSelf->A) 
                                  >> 3U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                            ^ ((IData)(vlSelf->B) 
                                               >> 3U))))));
    bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->A) 
                                 >> 4U))));
    bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->B) 
                                 >> 4U))));
    bufp->chgBit(oldp+26,((1U & (((IData)(vlSelf->A) 
                                  >> 4U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                            ^ ((IData)(vlSelf->B) 
                                               >> 4U))))));
    bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->A) 
                                 >> 5U))));
    bufp->chgBit(oldp+28,((1U & ((IData)(vlSelf->B) 
                                 >> 5U))));
    bufp->chgBit(oldp+29,((1U & (((IData)(vlSelf->A) 
                                  >> 5U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                            ^ ((IData)(vlSelf->B) 
                                               >> 5U))))));
    bufp->chgBit(oldp+30,((1U & ((IData)(vlSelf->A) 
                                 >> 6U))));
    bufp->chgBit(oldp+31,((1U & ((IData)(vlSelf->B) 
                                 >> 6U))));
    bufp->chgBit(oldp+32,((1U & (((IData)(vlSelf->A) 
                                  >> 6U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                            ^ ((IData)(vlSelf->B) 
                                               >> 6U))))));
    bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->A) 
                                 >> 7U))));
    bufp->chgBit(oldp+34,((1U & ((IData)(vlSelf->B) 
                                 >> 7U))));
    bufp->chgBit(oldp+35,((IData)(((((IData)(vlSelf->A) 
                                     >> 7U) ^ (IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin)) 
                                   ^ ((IData)(vlSelf->B) 
                                      >> 7U)))));
}

void VAdder8bits___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root__trace_cleanup\n"); );
    // Init
    VAdder8bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder8bits___024root*>(voidSelf);
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
