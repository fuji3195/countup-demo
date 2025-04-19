// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcountup__pch.h"
#include "Vcountup.h"
#include "Vcountup___024root.h"

// FUNCTIONS
Vcountup__Syms::~Vcountup__Syms()
{
}

Vcountup__Syms::Vcountup__Syms(VerilatedContext* contextp, const char* namep, Vcountup* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-8);
    _vm_contextp__->timeprecision(-11);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
