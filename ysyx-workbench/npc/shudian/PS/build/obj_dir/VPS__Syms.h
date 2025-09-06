// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPS__SYMS_H_
#define VERILATED_VPS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VPS.h"

// INCLUDE MODULE CLASSES
#include "VPS___024root.h"

// SYMS CLASS (contains all model state)
class VPS__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPS* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPS___024root                  TOP;

    // CONSTRUCTORS
    VPS__Syms(VerilatedContext* contextp, const char* namep, VPS* modelp);
    ~VPS__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
