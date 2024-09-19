// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAdderAndSuber4bits.h"
#include "VAdderAndSuber4bits__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAdderAndSuber4bits::VAdderAndSuber4bits(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAdderAndSuber4bits__Syms(contextp(), _vcname__, this)}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , Cin{vlSymsp->TOP.Cin}
    , Cout{vlSymsp->TOP.Cout}
    , S{vlSymsp->TOP.S}
    , OverFlow{vlSymsp->TOP.OverFlow}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VAdderAndSuber4bits::VAdderAndSuber4bits(const char* _vcname__)
    : VAdderAndSuber4bits(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAdderAndSuber4bits::~VAdderAndSuber4bits() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAdderAndSuber4bits___024root___eval_debug_assertions(VAdderAndSuber4bits___024root* vlSelf);
#endif  // VL_DEBUG
void VAdderAndSuber4bits___024root___eval_static(VAdderAndSuber4bits___024root* vlSelf);
void VAdderAndSuber4bits___024root___eval_initial(VAdderAndSuber4bits___024root* vlSelf);
void VAdderAndSuber4bits___024root___eval_settle(VAdderAndSuber4bits___024root* vlSelf);
void VAdderAndSuber4bits___024root___eval(VAdderAndSuber4bits___024root* vlSelf);

void VAdderAndSuber4bits::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdderAndSuber4bits::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAdderAndSuber4bits___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAdderAndSuber4bits___024root___eval_static(&(vlSymsp->TOP));
        VAdderAndSuber4bits___024root___eval_initial(&(vlSymsp->TOP));
        VAdderAndSuber4bits___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAdderAndSuber4bits___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VAdderAndSuber4bits::eventsPending() { return false; }

uint64_t VAdderAndSuber4bits::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VAdderAndSuber4bits::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAdderAndSuber4bits___024root___eval_final(VAdderAndSuber4bits___024root* vlSelf);

VL_ATTR_COLD void VAdderAndSuber4bits::final() {
    VAdderAndSuber4bits___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAdderAndSuber4bits::hierName() const { return vlSymsp->name(); }
const char* VAdderAndSuber4bits::modelName() const { return "VAdderAndSuber4bits"; }
unsigned VAdderAndSuber4bits::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VAdderAndSuber4bits::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VAdderAndSuber4bits___024root__trace_init_top(VAdderAndSuber4bits___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAdderAndSuber4bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAndSuber4bits___024root*>(voidSelf);
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAdderAndSuber4bits___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAdderAndSuber4bits___024root__trace_register(VAdderAndSuber4bits___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAdderAndSuber4bits::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VAdderAndSuber4bits::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAdderAndSuber4bits___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
