// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLSFR__SYMS_H_
#define VERILATED_VLSFR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VLSFR.h"

// INCLUDE MODULE CLASSES
#include "VLSFR___024root.h"

// SYMS CLASS (contains all model state)
class VLSFR__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VLSFR* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VLSFR___024root                TOP;

    // CONSTRUCTORS
    VLSFR__Syms(VerilatedContext* contextp, const char* namep, VLSFR* modelp);
    ~VLSFR__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
