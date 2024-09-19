// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdderAndSuber4bits__Syms.h"


void VAdderAndSuber4bits___024root__trace_chg_sub_0(VAdderAndSuber4bits___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VAdderAndSuber4bits___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root__trace_chg_top_0\n"); );
    // Init
    VAdderAndSuber4bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAndSuber4bits___024root*>(voidSelf);
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAdderAndSuber4bits___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VAdderAndSuber4bits___024root__trace_chg_sub_0(VAdderAndSuber4bits___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,((((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y) 
                                 << 3U) | (((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y) 
                                            << 2U) 
                                           | (((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y) 
                                               << 1U) 
                                              | (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y))))),4);
        bufp->chgBit(oldp+1,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y));
        bufp->chgBit(oldp+2,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin));
        bufp->chgBit(oldp+3,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y));
        bufp->chgBit(oldp+4,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin));
        bufp->chgBit(oldp+5,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y));
        bufp->chgBit(oldp+6,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin));
        bufp->chgBit(oldp+7,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y));
    }
    bufp->chgCData(oldp+8,(vlSelf->A),4);
    bufp->chgCData(oldp+9,(vlSelf->B),4);
    bufp->chgBit(oldp+10,(vlSelf->Cin));
    bufp->chgCData(oldp+11,(vlSelf->S),4);
    bufp->chgBit(oldp+12,(vlSelf->Cout));
    bufp->chgBit(oldp+13,(vlSelf->OverFlow));
    bufp->chgCData(oldp+14,((((IData)(vlSelf->Cout) 
                              << 4U) | (((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->Cin)))))),5);
    bufp->chgBit(oldp+15,((1U & (IData)(vlSelf->A))));
    bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->A) 
                                 ^ ((IData)(vlSelf->Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->A) 
                                 >> 1U))));
    bufp->chgBit(oldp+18,((1U & (((IData)(vlSelf->A) 
                                  >> 1U) ^ ((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                            ^ (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->A) 
                                 >> 2U))));
    bufp->chgBit(oldp+20,((1U & (((IData)(vlSelf->A) 
                                  >> 2U) ^ ((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                            ^ (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->A) 
                                 >> 3U))));
    bufp->chgBit(oldp+22,((IData)(((((IData)(vlSelf->A) 
                                     >> 3U) ^ (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin)) 
                                   ^ (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y)))));
}

void VAdderAndSuber4bits___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root__trace_cleanup\n"); );
    // Init
    VAdderAndSuber4bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAndSuber4bits___024root*>(voidSelf);
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
