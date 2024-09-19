// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAdder1bit.h"
#include "VAdder1bit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAdder1bit::VAdder1bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAdder1bit__Syms(contextp(), _vcname__, this)}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , Cout{vlSymsp->TOP.Cout}
    , S{vlSymsp->TOP.S}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VAdder1bit::VAdder1bit(const char* _vcname__)
    : VAdder1bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAdder1bit::~VAdder1bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAdder1bit___024root___eval_debug_assertions(VAdder1bit___024root* vlSelf);
#endif  // VL_DEBUG
void VAdder1bit___024root___eval_static(VAdder1bit___024root* vlSelf);
void VAdder1bit___024root___eval_initial(VAdder1bit___024root* vlSelf);
void VAdder1bit___024root___eval_settle(VAdder1bit___024root* vlSelf);
void VAdder1bit___024root___eval(VAdder1bit___024root* vlSelf);

void VAdder1bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdder1bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAdder1bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAdder1bit___024root___eval_static(&(vlSymsp->TOP));
        VAdder1bit___024root___eval_initial(&(vlSymsp->TOP));
        VAdder1bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAdder1bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VAdder1bit::eventsPending() { return false; }

uint64_t VAdder1bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VAdder1bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAdder1bit___024root___eval_final(VAdder1bit___024root* vlSelf);

VL_ATTR_COLD void VAdder1bit::final() {
    VAdder1bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAdder1bit::hierName() const { return vlSymsp->name(); }
const char* VAdder1bit::modelName() const { return "VAdder1bit"; }
unsigned VAdder1bit::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VAdder1bit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VAdder1bit___024root__trace_init_top(VAdder1bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAdder1bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder1bit___024root*>(voidSelf);
    VAdder1bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAdder1bit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAdder1bit___024root__trace_register(VAdder1bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAdder1bit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VAdder1bit::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAdder1bit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
