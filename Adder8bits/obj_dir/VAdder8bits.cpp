// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAdder8bits.h"
#include "VAdder8bits__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAdder8bits::VAdder8bits(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAdder8bits__Syms(contextp(), _vcname__, this)}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , Cout{vlSymsp->TOP.Cout}
    , S{vlSymsp->TOP.S}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VAdder8bits::VAdder8bits(const char* _vcname__)
    : VAdder8bits(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAdder8bits::~VAdder8bits() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAdder8bits___024root___eval_debug_assertions(VAdder8bits___024root* vlSelf);
#endif  // VL_DEBUG
void VAdder8bits___024root___eval_static(VAdder8bits___024root* vlSelf);
void VAdder8bits___024root___eval_initial(VAdder8bits___024root* vlSelf);
void VAdder8bits___024root___eval_settle(VAdder8bits___024root* vlSelf);
void VAdder8bits___024root___eval(VAdder8bits___024root* vlSelf);

void VAdder8bits::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdder8bits::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAdder8bits___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAdder8bits___024root___eval_static(&(vlSymsp->TOP));
        VAdder8bits___024root___eval_initial(&(vlSymsp->TOP));
        VAdder8bits___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAdder8bits___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VAdder8bits::eventsPending() { return false; }

uint64_t VAdder8bits::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VAdder8bits::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAdder8bits___024root___eval_final(VAdder8bits___024root* vlSelf);

VL_ATTR_COLD void VAdder8bits::final() {
    VAdder8bits___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAdder8bits::hierName() const { return vlSymsp->name(); }
const char* VAdder8bits::modelName() const { return "VAdder8bits"; }
unsigned VAdder8bits::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VAdder8bits::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VAdder8bits___024root__trace_init_top(VAdder8bits___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAdder8bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder8bits___024root*>(voidSelf);
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAdder8bits___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAdder8bits___024root__trace_register(VAdder8bits___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAdder8bits::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VAdder8bits::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAdder8bits___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
