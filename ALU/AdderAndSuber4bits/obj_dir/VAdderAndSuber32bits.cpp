// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAdderAndSuber32bits.h"
#include "VAdderAndSuber32bits__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAdderAndSuber32bits::VAdderAndSuber32bits(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAdderAndSuber32bits__Syms(contextp(), _vcname__, this)}
    , Cin{vlSymsp->TOP.Cin}
    , Cout{vlSymsp->TOP.Cout}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , S{vlSymsp->TOP.S}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VAdderAndSuber32bits::VAdderAndSuber32bits(const char* _vcname__)
    : VAdderAndSuber32bits(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAdderAndSuber32bits::~VAdderAndSuber32bits() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAdderAndSuber32bits___024root___eval_debug_assertions(VAdderAndSuber32bits___024root* vlSelf);
#endif  // VL_DEBUG
void VAdderAndSuber32bits___024root___eval_static(VAdderAndSuber32bits___024root* vlSelf);
void VAdderAndSuber32bits___024root___eval_initial(VAdderAndSuber32bits___024root* vlSelf);
void VAdderAndSuber32bits___024root___eval_settle(VAdderAndSuber32bits___024root* vlSelf);
void VAdderAndSuber32bits___024root___eval(VAdderAndSuber32bits___024root* vlSelf);

void VAdderAndSuber32bits::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdderAndSuber32bits::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAdderAndSuber32bits___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAdderAndSuber32bits___024root___eval_static(&(vlSymsp->TOP));
        VAdderAndSuber32bits___024root___eval_initial(&(vlSymsp->TOP));
        VAdderAndSuber32bits___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAdderAndSuber32bits___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VAdderAndSuber32bits::eventsPending() { return false; }

uint64_t VAdderAndSuber32bits::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VAdderAndSuber32bits::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAdderAndSuber32bits___024root___eval_final(VAdderAndSuber32bits___024root* vlSelf);

VL_ATTR_COLD void VAdderAndSuber32bits::final() {
    VAdderAndSuber32bits___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAdderAndSuber32bits::hierName() const { return vlSymsp->name(); }
const char* VAdderAndSuber32bits::modelName() const { return "VAdderAndSuber32bits"; }
unsigned VAdderAndSuber32bits::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VAdderAndSuber32bits::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VAdderAndSuber32bits___024root__trace_init_top(VAdderAndSuber32bits___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAdderAndSuber32bits___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdderAndSuber32bits___024root*>(voidSelf);
    VAdderAndSuber32bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAdderAndSuber32bits___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAdderAndSuber32bits___024root__trace_register(VAdderAndSuber32bits___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAdderAndSuber32bits::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VAdderAndSuber32bits::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAdderAndSuber32bits___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
