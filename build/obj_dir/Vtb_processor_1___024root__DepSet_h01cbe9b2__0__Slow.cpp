// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processor_1.h for the primary calling header

#include "Vtb_processor_1__pch.h"
#include "Vtb_processor_1__Syms.h"
#include "Vtb_processor_1___024root.h"

VL_ATTR_COLD void Vtb_processor_1___024root___eval_initial__TOP(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x2f637075U;
    __Vtemp_1[2U] = 0x75696c64U;
    __Vtemp_1[3U] = 0x62U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Loading rtl/programs/program.hex\n",0);
    VL_READMEM_N(true, 32, 256, 0, std::string{"rtl/programs/program.hex"}
                 ,  &(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__instruction_memory__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Instruction Memory Ready.\n",0);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor_1___024root___dump_triggers__stl(Vtb_processor_1___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_processor_1___024root___eval_triggers__stl(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_processor_1___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
