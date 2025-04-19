// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcountup.h for the primary calling header

#include "Vcountup__pch.h"
#include "Vcountup__Syms.h"
#include "Vcountup___024root.h"

void Vcountup___024root___ctor_var_reset(Vcountup___024root* vlSelf);

Vcountup___024root::Vcountup___024root(Vcountup__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcountup___024root___ctor_var_reset(this);
}

void Vcountup___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcountup___024root::~Vcountup___024root() {
}
