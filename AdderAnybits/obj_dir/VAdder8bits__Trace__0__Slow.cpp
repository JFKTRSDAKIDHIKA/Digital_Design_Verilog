// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder8bits__Syms.h"


VL_ATTR_COLD void VAdder8bits___024root__trace_init_sub__TOP__0(VAdder8bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+8,"A", false,-1, 7,0);
    tracep->declBus(c+9,"B", false,-1, 7,0);
    tracep->declBus(c+10,"S", false,-1, 7,0);
    tracep->declBit(c+11,"Cout", false,-1);
    tracep->pushNamePrefix("Adder8bits ");
    tracep->declBus(c+8,"A", false,-1, 7,0);
    tracep->declBus(c+9,"B", false,-1, 7,0);
    tracep->declBus(c+12,"C", false,-1, 8,0);
    tracep->declBus(c+10,"S", false,-1, 7,0);
    tracep->declBit(c+11,"Cout", false,-1);
    tracep->pushNamePrefix("adders[0] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+13,"X", false,-1);
    tracep->declBit(c+14,"Y", false,-1);
    tracep->declBit(c+37,"Cin", false,-1);
    tracep->declBit(c+1,"Cout", false,-1);
    tracep->declBit(c+15,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[1] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+16,"X", false,-1);
    tracep->declBit(c+17,"Y", false,-1);
    tracep->declBit(c+1,"Cin", false,-1);
    tracep->declBit(c+2,"Cout", false,-1);
    tracep->declBit(c+18,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[2] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+19,"X", false,-1);
    tracep->declBit(c+20,"Y", false,-1);
    tracep->declBit(c+2,"Cin", false,-1);
    tracep->declBit(c+3,"Cout", false,-1);
    tracep->declBit(c+21,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[3] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+22,"X", false,-1);
    tracep->declBit(c+23,"Y", false,-1);
    tracep->declBit(c+3,"Cin", false,-1);
    tracep->declBit(c+4,"Cout", false,-1);
    tracep->declBit(c+24,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[4] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+25,"X", false,-1);
    tracep->declBit(c+26,"Y", false,-1);
    tracep->declBit(c+4,"Cin", false,-1);
    tracep->declBit(c+5,"Cout", false,-1);
    tracep->declBit(c+27,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[5] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+28,"X", false,-1);
    tracep->declBit(c+29,"Y", false,-1);
    tracep->declBit(c+5,"Cin", false,-1);
    tracep->declBit(c+6,"Cout", false,-1);
    tracep->declBit(c+30,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[6] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+31,"X", false,-1);
    tracep->declBit(c+32,"Y", false,-1);
    tracep->declBit(c+6,"Cin", false,-1);
    tracep->declBit(c+7,"Cout", false,-1);
    tracep->declBit(c+33,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[7] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+34,"X", false,-1);
    tracep->declBit(c+35,"Y", false,-1);
    tracep->declBit(c+7,"Cin", false,-1);
    tracep->declBit(c+11,"Cout", false,-1);
    tracep->declBit(c+36,"Sum", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VAdder8bits___024root__trace_init_top(VAdder8bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root__trace_init_top\n"); );
    // Body
    VAdder8bits___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAdder8bits___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdder8bits___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdder8bits___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAdder8bits___024root__trace_register(VAdder8bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAdder8bits___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAdder8bits___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAdder8bits___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAdder8bits___024root__trace_full_sub_0(VAdder8bits___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VAdder8bits___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root__trace_full_top_0\n"); );
    // Init
    VAdder8bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder8bits___024root*>(voidSelf);
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAdder8bits___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAdder8bits___024root__trace_full_sub_0(VAdder8bits___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin));
    bufp->fullBit(oldp+2,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin));
    bufp->fullBit(oldp+3,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin));
    bufp->fullBit(oldp+4,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin));
    bufp->fullBit(oldp+5,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin));
    bufp->fullBit(oldp+6,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin));
    bufp->fullBit(oldp+7,(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin));
    bufp->fullCData(oldp+8,(vlSelf->A),8);
    bufp->fullCData(oldp+9,(vlSelf->B),8);
    bufp->fullCData(oldp+10,(vlSelf->S),8);
    bufp->fullBit(oldp+11,(vlSelf->Cout));
    bufp->fullSData(oldp+12,((((IData)(vlSelf->Cout) 
                               << 8U) | (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin) 
                                          << 7U) | 
                                         (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                           << 6U) | 
                                          (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                            << 5U) 
                                           | (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                               << 4U) 
                                              | (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                                     << 2U) 
                                                    | ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                                       << 1U))))))))),9);
    bufp->fullBit(oldp+13,((1U & (IData)(vlSelf->A))));
    bufp->fullBit(oldp+14,((1U & (IData)(vlSelf->B))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->A) 
                                  ^ (IData)(vlSelf->B)))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->A) 
                                  >> 1U))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->B) 
                                  >> 1U))));
    bufp->fullBit(oldp+18,((1U & (((IData)(vlSelf->A) 
                                   >> 1U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                             ^ ((IData)(vlSelf->B) 
                                                >> 1U))))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->A) 
                                  >> 2U))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->B) 
                                  >> 2U))));
    bufp->fullBit(oldp+21,((1U & (((IData)(vlSelf->A) 
                                   >> 2U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                             ^ ((IData)(vlSelf->B) 
                                                >> 2U))))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->A) 
                                  >> 3U))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->B) 
                                  >> 3U))));
    bufp->fullBit(oldp+24,((1U & (((IData)(vlSelf->A) 
                                   >> 3U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                             ^ ((IData)(vlSelf->B) 
                                                >> 3U))))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->A) 
                                  >> 4U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->B) 
                                  >> 4U))));
    bufp->fullBit(oldp+27,((1U & (((IData)(vlSelf->A) 
                                   >> 4U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                             ^ ((IData)(vlSelf->B) 
                                                >> 4U))))));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelf->A) 
                                  >> 5U))));
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSelf->B) 
                                  >> 5U))));
    bufp->fullBit(oldp+30,((1U & (((IData)(vlSelf->A) 
                                   >> 5U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                             ^ ((IData)(vlSelf->B) 
                                                >> 5U))))));
    bufp->fullBit(oldp+31,((1U & ((IData)(vlSelf->A) 
                                  >> 6U))));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelf->B) 
                                  >> 6U))));
    bufp->fullBit(oldp+33,((1U & (((IData)(vlSelf->A) 
                                   >> 6U) ^ ((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                             ^ ((IData)(vlSelf->B) 
                                                >> 6U))))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->A) 
                                  >> 7U))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelf->B) 
                                  >> 7U))));
    bufp->fullBit(oldp+36,((IData)(((((IData)(vlSelf->A) 
                                      >> 7U) ^ (IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin)) 
                                    ^ ((IData)(vlSelf->B) 
                                       >> 7U)))));
    bufp->fullBit(oldp+37,(0U));
}
