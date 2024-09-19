// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdderAndSuber32bits__Syms.h"


VL_ATTR_COLD void VAdderAndSuber32bits___024root__trace_init_sub__TOP__0(VAdderAndSuber32bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber32bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber32bits___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+65,"A", false,-1, 31,0);
    tracep->declBus(c+66,"B", false,-1, 31,0);
    tracep->declBit(c+67,"Cin", false,-1);
    tracep->declBus(c+68,"S", false,-1, 31,0);
    tracep->declBit(c+69,"Cout", false,-1);
    tracep->pushNamePrefix("AdderAndSuber32bits ");
    tracep->declBus(c+65,"A", false,-1, 31,0);
    tracep->declBus(c+66,"B", false,-1, 31,0);
    tracep->declBus(c+1,"InvertB", false,-1, 31,0);
    tracep->declBit(c+67,"Cin", false,-1);
    tracep->declQuad(c+70,"C", false,-1, 32,0);
    tracep->declBus(c+68,"S", false,-1, 31,0);
    tracep->declBit(c+69,"Cout", false,-1);
    tracep->pushNamePrefix("adders[0] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+72,"X", false,-1);
    tracep->declBit(c+2,"Y", false,-1);
    tracep->declBit(c+67,"Cin", false,-1);
    tracep->declBit(c+3,"Cout", false,-1);
    tracep->declBit(c+73,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[10] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+74,"X", false,-1);
    tracep->declBit(c+4,"Y", false,-1);
    tracep->declBit(c+5,"Cin", false,-1);
    tracep->declBit(c+6,"Cout", false,-1);
    tracep->declBit(c+75,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[11] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+76,"X", false,-1);
    tracep->declBit(c+7,"Y", false,-1);
    tracep->declBit(c+6,"Cin", false,-1);
    tracep->declBit(c+8,"Cout", false,-1);
    tracep->declBit(c+77,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[12] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+78,"X", false,-1);
    tracep->declBit(c+9,"Y", false,-1);
    tracep->declBit(c+8,"Cin", false,-1);
    tracep->declBit(c+10,"Cout", false,-1);
    tracep->declBit(c+79,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[13] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+80,"X", false,-1);
    tracep->declBit(c+11,"Y", false,-1);
    tracep->declBit(c+10,"Cin", false,-1);
    tracep->declBit(c+12,"Cout", false,-1);
    tracep->declBit(c+81,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[14] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+82,"X", false,-1);
    tracep->declBit(c+13,"Y", false,-1);
    tracep->declBit(c+12,"Cin", false,-1);
    tracep->declBit(c+14,"Cout", false,-1);
    tracep->declBit(c+83,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[15] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+84,"X", false,-1);
    tracep->declBit(c+15,"Y", false,-1);
    tracep->declBit(c+14,"Cin", false,-1);
    tracep->declBit(c+16,"Cout", false,-1);
    tracep->declBit(c+85,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[16] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+86,"X", false,-1);
    tracep->declBit(c+17,"Y", false,-1);
    tracep->declBit(c+16,"Cin", false,-1);
    tracep->declBit(c+18,"Cout", false,-1);
    tracep->declBit(c+87,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[17] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+88,"X", false,-1);
    tracep->declBit(c+19,"Y", false,-1);
    tracep->declBit(c+18,"Cin", false,-1);
    tracep->declBit(c+20,"Cout", false,-1);
    tracep->declBit(c+89,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[18] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+90,"X", false,-1);
    tracep->declBit(c+21,"Y", false,-1);
    tracep->declBit(c+20,"Cin", false,-1);
    tracep->declBit(c+22,"Cout", false,-1);
    tracep->declBit(c+91,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[19] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+92,"X", false,-1);
    tracep->declBit(c+23,"Y", false,-1);
    tracep->declBit(c+22,"Cin", false,-1);
    tracep->declBit(c+24,"Cout", false,-1);
    tracep->declBit(c+93,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[1] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+94,"X", false,-1);
    tracep->declBit(c+25,"Y", false,-1);
    tracep->declBit(c+3,"Cin", false,-1);
    tracep->declBit(c+26,"Cout", false,-1);
    tracep->declBit(c+95,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[20] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+96,"X", false,-1);
    tracep->declBit(c+27,"Y", false,-1);
    tracep->declBit(c+24,"Cin", false,-1);
    tracep->declBit(c+28,"Cout", false,-1);
    tracep->declBit(c+97,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[21] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+98,"X", false,-1);
    tracep->declBit(c+29,"Y", false,-1);
    tracep->declBit(c+28,"Cin", false,-1);
    tracep->declBit(c+30,"Cout", false,-1);
    tracep->declBit(c+99,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[22] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+100,"X", false,-1);
    tracep->declBit(c+31,"Y", false,-1);
    tracep->declBit(c+30,"Cin", false,-1);
    tracep->declBit(c+32,"Cout", false,-1);
    tracep->declBit(c+101,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[23] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+102,"X", false,-1);
    tracep->declBit(c+33,"Y", false,-1);
    tracep->declBit(c+32,"Cin", false,-1);
    tracep->declBit(c+34,"Cout", false,-1);
    tracep->declBit(c+103,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[24] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+104,"X", false,-1);
    tracep->declBit(c+35,"Y", false,-1);
    tracep->declBit(c+34,"Cin", false,-1);
    tracep->declBit(c+36,"Cout", false,-1);
    tracep->declBit(c+105,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[25] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+106,"X", false,-1);
    tracep->declBit(c+37,"Y", false,-1);
    tracep->declBit(c+36,"Cin", false,-1);
    tracep->declBit(c+38,"Cout", false,-1);
    tracep->declBit(c+107,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[26] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+108,"X", false,-1);
    tracep->declBit(c+39,"Y", false,-1);
    tracep->declBit(c+38,"Cin", false,-1);
    tracep->declBit(c+40,"Cout", false,-1);
    tracep->declBit(c+109,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[27] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+110,"X", false,-1);
    tracep->declBit(c+41,"Y", false,-1);
    tracep->declBit(c+40,"Cin", false,-1);
    tracep->declBit(c+42,"Cout", false,-1);
    tracep->declBit(c+111,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[28] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+112,"X", false,-1);
    tracep->declBit(c+43,"Y", false,-1);
    tracep->declBit(c+42,"Cin", false,-1);
    tracep->declBit(c+44,"Cout", false,-1);
    tracep->declBit(c+113,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[29] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+114,"X", false,-1);
    tracep->declBit(c+45,"Y", false,-1);
    tracep->declBit(c+44,"Cin", false,-1);
    tracep->declBit(c+46,"Cout", false,-1);
    tracep->declBit(c+115,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[2] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+116,"X", false,-1);
    tracep->declBit(c+47,"Y", false,-1);
    tracep->declBit(c+26,"Cin", false,-1);
    tracep->declBit(c+48,"Cout", false,-1);
    tracep->declBit(c+117,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[30] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+118,"X", false,-1);
    tracep->declBit(c+49,"Y", false,-1);
    tracep->declBit(c+46,"Cin", false,-1);
    tracep->declBit(c+50,"Cout", false,-1);
    tracep->declBit(c+119,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[31] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+120,"X", false,-1);
    tracep->declBit(c+51,"Y", false,-1);
    tracep->declBit(c+50,"Cin", false,-1);
    tracep->declBit(c+69,"Cout", false,-1);
    tracep->declBit(c+121,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[3] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+122,"X", false,-1);
    tracep->declBit(c+52,"Y", false,-1);
    tracep->declBit(c+48,"Cin", false,-1);
    tracep->declBit(c+53,"Cout", false,-1);
    tracep->declBit(c+123,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[4] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+124,"X", false,-1);
    tracep->declBit(c+54,"Y", false,-1);
    tracep->declBit(c+53,"Cin", false,-1);
    tracep->declBit(c+55,"Cout", false,-1);
    tracep->declBit(c+125,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[5] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+126,"X", false,-1);
    tracep->declBit(c+56,"Y", false,-1);
    tracep->declBit(c+55,"Cin", false,-1);
    tracep->declBit(c+57,"Cout", false,-1);
    tracep->declBit(c+127,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[6] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+128,"X", false,-1);
    tracep->declBit(c+58,"Y", false,-1);
    tracep->declBit(c+57,"Cin", false,-1);
    tracep->declBit(c+59,"Cout", false,-1);
    tracep->declBit(c+129,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[7] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+130,"X", false,-1);
    tracep->declBit(c+60,"Y", false,-1);
    tracep->declBit(c+59,"Cin", false,-1);
    tracep->declBit(c+61,"Cout", false,-1);
    tracep->declBit(c+131,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[8] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+132,"X", false,-1);
    tracep->declBit(c+62,"Y", false,-1);
    tracep->declBit(c+61,"Cin", false,-1);
    tracep->declBit(c+63,"Cout", false,-1);
    tracep->declBit(c+133,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[9] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+134,"X", false,-1);
    tracep->declBit(c+64,"Y", false,-1);
    tracep->declBit(c+63,"Cin", false,-1);
    tracep->declBit(c+5,"Cout", false,-1);
    tracep->declBit(c+135,"Sum", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VAdderAndSuber32bits___024root__trace_init_top(VAdderAndSuber32bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber32bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber32bits___024root__trace_init_top\n"); );
    // Body
    VAdderAndSuber32bits___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAdderAndSuber32bits___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdderAndSuber32bits___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdderAndSuber32bits___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAdderAndSuber32bits___024root__trace_register(VAdderAndSuber32bits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber32bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber32bits___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAdderAndSuber32bits___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAdderAndSuber32bits___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAdderAndSuber32bits___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAdderAndSuber32bits___024root__trace_full_sub_0(VAdderAndSuber32bits___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VAdderAndSuber32bits___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber32bits___024root__trace_full_top_0\n"); );
    // Init
    VAdderAndSuber32bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAndSuber32bits___024root*>(voidSelf);
    VAdderAndSuber32bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAdderAndSuber32bits___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAdderAndSuber32bits___024root__trace_full_sub_0(VAdderAndSuber32bits___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber32bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber32bits___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,((((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Y) 
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
    bufp->fullBit(oldp+2,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y));
    bufp->fullBit(oldp+3,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin));
    bufp->fullBit(oldp+4,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Y));
    bufp->fullBit(oldp+5,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin));
    bufp->fullBit(oldp+6,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin));
    bufp->fullBit(oldp+7,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Y));
    bufp->fullBit(oldp+8,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin));
    bufp->fullBit(oldp+9,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Y));
    bufp->fullBit(oldp+10,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin));
    bufp->fullBit(oldp+11,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Y));
    bufp->fullBit(oldp+12,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin));
    bufp->fullBit(oldp+13,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Y));
    bufp->fullBit(oldp+14,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin));
    bufp->fullBit(oldp+15,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Y));
    bufp->fullBit(oldp+16,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin));
    bufp->fullBit(oldp+17,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Y));
    bufp->fullBit(oldp+18,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin));
    bufp->fullBit(oldp+19,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Y));
    bufp->fullBit(oldp+20,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin));
    bufp->fullBit(oldp+21,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Y));
    bufp->fullBit(oldp+22,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin));
    bufp->fullBit(oldp+23,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Y));
    bufp->fullBit(oldp+24,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin));
    bufp->fullBit(oldp+25,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y));
    bufp->fullBit(oldp+26,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin));
    bufp->fullBit(oldp+27,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Y));
    bufp->fullBit(oldp+28,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin));
    bufp->fullBit(oldp+29,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Y));
    bufp->fullBit(oldp+30,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin));
    bufp->fullBit(oldp+31,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Y));
    bufp->fullBit(oldp+32,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin));
    bufp->fullBit(oldp+33,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Y));
    bufp->fullBit(oldp+34,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin));
    bufp->fullBit(oldp+35,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Y));
    bufp->fullBit(oldp+36,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin));
    bufp->fullBit(oldp+37,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Y));
    bufp->fullBit(oldp+38,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin));
    bufp->fullBit(oldp+39,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Y));
    bufp->fullBit(oldp+40,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin));
    bufp->fullBit(oldp+41,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Y));
    bufp->fullBit(oldp+42,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin));
    bufp->fullBit(oldp+43,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Y));
    bufp->fullBit(oldp+44,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin));
    bufp->fullBit(oldp+45,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Y));
    bufp->fullBit(oldp+46,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin));
    bufp->fullBit(oldp+47,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y));
    bufp->fullBit(oldp+48,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin));
    bufp->fullBit(oldp+49,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Y));
    bufp->fullBit(oldp+50,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin));
    bufp->fullBit(oldp+51,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Y));
    bufp->fullBit(oldp+52,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y));
    bufp->fullBit(oldp+53,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin));
    bufp->fullBit(oldp+54,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Y));
    bufp->fullBit(oldp+55,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin));
    bufp->fullBit(oldp+56,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Y));
    bufp->fullBit(oldp+57,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin));
    bufp->fullBit(oldp+58,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Y));
    bufp->fullBit(oldp+59,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin));
    bufp->fullBit(oldp+60,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Y));
    bufp->fullBit(oldp+61,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin));
    bufp->fullBit(oldp+62,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Y));
    bufp->fullBit(oldp+63,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin));
    bufp->fullBit(oldp+64,(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Y));
    bufp->fullIData(oldp+65,(vlSelf->A),32);
    bufp->fullIData(oldp+66,(vlSelf->B),32);
    bufp->fullBit(oldp+67,(vlSelf->Cin));
    bufp->fullIData(oldp+68,(vlSelf->S),32);
    bufp->fullBit(oldp+69,(vlSelf->Cout));
    bufp->fullQData(oldp+70,((((QData)((IData)(vlSelf->Cout)) 
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
    bufp->fullBit(oldp+72,((1U & vlSelf->A)));
    bufp->fullBit(oldp+73,((1U & (vlSelf->A ^ ((IData)(vlSelf->Cin) 
                                               ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+74,((1U & (vlSelf->A >> 0xaU))));
    bufp->fullBit(oldp+75,((1U & ((vlSelf->A >> 0xaU) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+76,((1U & (vlSelf->A >> 0xbU))));
    bufp->fullBit(oldp+77,((1U & ((vlSelf->A >> 0xbU) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+78,((1U & (vlSelf->A >> 0xcU))));
    bufp->fullBit(oldp+79,((1U & ((vlSelf->A >> 0xcU) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+80,((1U & (vlSelf->A >> 0xdU))));
    bufp->fullBit(oldp+81,((1U & ((vlSelf->A >> 0xdU) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+82,((1U & (vlSelf->A >> 0xeU))));
    bufp->fullBit(oldp+83,((1U & ((vlSelf->A >> 0xeU) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+84,((1U & (vlSelf->A >> 0xfU))));
    bufp->fullBit(oldp+85,((1U & ((vlSelf->A >> 0xfU) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+86,((1U & (vlSelf->A >> 0x10U))));
    bufp->fullBit(oldp+87,((1U & ((vlSelf->A >> 0x10U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+88,((1U & (vlSelf->A >> 0x11U))));
    bufp->fullBit(oldp+89,((1U & ((vlSelf->A >> 0x11U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+90,((1U & (vlSelf->A >> 0x12U))));
    bufp->fullBit(oldp+91,((1U & ((vlSelf->A >> 0x12U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+92,((1U & (vlSelf->A >> 0x13U))));
    bufp->fullBit(oldp+93,((1U & ((vlSelf->A >> 0x13U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+94,((1U & (vlSelf->A >> 1U))));
    bufp->fullBit(oldp+95,((1U & ((vlSelf->A >> 1U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->A >> 0x14U))));
    bufp->fullBit(oldp+97,((1U & ((vlSelf->A >> 0x14U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+98,((1U & (vlSelf->A >> 0x15U))));
    bufp->fullBit(oldp+99,((1U & ((vlSelf->A >> 0x15U) 
                                  ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin) 
                                     ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+100,((1U & (vlSelf->A >> 0x16U))));
    bufp->fullBit(oldp+101,((1U & ((vlSelf->A >> 0x16U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+102,((1U & (vlSelf->A >> 0x17U))));
    bufp->fullBit(oldp+103,((1U & ((vlSelf->A >> 0x17U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+104,((1U & (vlSelf->A >> 0x18U))));
    bufp->fullBit(oldp+105,((1U & ((vlSelf->A >> 0x18U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+106,((1U & (vlSelf->A >> 0x19U))));
    bufp->fullBit(oldp+107,((1U & ((vlSelf->A >> 0x19U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+108,((1U & (vlSelf->A >> 0x1aU))));
    bufp->fullBit(oldp+109,((1U & ((vlSelf->A >> 0x1aU) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+110,((1U & (vlSelf->A >> 0x1bU))));
    bufp->fullBit(oldp+111,((1U & ((vlSelf->A >> 0x1bU) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+112,((1U & (vlSelf->A >> 0x1cU))));
    bufp->fullBit(oldp+113,((1U & ((vlSelf->A >> 0x1cU) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+114,((1U & (vlSelf->A >> 0x1dU))));
    bufp->fullBit(oldp+115,((1U & ((vlSelf->A >> 0x1dU) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->A >> 2U))));
    bufp->fullBit(oldp+117,((1U & ((vlSelf->A >> 2U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+118,((1U & (vlSelf->A >> 0x1eU))));
    bufp->fullBit(oldp+119,((1U & ((vlSelf->A >> 0x1eU) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+120,((vlSelf->A >> 0x1fU)));
    bufp->fullBit(oldp+121,((((vlSelf->A >> 0x1fU) 
                              ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin)) 
                             ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Y))));
    bufp->fullBit(oldp+122,((1U & (vlSelf->A >> 3U))));
    bufp->fullBit(oldp+123,((1U & ((vlSelf->A >> 3U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+124,((1U & (vlSelf->A >> 4U))));
    bufp->fullBit(oldp+125,((1U & ((vlSelf->A >> 4U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+126,((1U & (vlSelf->A >> 5U))));
    bufp->fullBit(oldp+127,((1U & ((vlSelf->A >> 5U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+128,((1U & (vlSelf->A >> 6U))));
    bufp->fullBit(oldp+129,((1U & ((vlSelf->A >> 6U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+130,((1U & (vlSelf->A >> 7U))));
    bufp->fullBit(oldp+131,((1U & ((vlSelf->A >> 7U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+132,((1U & (vlSelf->A >> 8U))));
    bufp->fullBit(oldp+133,((1U & ((vlSelf->A >> 8U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Y))))));
    bufp->fullBit(oldp+134,((1U & (vlSelf->A >> 9U))));
    bufp->fullBit(oldp+135,((1U & ((vlSelf->A >> 9U) 
                                   ^ ((IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin) 
                                      ^ (IData)(vlSelf->AdderAndSuber32bits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Y))))));
}
