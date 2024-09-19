// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAdder4bits.h"
#include "VAdder4bits__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAdder4bits::VAdder4bits(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAdder4bits__Syms(contextp(), _vcname__, this)}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , Cout{vlSymsp->TOP.Cout}
    , S{vlSymsp->TOP.S}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VAdder4bits::VAdder4bits(const char* _vcname__)
    : VAdder4bits(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAdder4bits::~VAdder4bits() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAdder4bits___024root___eval_debug_assertions(VAdder4bits___024root* vlSelf);
#endif  // VL_DEBUG
void VAdder4bits___024root___eval_static(VAdder4bits___024root* vlSelf);
void VAdder4bits___024root___eval_initial(VAdder4bits___024root* vlSelf);
void VAdder4bits___024root___eval_settle(VAdder4bits___024root* vlSelf);
void VAdder4bits___024root___eval(VAdder4bits___024root* vlSelf);

void VAdder4bits::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdder4bits::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAdder4bits___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAdder4bits___024root___eval_static(&(vlSymsp->TOP));
        VAdder4bits___024root___eval_initial(&(vlSymsp->TOP));
        VAdder4bits___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAdder4bits___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VAdder4bits::eventsPending() { return false; }

uint64_t VAdder4bits::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VAdder4bits::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAdder4bits___024root___eval_final(VAdder4bits___024root* vlSelf);

VL_ATTR_COLD void VAdder4bits::final() {
    VAdder4bits___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAdder4bits::hierName() const { return vlSymsp->name(); }
const char* VAdder4bits::modelName() const { return "VAdder4bits"; }
unsigned VAdder4bits::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VAdder4bits::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VAdder4bits___024root__trace_init_top(VAdder4bits___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAdder4bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder4bits___024root*>(voidSelf);
    VAdder4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAdder4bits___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAdder4bits___024root__trace_register(VAdder4bits___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAdder4bits::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VAdder4bits::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAdder4bits___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
