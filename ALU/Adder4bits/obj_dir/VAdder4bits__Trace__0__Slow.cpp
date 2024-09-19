// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder4bits__Syms.h"


VL_ATTR_COLD void VAdder4bits___024root__trace_init_sub__TOP__0(VAdder4bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder4bits___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4,"A", false,-1, 3,0);
    tracep->declBus(c+5,"B", false,-1, 3,0);
    tracep->declBus(c+6,"S", false,-1, 3,0);
    tracep->declBit(c+7,"Cout", false,-1);
    tracep->pushNamePrefix("Adder4bits ");
    tracep->declBus(c+4,"A", false,-1, 3,0);
    tracep->declBus(c+5,"B", false,-1, 3,0);
    tracep->declBus(c+8,"C", false,-1, 4,0);
    tracep->declBus(c+6,"S", false,-1, 3,0);
    tracep->declBit(c+7,"Cout", false,-1);
    tracep->pushNamePrefix("adders[0] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+9,"X", false,-1);
    tracep->declBit(c+10,"Y", false,-1);
    tracep->declBit(c+21,"Cin", false,-1);
    tracep->declBit(c+1,"Cout", false,-1);
    tracep->declBit(c+11,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[1] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+12,"X", false,-1);
    tracep->declBit(c+13,"Y", false,-1);
    tracep->declBit(c+1,"Cin", false,-1);
    tracep->declBit(c+2,"Cout", false,-1);
    tracep->declBit(c+14,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[2] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+15,"X", false,-1);
    tracep->declBit(c+16,"Y", false,-1);
    tracep->declBit(c+2,"Cin", false,-1);
    tracep->declBit(c+3,"Cout", false,-1);
    tracep->declBit(c+17,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[3] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+18,"X", false,-1);
    tracep->declBit(c+19,"Y", false,-1);
    tracep->declBit(c+3,"Cin", false,-1);
    tracep->declBit(c+7,"Cout", false,-1);
    tracep->declBit(c+20,"Sum", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VAdder4bits___024root__trace_init_top(VAdder4bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder4bits___024root__trace_init_top\n"); );
    // Body
    VAdder4bits___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAdder4bits___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdder4bits___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdder4bits___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAdder4bits___024root__trace_register(VAdder4bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder4bits___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAdder4bits___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAdder4bits___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAdder4bits___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAdder4bits___024root__trace_full_sub_0(VAdder4bits___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VAdder4bits___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder4bits___024root__trace_full_top_0\n"); );
    // Init
    VAdder4bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder4bits___024root*>(voidSelf);
    VAdder4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAdder4bits___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAdder4bits___024root__trace_full_sub_0(VAdder4bits___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder4bits___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Adder4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin));
    bufp->fullBit(oldp+2,(vlSelf->Adder4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin));
    bufp->fullBit(oldp+3,(vlSelf->Adder4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin));
    bufp->fullCData(oldp+4,(vlSelf->A),4);
    bufp->fullCData(oldp+5,(vlSelf->B),4);
    bufp->fullCData(oldp+6,(vlSelf->S),4);
    bufp->fullBit(oldp+7,(vlSelf->Cout));
    bufp->fullCData(oldp+8,((((IData)(vlSelf->Cout) 
                              << 4U) | (((IData)(vlSelf->Adder4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->Adder4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->Adder4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                                      << 1U))))),5);
    bufp->fullBit(oldp+9,((1U & (IData)(vlSelf->A))));
    bufp->fullBit(oldp+10,((1U & (IData)(vlSelf->B))));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->A) 
                                  ^ (IData)(vlSelf->B)))));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->A) 
                                  >> 1U))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->B) 
                                  >> 1U))));
    bufp->fullBit(oldp+14,((1U & (((IData)(vlSelf->A) 
                                   >> 1U) ^ ((IData)(vlSelf->Adder4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                             ^ ((IData)(vlSelf->B) 
                                                >> 1U))))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->A) 
                                  >> 2U))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->B) 
                                  >> 2U))));
    bufp->fullBit(oldp+17,((1U & (((IData)(vlSelf->A) 
                                   >> 2U) ^ ((IData)(vlSelf->Adder4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                             ^ ((IData)(vlSelf->B) 
                                                >> 2U))))));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->A) 
                                  >> 3U))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->B) 
                                  >> 3U))));
    bufp->fullBit(oldp+20,((IData)(((((IData)(vlSelf->A) 
                                      >> 3U) ^ (IData)(vlSelf->Adder4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin)) 
                                    ^ ((IData)(vlSelf->B) 
                                       >> 3U)))));
    bufp->fullBit(oldp+21,(0U));
}
