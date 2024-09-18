// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VADDER8BITS__SYMS_H_
#define VERILATED_VADDER8BITS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VAdder8bits.h"

// INCLUDE MODULE CLASSES
#include "VAdder8bits___024root.h"

// SYMS CLASS (contains all model state)
class VAdder8bits__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VAdder8bits* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VAdder8bits___024root          TOP;

    // CONSTRUCTORS
    VAdder8bits__Syms(VerilatedContext* contextp, const char* namep, VAdder8bits* modelp);
    ~VAdder8bits__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
