// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdderAndSuber32bits__Syms.h"


void VAdderAndSuber32bits___024root__trace_chg_sub_0(VAdderAndSuber32bits___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VAdderAndSuber32bits___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber32bits___024root__trace_chg_top_0\n"); );
    // Init
    VAdderAndSuber32bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAndSuber32bits___024root*>(voidSelf);
    VAdderAndSuber32bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAdderAndSuber32bits___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VAdderAndSuber32bits___024root__trace_chg_sub_0(VAdderAndSuber32bits___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber32bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber32bits___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,((((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Y) 
                                 << 0x1fU) | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Y) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Y) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Y) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Y) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Y) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Y) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Y) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Y) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Y) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Y) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Y) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Y) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Y) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Y) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Y) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Y) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Y) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Y) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Y) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Y) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Y) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Y) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Y) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Y) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Y) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Y) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Y) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+1,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y));
        bufp->chgBit(oldp+2,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin));
        bufp->chgBit(oldp+3,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Y));
        bufp->chgBit(oldp+4,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin));
        bufp->chgBit(oldp+5,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin));
        bufp->chgBit(oldp+6,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Y));
        bufp->chgBit(oldp+7,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin));
        bufp->chgBit(oldp+8,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Y));
        bufp->chgBit(oldp+9,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin));
        bufp->chgBit(oldp+10,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Y));
        bufp->chgBit(oldp+11,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin));
        bufp->chgBit(oldp+12,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Y));
        bufp->chgBit(oldp+13,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin));
        bufp->chgBit(oldp+14,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Y));
        bufp->chgBit(oldp+15,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin));
        bufp->chgBit(oldp+16,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Y));
        bufp->chgBit(oldp+17,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin));
        bufp->chgBit(oldp+18,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Y));
        bufp->chgBit(oldp+19,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin));
        bufp->chgBit(oldp+20,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Y));
        bufp->chgBit(oldp+21,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin));
        bufp->chgBit(oldp+22,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Y));
        bufp->chgBit(oldp+23,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin));
        bufp->chgBit(oldp+24,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y));
        bufp->chgBit(oldp+25,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin));
        bufp->chgBit(oldp+26,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Y));
        bufp->chgBit(oldp+27,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin));
        bufp->chgBit(oldp+28,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Y));
        bufp->chgBit(oldp+29,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin));
        bufp->chgBit(oldp+30,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Y));
        bufp->chgBit(oldp+31,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin));
        bufp->chgBit(oldp+32,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Y));
        bufp->chgBit(oldp+33,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin));
        bufp->chgBit(oldp+34,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Y));
        bufp->chgBit(oldp+35,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin));
        bufp->chgBit(oldp+36,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Y));
        bufp->chgBit(oldp+37,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin));
        bufp->chgBit(oldp+38,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Y));
        bufp->chgBit(oldp+39,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin));
        bufp->chgBit(oldp+40,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Y));
        bufp->chgBit(oldp+41,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin));
        bufp->chgBit(oldp+42,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Y));
        bufp->chgBit(oldp+43,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin));
        bufp->chgBit(oldp+44,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Y));
        bufp->chgBit(oldp+45,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin));
        bufp->chgBit(oldp+46,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y));
        bufp->chgBit(oldp+47,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin));
        bufp->chgBit(oldp+48,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Y));
        bufp->chgBit(oldp+49,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin));
        bufp->chgBit(oldp+50,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Y));
        bufp->chgBit(oldp+51,(vlSelf->AdderAndSuber32bits__DOT____Vcellout__adders__BRA__31__KET____DOT__u__Sum));
        bufp->chgBit(oldp+52,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y));
        bufp->chgBit(oldp+53,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin));
        bufp->chgBit(oldp+54,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Y));
        bufp->chgBit(oldp+55,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin));
        bufp->chgBit(oldp+56,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Y));
        bufp->chgBit(oldp+57,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin));
        bufp->chgBit(oldp+58,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Y));
        bufp->chgBit(oldp+59,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin));
        bufp->chgBit(oldp+60,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Y));
        bufp->chgBit(oldp+61,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin));
        bufp->chgBit(oldp+62,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Y));
        bufp->chgBit(oldp+63,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin));
        bufp->chgBit(oldp+64,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Y));
    }
    bufp->chgIData(oldp+65,(vlSelf->A),32);
    bufp->chgIData(oldp+66,(vlSelf->B),32);
    bufp->chgBit(oldp+67,(vlSelf->Cin));
    bufp->chgIData(oldp+68,(vlSelf->S),32);
    bufp->chgBit(oldp+69,(vlSelf->Cout));
    bufp->chgBit(oldp+70,(vlSelf->overflow));
    bufp->chgQData(oldp+71,((((QData)((IData)(vlSelf->Cout)) 
                              << 0x20U) | (QData)((IData)(
                                                          (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin) 
                                                            << 0x1fU) 
                                                           | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin) 
                                                               << 0x1eU) 
                                                              | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin) 
                                                                              << 0x19U) 
                                                                             | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->Cin)))))))))))))))))))))))))))))))))))),33);
    bufp->chgBit(oldp+73,((1U & vlSelf->A)));
    bufp->chgBit(oldp+74,((1U & (vlSelf->A ^ ((IData)(vlSelf->Cin) 
                                              ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+75,((1U & (vlSelf->A >> 0xaU))));
    bufp->chgBit(oldp+76,((1U & ((vlSelf->A >> 0xaU) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+77,((1U & (vlSelf->A >> 0xbU))));
    bufp->chgBit(oldp+78,((1U & ((vlSelf->A >> 0xbU) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+79,((1U & (vlSelf->A >> 0xcU))));
    bufp->chgBit(oldp+80,((1U & ((vlSelf->A >> 0xcU) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+81,((1U & (vlSelf->A >> 0xdU))));
    bufp->chgBit(oldp+82,((1U & ((vlSelf->A >> 0xdU) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+83,((1U & (vlSelf->A >> 0xeU))));
    bufp->chgBit(oldp+84,((1U & ((vlSelf->A >> 0xeU) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+85,((1U & (vlSelf->A >> 0xfU))));
    bufp->chgBit(oldp+86,((1U & ((vlSelf->A >> 0xfU) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+87,((1U & (vlSelf->A >> 0x10U))));
    bufp->chgBit(oldp+88,((1U & ((vlSelf->A >> 0x10U) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+89,((1U & (vlSelf->A >> 0x11U))));
    bufp->chgBit(oldp+90,((1U & ((vlSelf->A >> 0x11U) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+91,((1U & (vlSelf->A >> 0x12U))));
    bufp->chgBit(oldp+92,((1U & ((vlSelf->A >> 0x12U) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+93,((1U & (vlSelf->A >> 0x13U))));
    bufp->chgBit(oldp+94,((1U & ((vlSelf->A >> 0x13U) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+95,((1U & (vlSelf->A >> 1U))));
    bufp->chgBit(oldp+96,((1U & ((vlSelf->A >> 1U) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+97,((1U & (vlSelf->A >> 0x14U))));
    bufp->chgBit(oldp+98,((1U & ((vlSelf->A >> 0x14U) 
                                 ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin) 
                                    ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+99,((1U & (vlSelf->A >> 0x15U))));
    bufp->chgBit(oldp+100,((1U & ((vlSelf->A >> 0x15U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+101,((1U & (vlSelf->A >> 0x16U))));
    bufp->chgBit(oldp+102,((1U & ((vlSelf->A >> 0x16U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+103,((1U & (vlSelf->A >> 0x17U))));
    bufp->chgBit(oldp+104,((1U & ((vlSelf->A >> 0x17U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+105,((1U & (vlSelf->A >> 0x18U))));
    bufp->chgBit(oldp+106,((1U & ((vlSelf->A >> 0x18U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+107,((1U & (vlSelf->A >> 0x19U))));
    bufp->chgBit(oldp+108,((1U & ((vlSelf->A >> 0x19U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+109,((1U & (vlSelf->A >> 0x1aU))));
    bufp->chgBit(oldp+110,((1U & ((vlSelf->A >> 0x1aU) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+111,((1U & (vlSelf->A >> 0x1bU))));
    bufp->chgBit(oldp+112,((1U & ((vlSelf->A >> 0x1bU) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+113,((1U & (vlSelf->A >> 0x1cU))));
    bufp->chgBit(oldp+114,((1U & ((vlSelf->A >> 0x1cU) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+115,((1U & (vlSelf->A >> 0x1dU))));
    bufp->chgBit(oldp+116,((1U & ((vlSelf->A >> 0x1dU) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+117,((1U & (vlSelf->A >> 2U))));
    bufp->chgBit(oldp+118,((1U & ((vlSelf->A >> 2U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+119,((1U & (vlSelf->A >> 0x1eU))));
    bufp->chgBit(oldp+120,((1U & ((vlSelf->A >> 0x1eU) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+121,((vlSelf->A >> 0x1fU)));
    bufp->chgBit(oldp+122,((1U & (vlSelf->A >> 3U))));
    bufp->chgBit(oldp+123,((1U & ((vlSelf->A >> 3U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+124,((1U & (vlSelf->A >> 4U))));
    bufp->chgBit(oldp+125,((1U & ((vlSelf->A >> 4U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+126,((1U & (vlSelf->A >> 5U))));
    bufp->chgBit(oldp+127,((1U & ((vlSelf->A >> 5U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+128,((1U & (vlSelf->A >> 6U))));
    bufp->chgBit(oldp+129,((1U & ((vlSelf->A >> 6U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+130,((1U & (vlSelf->A >> 7U))));
    bufp->chgBit(oldp+131,((1U & ((vlSelf->A >> 7U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+132,((1U & (vlSelf->A >> 8U))));
    bufp->chgBit(oldp+133,((1U & ((vlSelf->A >> 8U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Y))))));
    bufp->chgBit(oldp+134,((1U & (vlSelf->A >> 9U))));
    bufp->chgBit(oldp+135,((1U & ((vlSelf->A >> 9U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Y))))));
}

void VAdderAndSuber32bits___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber32bits___024root__trace_cleanup\n"); );
    // Init
    VAdderAndSuber32bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAndSuber32bits___024root*>(voidSelf);
    VAdderAndSuber32bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
