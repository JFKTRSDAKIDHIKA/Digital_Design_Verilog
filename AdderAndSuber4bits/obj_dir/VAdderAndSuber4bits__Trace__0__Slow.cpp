// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdderAndSuber4bits__Syms.h"


VL_ATTR_COLD void VAdderAndSuber4bits___024root__trace_init_sub__TOP__0(VAdderAndSuber4bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+9,"A", false,-1, 3,0);
    tracep->declBus(c+10,"B", false,-1, 3,0);
    tracep->declBit(c+11,"Cin", false,-1);
    tracep->declBus(c+12,"S", false,-1, 3,0);
    tracep->declBit(c+13,"Cout", false,-1);
    tracep->declBit(c+14,"OverFlow", false,-1);
    tracep->pushNamePrefix("AdderAndSuber4bits ");
    tracep->declBus(c+9,"A", false,-1, 3,0);
    tracep->declBus(c+10,"B", false,-1, 3,0);
    tracep->declBus(c+1,"InvertB", false,-1, 3,0);
    tracep->declBit(c+11,"Cin", false,-1);
    tracep->declBus(c+15,"C", false,-1, 4,0);
    tracep->declBus(c+12,"S", false,-1, 3,0);
    tracep->declBit(c+13,"Cout", false,-1);
    tracep->declBit(c+14,"OverFlow", false,-1);
    tracep->pushNamePrefix("adders[0] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+16,"X", false,-1);
    tracep->declBit(c+2,"Y", false,-1);
    tracep->declBit(c+11,"Cin", false,-1);
    tracep->declBit(c+3,"Cout", false,-1);
    tracep->declBit(c+17,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[1] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+18,"X", false,-1);
    tracep->declBit(c+4,"Y", false,-1);
    tracep->declBit(c+3,"Cin", false,-1);
    tracep->declBit(c+5,"Cout", false,-1);
    tracep->declBit(c+19,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[2] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+20,"X", false,-1);
    tracep->declBit(c+6,"Y", false,-1);
    tracep->declBit(c+5,"Cin", false,-1);
    tracep->declBit(c+7,"Cout", false,-1);
    tracep->declBit(c+21,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[3] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+22,"X", false,-1);
    tracep->declBit(c+8,"Y", false,-1);
    tracep->declBit(c+7,"Cin", false,-1);
    tracep->declBit(c+13,"Cout", false,-1);
    tracep->declBit(c+23,"Sum", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VAdderAndSuber4bits___024root__trace_init_top(VAdderAndSuber4bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root__trace_init_top\n"); );
    // Body
    VAdderAndSuber4bits___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAdderAndSuber4bits___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdderAndSuber4bits___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdderAndSuber4bits___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAdderAndSuber4bits___024root__trace_register(VAdderAndSuber4bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAdderAndSuber4bits___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAdderAndSuber4bits___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAdderAndSuber4bits___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAdderAndSuber4bits___024root__trace_full_sub_0(VAdderAndSuber4bits___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VAdderAndSuber4bits___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root__trace_full_top_0\n"); );
    // Init
    VAdderAndSuber4bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAndSuber4bits___024root*>(voidSelf);
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAdderAndSuber4bits___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAdderAndSuber4bits___024root__trace_full_sub_0(VAdderAndSuber4bits___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y) 
                              << 3U) | (((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y))))),4);
    bufp->fullBit(oldp+2,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y));
    bufp->fullBit(oldp+3,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin));
    bufp->fullBit(oldp+4,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y));
    bufp->fullBit(oldp+5,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin));
    bufp->fullBit(oldp+6,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y));
    bufp->fullBit(oldp+7,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin));
    bufp->fullBit(oldp+8,(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y));
    bufp->fullCData(oldp+9,(vlSelf->A),4);
    bufp->fullCData(oldp+10,(vlSelf->B),4);
    bufp->fullBit(oldp+11,(vlSelf->Cin));
    bufp->fullCData(oldp+12,(vlSelf->S),4);
    bufp->fullBit(oldp+13,(vlSelf->Cout));
    bufp->fullBit(oldp+14,(vlSelf->OverFlow));
    bufp->fullCData(oldp+15,((((IData)(vlSelf->Cout) 
                               << 4U) | (((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                          << 3U) | 
                                         (((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                           << 2U) | 
                                          (((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                            << 1U) 
                                           | (IData)(vlSelf->Cin)))))),5);
    bufp->fullBit(oldp+16,((1U & (IData)(vlSelf->A))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->A) 
                                  ^ ((IData)(vlSelf->Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->A) 
                                  >> 1U))));
    bufp->fullBit(oldp+19,((1U & (((IData)(vlSelf->A) 
                                   >> 1U) ^ ((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                             ^ (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->A) 
                                  >> 2U))));
    bufp->fullBit(oldp+21,((1U & (((IData)(vlSelf->A) 
                                   >> 2U) ^ ((IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                             ^ (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->A) 
                                  >> 3U))));
    bufp->fullBit(oldp+23,((IData)(((((IData)(vlSelf->A) 
                                      >> 3U) ^ (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin)) 
                                    ^ (IData)(vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y)))));
}
