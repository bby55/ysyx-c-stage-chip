// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPS.h for the primary calling header

#include "verilated.h"

#include "VPS__Syms.h"
#include "VPS___024root.h"

void VPS___024root___ctor_var_reset(VPS___024root* vlSelf);

VPS___024root::VPS___024root(VPS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPS___024root___ctor_var_reset(this);
}

void VPS___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPS___024root::~VPS___024root() {
}
