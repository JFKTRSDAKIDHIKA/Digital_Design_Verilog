// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbarrel_shifter_8bit.h"
#include "Vbarrel_shifter_8bit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbarrel_shifter_8bit::Vbarrel_shifter_8bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbarrel_shifter_8bit__Syms(contextp(), _vcname__, this)}
    , din{vlSymsp->TOP.din}
    , shamt{vlSymsp->TOP.shamt}
    , L_R{vlSymsp->TOP.L_R}
    , A_L{vlSymsp->TOP.A_L}
    , dout{vlSymsp->TOP.dout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbarrel_shifter_8bit::Vbarrel_shifter_8bit(const char* _vcname__)
    : Vbarrel_shifter_8bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbarrel_shifter_8bit::~Vbarrel_shifter_8bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbarrel_shifter_8bit___024root___eval_debug_assertions(Vbarrel_shifter_8bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vbarrel_shifter_8bit___024root___eval_static(Vbarrel_shifter_8bit___024root* vlSelf);
void Vbarrel_shifter_8bit___024root___eval_initial(Vbarrel_shifter_8bit___024root* vlSelf);
void Vbarrel_shifter_8bit___024root___eval_settle(Vbarrel_shifter_8bit___024root* vlSelf);
void Vbarrel_shifter_8bit___024root___eval(Vbarrel_shifter_8bit___024root* vlSelf);

void Vbarrel_shifter_8bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbarrel_shifter_8bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbarrel_shifter_8bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbarrel_shifter_8bit___024root___eval_static(&(vlSymsp->TOP));
        Vbarrel_shifter_8bit___024root___eval_initial(&(vlSymsp->TOP));
        Vbarrel_shifter_8bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbarrel_shifter_8bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbarrel_shifter_8bit::eventsPending() { return false; }

uint64_t Vbarrel_shifter_8bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbarrel_shifter_8bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbarrel_shifter_8bit___024root___eval_final(Vbarrel_shifter_8bit___024root* vlSelf);

VL_ATTR_COLD void Vbarrel_shifter_8bit::final() {
    Vbarrel_shifter_8bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbarrel_shifter_8bit::hierName() const { return vlSymsp->name(); }
const char* Vbarrel_shifter_8bit::modelName() const { return "Vbarrel_shifter_8bit"; }
unsigned Vbarrel_shifter_8bit::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vbarrel_shifter_8bit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbarrel_shifter_8bit___024root__trace_init_top(Vbarrel_shifter_8bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbarrel_shifter_8bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shifter_8bit___024root*>(voidSelf);
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vbarrel_shifter_8bit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vbarrel_shifter_8bit___024root__trace_register(Vbarrel_shifter_8bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbarrel_shifter_8bit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbarrel_shifter_8bit::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbarrel_shifter_8bit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
