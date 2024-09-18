// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAdderAnybits.h"
#include "VAdderAnybits__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAdderAnybits::VAdderAnybits(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAdderAnybits__Syms(contextp(), _vcname__, this)}
    , Cout{vlSymsp->TOP.Cout}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , S{vlSymsp->TOP.S}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VAdderAnybits::VAdderAnybits(const char* _vcname__)
    : VAdderAnybits(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAdderAnybits::~VAdderAnybits() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAdderAnybits___024root___eval_debug_assertions(VAdderAnybits___024root* vlSelf);
#endif  // VL_DEBUG
void VAdderAnybits___024root___eval_static(VAdderAnybits___024root* vlSelf);
void VAdderAnybits___024root___eval_initial(VAdderAnybits___024root* vlSelf);
void VAdderAnybits___024root___eval_settle(VAdderAnybits___024root* vlSelf);
void VAdderAnybits___024root___eval(VAdderAnybits___024root* vlSelf);

void VAdderAnybits::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdderAnybits::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAdderAnybits___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAdderAnybits___024root___eval_static(&(vlSymsp->TOP));
        VAdderAnybits___024root___eval_initial(&(vlSymsp->TOP));
        VAdderAnybits___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAdderAnybits___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VAdderAnybits::eventsPending() { return false; }

uint64_t VAdderAnybits::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VAdderAnybits::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAdderAnybits___024root___eval_final(VAdderAnybits___024root* vlSelf);

VL_ATTR_COLD void VAdderAnybits::final() {
    VAdderAnybits___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAdderAnybits::hierName() const { return vlSymsp->name(); }
const char* VAdderAnybits::modelName() const { return "VAdderAnybits"; }
unsigned VAdderAnybits::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VAdderAnybits::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VAdderAnybits___024root__trace_init_top(VAdderAnybits___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAdderAnybits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAnybits___024root*>(voidSelf);
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAdderAnybits___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAdderAnybits___024root__trace_register(VAdderAnybits___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAdderAnybits::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VAdderAnybits::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAdderAnybits___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
