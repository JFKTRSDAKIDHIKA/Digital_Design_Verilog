// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAdderAnybits__Syms.h"
#include "VAdderAnybits.h"
#include "VAdderAnybits___024root.h"

// FUNCTIONS
VAdderAnybits__Syms::~VAdderAnybits__Syms()
{
}

VAdderAnybits__Syms::VAdderAnybits__Syms(VerilatedContext* contextp, const char* namep, VAdderAnybits* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
