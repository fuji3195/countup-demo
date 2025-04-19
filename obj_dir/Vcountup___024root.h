// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcountup.h for the primary calling header

#ifndef VERILATED_VCOUNTUP___024ROOT_H_
#define VERILATED_VCOUNTUP___024ROOT_H_  // guard

#include "verilated.h"


class Vcountup__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcountup___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(count,3,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcountup__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcountup___024root(Vcountup__Syms* symsp, const char* v__name);
    ~Vcountup___024root();
    VL_UNCOPYABLE(Vcountup___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
