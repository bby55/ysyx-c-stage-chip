// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPS__Syms.h"
#include "VPS.h"
#include "VPS___024root.h"

// FUNCTIONS
VPS__Syms::~VPS__Syms()
{
}

VPS__Syms::VPS__Syms(VerilatedContext* contextp, const char* namep, VPS* modelp)
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
    // Setup scopes
    __Vscope_PS__MY_PS.configure(this, name(), "PS.MY_PS", "MY_PS", -12, VerilatedScope::SCOPE_OTHER);
}
