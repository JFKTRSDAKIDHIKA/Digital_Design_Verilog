// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdderAnybits__Syms.h"


void VAdderAnybits___024root__trace_chg_sub_0(VAdderAnybits___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VAdderAnybits___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root__trace_chg_top_0\n"); );
    // Init
    VAdderAnybits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAnybits___024root*>(voidSelf);
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAdderAnybits___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VAdderAnybits___024root__trace_chg_sub_0(VAdderAnybits___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin));
        bufp->chgBit(oldp+1,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin));
        bufp->chgBit(oldp+2,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin));
        bufp->chgBit(oldp+3,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin));
        bufp->chgBit(oldp+4,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin));
        bufp->chgBit(oldp+5,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin));
        bufp->chgBit(oldp+6,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin));
        bufp->chgBit(oldp+7,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin));
        bufp->chgBit(oldp+8,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin));
        bufp->chgBit(oldp+9,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin));
        bufp->chgBit(oldp+10,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin));
        bufp->chgBit(oldp+11,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin));
        bufp->chgBit(oldp+12,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin));
        bufp->chgBit(oldp+13,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin));
        bufp->chgBit(oldp+14,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin));
        bufp->chgBit(oldp+15,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin));
        bufp->chgBit(oldp+16,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin));
        bufp->chgBit(oldp+17,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin));
        bufp->chgBit(oldp+18,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin));
        bufp->chgBit(oldp+19,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin));
        bufp->chgBit(oldp+20,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin));
        bufp->chgBit(oldp+21,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin));
        bufp->chgBit(oldp+22,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin));
        bufp->chgBit(oldp+23,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin));
        bufp->chgBit(oldp+24,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin));
        bufp->chgBit(oldp+25,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin));
        bufp->chgBit(oldp+26,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin));
        bufp->chgBit(oldp+27,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin));
        bufp->chgBit(oldp+28,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin));
        bufp->chgBit(oldp+29,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin));
        bufp->chgBit(oldp+30,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin));
    }
    bufp->chgIData(oldp+31,(vlSelf->A),32);
    bufp->chgIData(oldp+32,(vlSelf->B),32);
    bufp->chgIData(oldp+33,(vlSelf->S),32);
    bufp->chgBit(oldp+34,(vlSelf->Cout));
    bufp->chgQData(oldp+35,((((QData)((IData)(vlSelf->Cout)) 
                              << 0x20U) | (QData)((IData)(
                                                          (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin) 
                                                            << 0x1fU) 
                                                           | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin) 
                                                               << 0x1eU) 
                                                              | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin) 
                                                                              << 0x19U) 
                                                                             | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                                                                << 1U))))))))))))))))))))))))))))))))))),33);
    bufp->chgBit(oldp+37,((1U & vlSelf->A)));
    bufp->chgBit(oldp+38,((1U & vlSelf->B)));
    bufp->chgBit(oldp+39,((1U & (vlSelf->A ^ vlSelf->B))));
    bufp->chgBit(oldp+40,((1U & (vlSelf->A >> 0xaU))));
    bufp->chgBit(oldp+41,((1U & (vlSelf->B >> 0xaU))));
    bufp->chgBit(oldp+42,((1U & ((vlSelf->A >> 0xaU) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0xaU))))));
    bufp->chgBit(oldp+43,((1U & (vlSelf->A >> 0xbU))));
    bufp->chgBit(oldp+44,((1U & (vlSelf->B >> 0xbU))));
    bufp->chgBit(oldp+45,((1U & ((vlSelf->A >> 0xbU) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0xbU))))));
    bufp->chgBit(oldp+46,((1U & (vlSelf->A >> 0xcU))));
    bufp->chgBit(oldp+47,((1U & (vlSelf->B >> 0xcU))));
    bufp->chgBit(oldp+48,((1U & ((vlSelf->A >> 0xcU) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0xcU))))));
    bufp->chgBit(oldp+49,((1U & (vlSelf->A >> 0xdU))));
    bufp->chgBit(oldp+50,((1U & (vlSelf->B >> 0xdU))));
    bufp->chgBit(oldp+51,((1U & ((vlSelf->A >> 0xdU) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0xdU))))));
    bufp->chgBit(oldp+52,((1U & (vlSelf->A >> 0xeU))));
    bufp->chgBit(oldp+53,((1U & (vlSelf->B >> 0xeU))));
    bufp->chgBit(oldp+54,((1U & ((vlSelf->A >> 0xeU) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0xeU))))));
    bufp->chgBit(oldp+55,((1U & (vlSelf->A >> 0xfU))));
    bufp->chgBit(oldp+56,((1U & (vlSelf->B >> 0xfU))));
    bufp->chgBit(oldp+57,((1U & ((vlSelf->A >> 0xfU) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0xfU))))));
    bufp->chgBit(oldp+58,((1U & (vlSelf->A >> 0x10U))));
    bufp->chgBit(oldp+59,((1U & (vlSelf->B >> 0x10U))));
    bufp->chgBit(oldp+60,((1U & ((vlSelf->A >> 0x10U) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x10U))))));
    bufp->chgBit(oldp+61,((1U & (vlSelf->A >> 0x11U))));
    bufp->chgBit(oldp+62,((1U & (vlSelf->B >> 0x11U))));
    bufp->chgBit(oldp+63,((1U & ((vlSelf->A >> 0x11U) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x11U))))));
    bufp->chgBit(oldp+64,((1U & (vlSelf->A >> 0x12U))));
    bufp->chgBit(oldp+65,((1U & (vlSelf->B >> 0x12U))));
    bufp->chgBit(oldp+66,((1U & ((vlSelf->A >> 0x12U) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x12U))))));
    bufp->chgBit(oldp+67,((1U & (vlSelf->A >> 0x13U))));
    bufp->chgBit(oldp+68,((1U & (vlSelf->B >> 0x13U))));
    bufp->chgBit(oldp+69,((1U & ((vlSelf->A >> 0x13U) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x13U))))));
    bufp->chgBit(oldp+70,((1U & (vlSelf->A >> 1U))));
    bufp->chgBit(oldp+71,((1U & (vlSelf->B >> 1U))));
    bufp->chgBit(oldp+72,((1U & ((vlSelf->A >> 1U) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 1U))))));
    bufp->chgBit(oldp+73,((1U & (vlSelf->A >> 0x14U))));
    bufp->chgBit(oldp+74,((1U & (vlSelf->B >> 0x14U))));
    bufp->chgBit(oldp+75,((1U & ((vlSelf->A >> 0x14U) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x14U))))));
    bufp->chgBit(oldp+76,((1U & (vlSelf->A >> 0x15U))));
    bufp->chgBit(oldp+77,((1U & (vlSelf->B >> 0x15U))));
    bufp->chgBit(oldp+78,((1U & ((vlSelf->A >> 0x15U) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x15U))))));
    bufp->chgBit(oldp+79,((1U & (vlSelf->A >> 0x16U))));
    bufp->chgBit(oldp+80,((1U & (vlSelf->B >> 0x16U))));
    bufp->chgBit(oldp+81,((1U & ((vlSelf->A >> 0x16U) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x16U))))));
    bufp->chgBit(oldp+82,((1U & (vlSelf->A >> 0x17U))));
    bufp->chgBit(oldp+83,((1U & (vlSelf->B >> 0x17U))));
    bufp->chgBit(oldp+84,((1U & ((vlSelf->A >> 0x17U) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x17U))))));
    bufp->chgBit(oldp+85,((1U & (vlSelf->A >> 0x18U))));
    bufp->chgBit(oldp+86,((1U & (vlSelf->B >> 0x18U))));
    bufp->chgBit(oldp+87,((1U & ((vlSelf->A >> 0x18U) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x18U))))));
    bufp->chgBit(oldp+88,((1U & (vlSelf->A >> 0x19U))));
    bufp->chgBit(oldp+89,((1U & (vlSelf->B >> 0x19U))));
    bufp->chgBit(oldp+90,((1U & ((vlSelf->A >> 0x19U) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x19U))))));
    bufp->chgBit(oldp+91,((1U & (vlSelf->A >> 0x1aU))));
    bufp->chgBit(oldp+92,((1U & (vlSelf->B >> 0x1aU))));
    bufp->chgBit(oldp+93,((1U & ((vlSelf->A >> 0x1aU) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x1aU))))));
    bufp->chgBit(oldp+94,((1U & (vlSelf->A >> 0x1bU))));
    bufp->chgBit(oldp+95,((1U & (vlSelf->B >> 0x1bU))));
    bufp->chgBit(oldp+96,((1U & ((vlSelf->A >> 0x1bU) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x1bU))))));
    bufp->chgBit(oldp+97,((1U & (vlSelf->A >> 0x1cU))));
    bufp->chgBit(oldp+98,((1U & (vlSelf->B >> 0x1cU))));
    bufp->chgBit(oldp+99,((1U & ((vlSelf->A >> 0x1cU) 
                                 ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin) 
                                    ^ (vlSelf->B >> 0x1cU))))));
    bufp->chgBit(oldp+100,((1U & (vlSelf->A >> 0x1dU))));
    bufp->chgBit(oldp+101,((1U & (vlSelf->B >> 0x1dU))));
    bufp->chgBit(oldp+102,((1U & ((vlSelf->A >> 0x1dU) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x1dU))))));
    bufp->chgBit(oldp+103,((1U & (vlSelf->A >> 2U))));
    bufp->chgBit(oldp+104,((1U & (vlSelf->B >> 2U))));
    bufp->chgBit(oldp+105,((1U & ((vlSelf->A >> 2U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 2U))))));
    bufp->chgBit(oldp+106,((1U & (vlSelf->A >> 0x1eU))));
    bufp->chgBit(oldp+107,((1U & (vlSelf->B >> 0x1eU))));
    bufp->chgBit(oldp+108,((1U & ((vlSelf->A >> 0x1eU) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x1eU))))));
    bufp->chgBit(oldp+109,((vlSelf->A >> 0x1fU)));
    bufp->chgBit(oldp+110,((vlSelf->B >> 0x1fU)));
    bufp->chgBit(oldp+111,((((vlSelf->A >> 0x1fU) ^ (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin)) 
                            ^ (vlSelf->B >> 0x1fU))));
    bufp->chgBit(oldp+112,((1U & (vlSelf->A >> 3U))));
    bufp->chgBit(oldp+113,((1U & (vlSelf->B >> 3U))));
    bufp->chgBit(oldp+114,((1U & ((vlSelf->A >> 3U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 3U))))));
    bufp->chgBit(oldp+115,((1U & (vlSelf->A >> 4U))));
    bufp->chgBit(oldp+116,((1U & (vlSelf->B >> 4U))));
    bufp->chgBit(oldp+117,((1U & ((vlSelf->A >> 4U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 4U))))));
    bufp->chgBit(oldp+118,((1U & (vlSelf->A >> 5U))));
    bufp->chgBit(oldp+119,((1U & (vlSelf->B >> 5U))));
    bufp->chgBit(oldp+120,((1U & ((vlSelf->A >> 5U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 5U))))));
    bufp->chgBit(oldp+121,((1U & (vlSelf->A >> 6U))));
    bufp->chgBit(oldp+122,((1U & (vlSelf->B >> 6U))));
    bufp->chgBit(oldp+123,((1U & ((vlSelf->A >> 6U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 6U))))));
    bufp->chgBit(oldp+124,((1U & (vlSelf->A >> 7U))));
    bufp->chgBit(oldp+125,((1U & (vlSelf->B >> 7U))));
    bufp->chgBit(oldp+126,((1U & ((vlSelf->A >> 7U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 7U))))));
    bufp->chgBit(oldp+127,((1U & (vlSelf->A >> 8U))));
    bufp->chgBit(oldp+128,((1U & (vlSelf->B >> 8U))));
    bufp->chgBit(oldp+129,((1U & ((vlSelf->A >> 8U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 8U))))));
    bufp->chgBit(oldp+130,((1U & (vlSelf->A >> 9U))));
    bufp->chgBit(oldp+131,((1U & (vlSelf->B >> 9U))));
    bufp->chgBit(oldp+132,((1U & ((vlSelf->A >> 9U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 9U))))));
}

void VAdderAnybits___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root__trace_cleanup\n"); );
    // Init
    VAdderAnybits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAnybits___024root*>(voidSelf);
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
