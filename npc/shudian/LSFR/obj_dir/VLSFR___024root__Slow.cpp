// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLSFR.h for the primary calling header

#include "verilated.h"

#include "VLSFR__Syms.h"
#include "VLSFR___024root.h"

void VLSFR___024root___ctor_var_reset(VLSFR___024root* vlSelf);

VLSFR___024root::VLSFR___024root(VLSFR__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VLSFR___024root___ctor_var_reset(this);
}

void VLSFR___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VLSFR___024root::~VLSFR___024root() {
}
