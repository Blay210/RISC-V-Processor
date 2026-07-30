// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processor_1.h for the primary calling header

#include "Vtb_processor_1__pch.h"
#include "Vtb_processor_1__Syms.h"
#include "Vtb_processor_1___024root.h"

void Vtb_processor_1___024root___ctor_var_reset(Vtb_processor_1___024root* vlSelf);

Vtb_processor_1___024root::Vtb_processor_1___024root(Vtb_processor_1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_processor_1___024root___ctor_var_reset(this);
}

void Vtb_processor_1___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_processor_1___024root::~Vtb_processor_1___024root() {
}
