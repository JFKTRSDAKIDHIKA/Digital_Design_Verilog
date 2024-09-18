// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdderAnybits__Syms.h"


VL_ATTR_COLD void VAdderAnybits___024root__trace_init_sub__TOP__0(VAdderAnybits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+32,"A", false,-1, 31,0);
    tracep->declBus(c+33,"B", false,-1, 31,0);
    tracep->declBus(c+34,"S", false,-1, 31,0);
    tracep->declBit(c+35,"Cout", false,-1);
    tracep->pushNamePrefix("AdderAnybits ");
    tracep->declBus(c+134,"width", false,-1, 31,0);
    tracep->declBus(c+32,"A", false,-1, 31,0);
    tracep->declBus(c+33,"B", false,-1, 31,0);
    tracep->declBus(c+34,"S", false,-1, 31,0);
    tracep->declBit(c+35,"Cout", false,-1);
    tracep->declQuad(c+36,"C", false,-1, 32,0);
    tracep->pushNamePrefix("adders[0] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+38,"X", false,-1);
    tracep->declBit(c+39,"Y", false,-1);
    tracep->declBit(c+135,"Cin", false,-1);
    tracep->declBit(c+1,"Cout", false,-1);
    tracep->declBit(c+40,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[10] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+41,"X", false,-1);
    tracep->declBit(c+42,"Y", false,-1);
    tracep->declBit(c+2,"Cin", false,-1);
    tracep->declBit(c+3,"Cout", false,-1);
    tracep->declBit(c+43,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[11] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+44,"X", false,-1);
    tracep->declBit(c+45,"Y", false,-1);
    tracep->declBit(c+3,"Cin", false,-1);
    tracep->declBit(c+4,"Cout", false,-1);
    tracep->declBit(c+46,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[12] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+47,"X", false,-1);
    tracep->declBit(c+48,"Y", false,-1);
    tracep->declBit(c+4,"Cin", false,-1);
    tracep->declBit(c+5,"Cout", false,-1);
    tracep->declBit(c+49,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[13] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+50,"X", false,-1);
    tracep->declBit(c+51,"Y", false,-1);
    tracep->declBit(c+5,"Cin", false,-1);
    tracep->declBit(c+6,"Cout", false,-1);
    tracep->declBit(c+52,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[14] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+53,"X", false,-1);
    tracep->declBit(c+54,"Y", false,-1);
    tracep->declBit(c+6,"Cin", false,-1);
    tracep->declBit(c+7,"Cout", false,-1);
    tracep->declBit(c+55,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[15] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+56,"X", false,-1);
    tracep->declBit(c+57,"Y", false,-1);
    tracep->declBit(c+7,"Cin", false,-1);
    tracep->declBit(c+8,"Cout", false,-1);
    tracep->declBit(c+58,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[16] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+59,"X", false,-1);
    tracep->declBit(c+60,"Y", false,-1);
    tracep->declBit(c+8,"Cin", false,-1);
    tracep->declBit(c+9,"Cout", false,-1);
    tracep->declBit(c+61,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[17] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+62,"X", false,-1);
    tracep->declBit(c+63,"Y", false,-1);
    tracep->declBit(c+9,"Cin", false,-1);
    tracep->declBit(c+10,"Cout", false,-1);
    tracep->declBit(c+64,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[18] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+65,"X", false,-1);
    tracep->declBit(c+66,"Y", false,-1);
    tracep->declBit(c+10,"Cin", false,-1);
    tracep->declBit(c+11,"Cout", false,-1);
    tracep->declBit(c+67,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[19] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+68,"X", false,-1);
    tracep->declBit(c+69,"Y", false,-1);
    tracep->declBit(c+11,"Cin", false,-1);
    tracep->declBit(c+12,"Cout", false,-1);
    tracep->declBit(c+70,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[1] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+71,"X", false,-1);
    tracep->declBit(c+72,"Y", false,-1);
    tracep->declBit(c+1,"Cin", false,-1);
    tracep->declBit(c+13,"Cout", false,-1);
    tracep->declBit(c+73,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[20] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+74,"X", false,-1);
    tracep->declBit(c+75,"Y", false,-1);
    tracep->declBit(c+12,"Cin", false,-1);
    tracep->declBit(c+14,"Cout", false,-1);
    tracep->declBit(c+76,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[21] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+77,"X", false,-1);
    tracep->declBit(c+78,"Y", false,-1);
    tracep->declBit(c+14,"Cin", false,-1);
    tracep->declBit(c+15,"Cout", false,-1);
    tracep->declBit(c+79,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[22] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+80,"X", false,-1);
    tracep->declBit(c+81,"Y", false,-1);
    tracep->declBit(c+15,"Cin", false,-1);
    tracep->declBit(c+16,"Cout", false,-1);
    tracep->declBit(c+82,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[23] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+83,"X", false,-1);
    tracep->declBit(c+84,"Y", false,-1);
    tracep->declBit(c+16,"Cin", false,-1);
    tracep->declBit(c+17,"Cout", false,-1);
    tracep->declBit(c+85,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[24] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+86,"X", false,-1);
    tracep->declBit(c+87,"Y", false,-1);
    tracep->declBit(c+17,"Cin", false,-1);
    tracep->declBit(c+18,"Cout", false,-1);
    tracep->declBit(c+88,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[25] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+89,"X", false,-1);
    tracep->declBit(c+90,"Y", false,-1);
    tracep->declBit(c+18,"Cin", false,-1);
    tracep->declBit(c+19,"Cout", false,-1);
    tracep->declBit(c+91,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[26] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+92,"X", false,-1);
    tracep->declBit(c+93,"Y", false,-1);
    tracep->declBit(c+19,"Cin", false,-1);
    tracep->declBit(c+20,"Cout", false,-1);
    tracep->declBit(c+94,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[27] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+95,"X", false,-1);
    tracep->declBit(c+96,"Y", false,-1);
    tracep->declBit(c+20,"Cin", false,-1);
    tracep->declBit(c+21,"Cout", false,-1);
    tracep->declBit(c+97,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[28] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+98,"X", false,-1);
    tracep->declBit(c+99,"Y", false,-1);
    tracep->declBit(c+21,"Cin", false,-1);
    tracep->declBit(c+22,"Cout", false,-1);
    tracep->declBit(c+100,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[29] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+101,"X", false,-1);
    tracep->declBit(c+102,"Y", false,-1);
    tracep->declBit(c+22,"Cin", false,-1);
    tracep->declBit(c+23,"Cout", false,-1);
    tracep->declBit(c+103,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[2] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+104,"X", false,-1);
    tracep->declBit(c+105,"Y", false,-1);
    tracep->declBit(c+13,"Cin", false,-1);
    tracep->declBit(c+24,"Cout", false,-1);
    tracep->declBit(c+106,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[30] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+107,"X", false,-1);
    tracep->declBit(c+108,"Y", false,-1);
    tracep->declBit(c+23,"Cin", false,-1);
    tracep->declBit(c+25,"Cout", false,-1);
    tracep->declBit(c+109,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[31] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+110,"X", false,-1);
    tracep->declBit(c+111,"Y", false,-1);
    tracep->declBit(c+25,"Cin", false,-1);
    tracep->declBit(c+35,"Cout", false,-1);
    tracep->declBit(c+112,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[3] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+113,"X", false,-1);
    tracep->declBit(c+114,"Y", false,-1);
    tracep->declBit(c+24,"Cin", false,-1);
    tracep->declBit(c+26,"Cout", false,-1);
    tracep->declBit(c+115,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[4] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+116,"X", false,-1);
    tracep->declBit(c+117,"Y", false,-1);
    tracep->declBit(c+26,"Cin", false,-1);
    tracep->declBit(c+27,"Cout", false,-1);
    tracep->declBit(c+118,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[5] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+119,"X", false,-1);
    tracep->declBit(c+120,"Y", false,-1);
    tracep->declBit(c+27,"Cin", false,-1);
    tracep->declBit(c+28,"Cout", false,-1);
    tracep->declBit(c+121,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[6] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+122,"X", false,-1);
    tracep->declBit(c+123,"Y", false,-1);
    tracep->declBit(c+28,"Cin", false,-1);
    tracep->declBit(c+29,"Cout", false,-1);
    tracep->declBit(c+124,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[7] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+125,"X", false,-1);
    tracep->declBit(c+126,"Y", false,-1);
    tracep->declBit(c+29,"Cin", false,-1);
    tracep->declBit(c+30,"Cout", false,-1);
    tracep->declBit(c+127,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[8] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+128,"X", false,-1);
    tracep->declBit(c+129,"Y", false,-1);
    tracep->declBit(c+30,"Cin", false,-1);
    tracep->declBit(c+31,"Cout", false,-1);
    tracep->declBit(c+130,"Sum", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("adders[9] ");
    tracep->pushNamePrefix("u ");
    tracep->declBit(c+131,"X", false,-1);
    tracep->declBit(c+132,"Y", false,-1);
    tracep->declBit(c+31,"Cin", false,-1);
    tracep->declBit(c+2,"Cout", false,-1);
    tracep->declBit(c+133,"Sum", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VAdderAnybits___024root__trace_init_top(VAdderAnybits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root__trace_init_top\n"); );
    // Body
    VAdderAnybits___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAdderAnybits___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdderAnybits___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdderAnybits___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAdderAnybits___024root__trace_register(VAdderAnybits___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAdderAnybits___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAdderAnybits___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAdderAnybits___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAdderAnybits___024root__trace_full_sub_0(VAdderAnybits___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VAdderAnybits___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root__trace_full_top_0\n"); );
    // Init
    VAdderAnybits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAnybits___024root*>(voidSelf);
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAdderAnybits___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAdderAnybits___024root__trace_full_sub_0(VAdderAnybits___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin));
    bufp->fullBit(oldp+2,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin));
    bufp->fullBit(oldp+3,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin));
    bufp->fullBit(oldp+4,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin));
    bufp->fullBit(oldp+5,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin));
    bufp->fullBit(oldp+6,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin));
    bufp->fullBit(oldp+7,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin));
    bufp->fullBit(oldp+8,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin));
    bufp->fullBit(oldp+9,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin));
    bufp->fullBit(oldp+10,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin));
    bufp->fullBit(oldp+11,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin));
    bufp->fullBit(oldp+12,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin));
    bufp->fullBit(oldp+13,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin));
    bufp->fullBit(oldp+14,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin));
    bufp->fullBit(oldp+15,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin));
    bufp->fullBit(oldp+16,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin));
    bufp->fullBit(oldp+17,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin));
    bufp->fullBit(oldp+18,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin));
    bufp->fullBit(oldp+19,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin));
    bufp->fullBit(oldp+20,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin));
    bufp->fullBit(oldp+21,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin));
    bufp->fullBit(oldp+22,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin));
    bufp->fullBit(oldp+23,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin));
    bufp->fullBit(oldp+24,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin));
    bufp->fullBit(oldp+25,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin));
    bufp->fullBit(oldp+26,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin));
    bufp->fullBit(oldp+27,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin));
    bufp->fullBit(oldp+28,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin));
    bufp->fullBit(oldp+29,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin));
    bufp->fullBit(oldp+30,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin));
    bufp->fullBit(oldp+31,(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin));
    bufp->fullIData(oldp+32,(vlSelf->A),32);
    bufp->fullIData(oldp+33,(vlSelf->B),32);
    bufp->fullIData(oldp+34,(vlSelf->S),32);
    bufp->fullBit(oldp+35,(vlSelf->Cout));
    bufp->fullQData(oldp+36,((((QData)((IData)(vlSelf->Cout)) 
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
    bufp->fullBit(oldp+38,((1U & vlSelf->A)));
    bufp->fullBit(oldp+39,((1U & vlSelf->B)));
    bufp->fullBit(oldp+40,((1U & (vlSelf->A ^ vlSelf->B))));
    bufp->fullBit(oldp+41,((1U & (vlSelf->A >> 0xaU))));
    bufp->fullBit(oldp+42,((1U & (vlSelf->B >> 0xaU))));
    bufp->fullBit(oldp+43,((1U & ((vlSelf->A >> 0xaU) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0xaU))))));
    bufp->fullBit(oldp+44,((1U & (vlSelf->A >> 0xbU))));
    bufp->fullBit(oldp+45,((1U & (vlSelf->B >> 0xbU))));
    bufp->fullBit(oldp+46,((1U & ((vlSelf->A >> 0xbU) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0xbU))))));
    bufp->fullBit(oldp+47,((1U & (vlSelf->A >> 0xcU))));
    bufp->fullBit(oldp+48,((1U & (vlSelf->B >> 0xcU))));
    bufp->fullBit(oldp+49,((1U & ((vlSelf->A >> 0xcU) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0xcU))))));
    bufp->fullBit(oldp+50,((1U & (vlSelf->A >> 0xdU))));
    bufp->fullBit(oldp+51,((1U & (vlSelf->B >> 0xdU))));
    bufp->fullBit(oldp+52,((1U & ((vlSelf->A >> 0xdU) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0xdU))))));
    bufp->fullBit(oldp+53,((1U & (vlSelf->A >> 0xeU))));
    bufp->fullBit(oldp+54,((1U & (vlSelf->B >> 0xeU))));
    bufp->fullBit(oldp+55,((1U & ((vlSelf->A >> 0xeU) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0xeU))))));
    bufp->fullBit(oldp+56,((1U & (vlSelf->A >> 0xfU))));
    bufp->fullBit(oldp+57,((1U & (vlSelf->B >> 0xfU))));
    bufp->fullBit(oldp+58,((1U & ((vlSelf->A >> 0xfU) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0xfU))))));
    bufp->fullBit(oldp+59,((1U & (vlSelf->A >> 0x10U))));
    bufp->fullBit(oldp+60,((1U & (vlSelf->B >> 0x10U))));
    bufp->fullBit(oldp+61,((1U & ((vlSelf->A >> 0x10U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x10U))))));
    bufp->fullBit(oldp+62,((1U & (vlSelf->A >> 0x11U))));
    bufp->fullBit(oldp+63,((1U & (vlSelf->B >> 0x11U))));
    bufp->fullBit(oldp+64,((1U & ((vlSelf->A >> 0x11U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x11U))))));
    bufp->fullBit(oldp+65,((1U & (vlSelf->A >> 0x12U))));
    bufp->fullBit(oldp+66,((1U & (vlSelf->B >> 0x12U))));
    bufp->fullBit(oldp+67,((1U & ((vlSelf->A >> 0x12U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x12U))))));
    bufp->fullBit(oldp+68,((1U & (vlSelf->A >> 0x13U))));
    bufp->fullBit(oldp+69,((1U & (vlSelf->B >> 0x13U))));
    bufp->fullBit(oldp+70,((1U & ((vlSelf->A >> 0x13U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x13U))))));
    bufp->fullBit(oldp+71,((1U & (vlSelf->A >> 1U))));
    bufp->fullBit(oldp+72,((1U & (vlSelf->B >> 1U))));
    bufp->fullBit(oldp+73,((1U & ((vlSelf->A >> 1U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 1U))))));
    bufp->fullBit(oldp+74,((1U & (vlSelf->A >> 0x14U))));
    bufp->fullBit(oldp+75,((1U & (vlSelf->B >> 0x14U))));
    bufp->fullBit(oldp+76,((1U & ((vlSelf->A >> 0x14U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x14U))))));
    bufp->fullBit(oldp+77,((1U & (vlSelf->A >> 0x15U))));
    bufp->fullBit(oldp+78,((1U & (vlSelf->B >> 0x15U))));
    bufp->fullBit(oldp+79,((1U & ((vlSelf->A >> 0x15U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x15U))))));
    bufp->fullBit(oldp+80,((1U & (vlSelf->A >> 0x16U))));
    bufp->fullBit(oldp+81,((1U & (vlSelf->B >> 0x16U))));
    bufp->fullBit(oldp+82,((1U & ((vlSelf->A >> 0x16U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x16U))))));
    bufp->fullBit(oldp+83,((1U & (vlSelf->A >> 0x17U))));
    bufp->fullBit(oldp+84,((1U & (vlSelf->B >> 0x17U))));
    bufp->fullBit(oldp+85,((1U & ((vlSelf->A >> 0x17U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x17U))))));
    bufp->fullBit(oldp+86,((1U & (vlSelf->A >> 0x18U))));
    bufp->fullBit(oldp+87,((1U & (vlSelf->B >> 0x18U))));
    bufp->fullBit(oldp+88,((1U & ((vlSelf->A >> 0x18U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x18U))))));
    bufp->fullBit(oldp+89,((1U & (vlSelf->A >> 0x19U))));
    bufp->fullBit(oldp+90,((1U & (vlSelf->B >> 0x19U))));
    bufp->fullBit(oldp+91,((1U & ((vlSelf->A >> 0x19U) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x19U))))));
    bufp->fullBit(oldp+92,((1U & (vlSelf->A >> 0x1aU))));
    bufp->fullBit(oldp+93,((1U & (vlSelf->B >> 0x1aU))));
    bufp->fullBit(oldp+94,((1U & ((vlSelf->A >> 0x1aU) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x1aU))))));
    bufp->fullBit(oldp+95,((1U & (vlSelf->A >> 0x1bU))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->B >> 0x1bU))));
    bufp->fullBit(oldp+97,((1U & ((vlSelf->A >> 0x1bU) 
                                  ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin) 
                                     ^ (vlSelf->B >> 0x1bU))))));
    bufp->fullBit(oldp+98,((1U & (vlSelf->A >> 0x1cU))));
    bufp->fullBit(oldp+99,((1U & (vlSelf->B >> 0x1cU))));
    bufp->fullBit(oldp+100,((1U & ((vlSelf->A >> 0x1cU) 
                                   ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin) 
                                      ^ (vlSelf->B 
                                         >> 0x1cU))))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->A >> 0x1dU))));
    bufp->fullBit(oldp+102,((1U & (vlSelf->B >> 0x1dU))));
    bufp->fullBit(oldp+103,((1U & ((vlSelf->A >> 0x1dU) 
                                   ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin) 
                                      ^ (vlSelf->B 
                                         >> 0x1dU))))));
    bufp->fullBit(oldp+104,((1U & (vlSelf->A >> 2U))));
    bufp->fullBit(oldp+105,((1U & (vlSelf->B >> 2U))));
    bufp->fullBit(oldp+106,((1U & ((vlSelf->A >> 2U) 
                                   ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                      ^ (vlSelf->B 
                                         >> 2U))))));
    bufp->fullBit(oldp+107,((1U & (vlSelf->A >> 0x1eU))));
    bufp->fullBit(oldp+108,((1U & (vlSelf->B >> 0x1eU))));
    bufp->fullBit(oldp+109,((1U & ((vlSelf->A >> 0x1eU) 
                                   ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin) 
                                      ^ (vlSelf->B 
                                         >> 0x1eU))))));
    bufp->fullBit(oldp+110,((vlSelf->A >> 0x1fU)));
    bufp->fullBit(oldp+111,((vlSelf->B >> 0x1fU)));
    bufp->fullBit(oldp+112,((((vlSelf->A >> 0x1fU) 
                              ^ (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin)) 
                             ^ (vlSelf->B >> 0x1fU))));
    bufp->fullBit(oldp+113,((1U & (vlSelf->A >> 3U))));
    bufp->fullBit(oldp+114,((1U & (vlSelf->B >> 3U))));
    bufp->fullBit(oldp+115,((1U & ((vlSelf->A >> 3U) 
                                   ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                      ^ (vlSelf->B 
                                         >> 3U))))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->A >> 4U))));
    bufp->fullBit(oldp+117,((1U & (vlSelf->B >> 4U))));
    bufp->fullBit(oldp+118,((1U & ((vlSelf->A >> 4U) 
                                   ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                      ^ (vlSelf->B 
                                         >> 4U))))));
    bufp->fullBit(oldp+119,((1U & (vlSelf->A >> 5U))));
    bufp->fullBit(oldp+120,((1U & (vlSelf->B >> 5U))));
    bufp->fullBit(oldp+121,((1U & ((vlSelf->A >> 5U) 
                                   ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                      ^ (vlSelf->B 
                                         >> 5U))))));
    bufp->fullBit(oldp+122,((1U & (vlSelf->A >> 6U))));
    bufp->fullBit(oldp+123,((1U & (vlSelf->B >> 6U))));
    bufp->fullBit(oldp+124,((1U & ((vlSelf->A >> 6U) 
                                   ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                      ^ (vlSelf->B 
                                         >> 6U))))));
    bufp->fullBit(oldp+125,((1U & (vlSelf->A >> 7U))));
    bufp->fullBit(oldp+126,((1U & (vlSelf->B >> 7U))));
    bufp->fullBit(oldp+127,((1U & ((vlSelf->A >> 7U) 
                                   ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin) 
                                      ^ (vlSelf->B 
                                         >> 7U))))));
    bufp->fullBit(oldp+128,((1U & (vlSelf->A >> 8U))));
    bufp->fullBit(oldp+129,((1U & (vlSelf->B >> 8U))));
    bufp->fullBit(oldp+130,((1U & ((vlSelf->A >> 8U) 
                                   ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin) 
                                      ^ (vlSelf->B 
                                         >> 8U))))));
    bufp->fullBit(oldp+131,((1U & (vlSelf->A >> 9U))));
    bufp->fullBit(oldp+132,((1U & (vlSelf->B >> 9U))));
    bufp->fullBit(oldp+133,((1U & ((vlSelf->A >> 9U) 
                                   ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin) 
                                      ^ (vlSelf->B 
                                         >> 9U))))));
    bufp->fullIData(oldp+134,(0x20U),32);
    bufp->fullBit(oldp+135,(0U));
}
