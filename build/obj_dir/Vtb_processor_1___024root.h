// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_processor_1.h for the primary calling header

#ifndef VERILATED_VTB_PROCESSOR_1___024ROOT_H_
#define VERILATED_VTB_PROCESSOR_1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_processor_1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_processor_1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_processor_1__DOT__clk;
    CData/*0:0*/ tb_processor_1__DOT__rst_n;
    CData/*4:0*/ tb_processor_1__DOT__dut__DOT__rd_addr;
    CData/*2:0*/ tb_processor_1__DOT__dut__DOT__funct3;
    CData/*6:0*/ tb_processor_1__DOT__dut__DOT__funct7;
    CData/*6:0*/ tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode;
    CData/*4:0*/ tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs2_addr;
    CData/*4:0*/ tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs1_addr;
    CData/*3:0*/ tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_processor_1__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_processor_1__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_processor_1__DOT__dut__DOT__control;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__target;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__raw_inst;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__pc;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__rs1_data;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__rs2_data;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__immediate;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__alu_result;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__next_pc;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__target_base;
    IData/*31:0*/ tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__raw_target;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__instruction_memory__DOT__memory;
    VlUnpacked<IData/*31:0*/, 32> tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers;
    VlUnpacked<IData/*31:0*/, 256> tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_processor_1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_processor_1___024root(Vtb_processor_1__Syms* symsp, const char* v__name);
    ~Vtb_processor_1___024root();
    VL_UNCOPYABLE(Vtb_processor_1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
