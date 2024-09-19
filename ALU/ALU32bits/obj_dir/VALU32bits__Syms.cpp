// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VALU32bits__Syms.h"
#include "VALU32bits.h"
#include "VALU32bits___024root.h"

// FUNCTIONS
VALU32bits__Syms::~VALU32bits__Syms()
{
}

VALU32bits__Syms::VALU32bits__Syms(VerilatedContext* contextp, const char* namep, VALU32bits* modelp)
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
