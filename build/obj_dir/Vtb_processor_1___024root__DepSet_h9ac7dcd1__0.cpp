// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processor_1.h for the primary calling header

#include "Vtb_processor_1__pch.h"
#include "Vtb_processor_1___024root.h"

VL_ATTR_COLD void Vtb_processor_1___024root___eval_initial__TOP(Vtb_processor_1___024root* vlSelf);
VlCoroutine Vtb_processor_1___024root___eval_initial__TOP__Vtiming__0(Vtb_processor_1___024root* vlSelf);
VlCoroutine Vtb_processor_1___024root___eval_initial__TOP__Vtiming__1(Vtb_processor_1___024root* vlSelf);
VlCoroutine Vtb_processor_1___024root___eval_initial__TOP__Vtiming__2(Vtb_processor_1___024root* vlSelf);

void Vtb_processor_1___024root___eval_initial(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_processor_1___024root___eval_initial__TOP(vlSelf);
    Vtb_processor_1___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_processor_1___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_processor_1___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_processor_1__DOT__clk__0 
        = vlSelfRef.tb_processor_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_processor_1__DOT__rst_n__0 
        = vlSelfRef.tb_processor_1__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_processor_1___024root___eval_initial__TOP__Vtiming__0(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_processor_1__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/tb_processor_1.sv", 
                                             24);
        vlSelfRef.tb_processor_1__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.tb_processor_1__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_processor_1___024root___eval_initial__TOP__Vtiming__1(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_processor_1__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "sim/tb_processor_1.sv", 
                                         34);
    vlSelfRef.tb_processor_1__DOT__rst_n = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_processor_1___024root___eval_initial__TOP__Vtiming__2(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "sim/tb_processor_1.sv", 
                                         43);
    VL_WRITEF_NX("\n==============================\nRegister Dump\n==============================\nx1 = %0#\nx2 = %0#\nx3 = %0#\nx4 = %0#\n",0,
                 32,vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers
                 [1U],32,vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers
                 [2U],32,vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers
                 [3U],32,vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers
                 [4U]);
    VL_FINISH_MT("sim/tb_processor_1.sv", 62, "");
}

void Vtb_processor_1___024root___eval_act(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_processor_1___024root___nba_sequent__TOP__0(Vtb_processor_1___024root* vlSelf);
void Vtb_processor_1___024root___nba_sequent__TOP__1(Vtb_processor_1___024root* vlSelf);
void Vtb_processor_1___024root___nba_comb__TOP__0(Vtb_processor_1___024root* vlSelf);

void Vtb_processor_1___024root___eval_nba(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_processor_1___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_processor_1___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vtb_processor_1___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_processor_1___024root___nba_sequent__TOP__0(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0;
    __VdlyVal__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0;
    __VdlyDim0__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0;
    __VdlySet__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0;
    __VdlyVal__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0;
    __VdlyDim0__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0;
    __VdlySet__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0 = 0;
    // Body
    __VdlySet__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0 = 0U;
    __VdlySet__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0 = 0U;
    if ((0x2000U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))) {
        __VdlyVal__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0 
            = vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data;
        __VdlyDim0__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0 
            = (0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result 
                        >> 2U));
        __VdlySet__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
          >> 0xfU) & (0U != (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__rd_addr)))) {
        __VdlyVal__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0 
            = ((0U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                             >> 6U))) ? vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result
                : ((1U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                 >> 6U))) ? ((0x4000U 
                                              & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                                              ? vlSelfRef.tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory
                                             [(0xffU 
                                               & (vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result 
                                                  >> 2U))]
                                              : 0U)
                    : ((2U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                     >> 6U))) ? ((IData)(4U) 
                                                 + vlSelfRef.tb_processor_1__DOT__dut__DOT__pc)
                        : 0U)));
        __VdlyDim0__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0 
            = vlSelfRef.tb_processor_1__DOT__dut__DOT__rd_addr;
        __VdlySet__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0 = 1U;
    }
    if (__VdlySet__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0) {
        vlSelfRef.tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory[__VdlyDim0__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0] 
            = __VdlyVal__tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory__v0;
    }
    if (__VdlySet__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0) {
        vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[__VdlyDim0__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0] 
            = __VdlyVal__tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers__v0;
    }
}

extern const VlUnpacked<CData/*3:0*/, 8192> Vtb_processor_1__ConstPool__TABLE_hbd9514fb_0;

VL_INLINE_OPT void Vtb_processor_1___024root___nba_sequent__TOP__1(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*12:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb_processor_1__DOT__dut__DOT__pc = ((IData)(vlSelfRef.tb_processor_1__DOT__rst_n)
                                                    ? vlSelfRef.tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__next_pc
                                                    : 0U);
    vlSelfRef.tb_processor_1__DOT__dut__DOT__rd_addr 
        = (0x1fU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__instruction_memory__DOT__memory
                    [(0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__pc 
                               >> 2U))] >> 7U));
    vlSelfRef.tb_processor_1__DOT__dut__DOT__funct7 
        = (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__instruction_memory__DOT__memory
           [(0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__pc 
                      >> 2U))] >> 0x19U);
    vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3 
        = (7U & (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__instruction_memory__DOT__memory
                 [(0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__pc 
                            >> 2U))] >> 0xcU));
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs2_addr 
        = (0x1fU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__instruction_memory__DOT__memory
                    [(0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__pc 
                               >> 2U))] >> 0x14U));
    vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
        = vlSelfRef.tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__instruction_memory__DOT__memory
        [(0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__pc 
                   >> 2U))];
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs1_addr 
        = (0x1fU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__instruction_memory__DOT__memory
                    [(0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__pc 
                               >> 2U))] >> 0xfU));
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode 
        = (0x7fU & vlSelfRef.tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__instruction_memory__DOT__memory
           [(0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__pc 
                      >> 2U))]);
    vlSelfRef.tb_processor_1__DOT__dut__DOT__control = 0U;
    if ((0x40U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                    if ((4U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                        if ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                                vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                                    = (0x8000U | (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control));
                                vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                                    = (0x1598U | (0xe000U 
                                                  & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                    if ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                        if ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                            vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                                = (0x8000U | (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control));
                            vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                                = (0x1988U | (0xe000U 
                                              & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (0x800U | (0xe7ffU & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (0x18U | (0xffc7U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (0x300U | (0xf8ffU & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (0xfff8U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control));
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                    if ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                        if ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                            vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                                = (0x8000U | (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control));
                            vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                                = (0x428U | (0xf800U 
                                             & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (0x8000U | (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control));
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (2U | (0xf800U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (0x2000U | (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control));
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (8U | (0xffc7U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (0x200U | (0xf8ffU & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (0xfff8U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control));
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                if ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (0x8000U | (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control));
                        vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                            = (0x418U | (0xf800U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                    vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                        = (0x8000U | (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control));
                    vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                        = (0x10bU | (0xf800U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode))) {
                    vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                        = (0xc000U | (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control));
                    vlSelfRef.tb_processor_1__DOT__dut__DOT__control 
                        = (0x148U | (0xf800U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control)));
                }
            }
        }
    }
    __Vtableidx1 = (((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct7) 
                     << 6U) | (((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3) 
                                << 3U) | (7U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))));
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl 
        = Vtb_processor_1__ConstPool__TABLE_hbd9514fb_0
        [__Vtableidx1];
    vlSelfRef.tb_processor_1__DOT__dut__DOT__immediate 
        = ((0x400U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
            ? ((0x200U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                ? 0U : ((0x100U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                         ? ((((- (IData)((vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                          >> 0x1fU))) 
                              << 0x15U) | (0x100000U 
                                           & (vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                              >> 0xbU))) 
                            | (((0xff000U & vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst) 
                                | (0x800U & (vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                             >> 9U))) 
                               | (0x7feU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                            >> 0x14U))))
                         : (0xfffff000U & vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst)))
            : ((0x200U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                ? ((0x100U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                    ? (((- (IData)((vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                    >> 0x1fU))) << 0xdU) 
                       | (((0x1000U & (vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                       >> 0x13U)) | 
                           (0x800U & (vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                      << 4U))) | ((0x7e0U 
                                                   & (vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                                        >> 7U)))))
                    : (((- (IData)((vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                                      >> 7U)))))
                : ((0x100U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                    ? (((- (IData)((vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst 
                          >> 0x14U)) : 0U)));
}

VL_INLINE_OPT void Vtb_processor_1___024root___nba_comb__TOP__0(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data 
        = ((0U == (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs2_addr))
            ? 0U : vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers
           [vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs2_addr]);
    vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
        = ((0U == (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs1_addr))
            ? 0U : vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers
           [vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs1_addr]);
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b 
        = ((8U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
            ? ((8U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                ? vlSelfRef.tb_processor_1__DOT__dut__DOT__immediate
                : 0U) : vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data);
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a 
        = ((0U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                         >> 4U))) ? vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data
            : ((1U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                             >> 4U))) ? vlSelfRef.tb_processor_1__DOT__dut__DOT__pc
                : 0U));
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__target_base 
        = vlSelfRef.tb_processor_1__DOT__dut__DOT__pc;
    vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result = 0U;
    if ((8U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl) 
                          >> 1U)))) {
                vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result 
                    = ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl))
                        ? (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a 
                           < vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b)
                        : VL_LTS_III(32, vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a, vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b));
            }
        }
    } else {
        vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result 
            = ((4U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl))
                ? ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl))
                    ? ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a, 
                                         (0x1fU & vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b))
                        : (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a 
                           >> (0x1fU & vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b)))
                    : ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl))
                        ? (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a 
                           << (0x1fU & vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b))
                        : (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a 
                           ^ vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b)))
                : ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl))
                    ? ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl))
                        ? (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a 
                           | vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b)
                        : (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a 
                           & vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b))
                    : ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl))
                        ? (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a 
                           - vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b)
                        : (vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a 
                           + vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b))));
    }
    if ((3U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                      >> 0xbU)))) {
        vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__target_base 
            = vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data;
    }
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__raw_target 
        = (vlSelfRef.tb_processor_1__DOT__dut__DOT__immediate 
           + vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__target_base);
    vlSelfRef.tb_processor_1__DOT__dut__DOT__target 
        = ((3U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                         >> 0xbU))) ? (0xfffffffeU 
                                       & vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__raw_target)
            : vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__raw_target);
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__next_pc 
        = ((0x1000U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
            ? vlSelfRef.tb_processor_1__DOT__dut__DOT__target
            : ((0x800U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                ? (((4U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                     ? ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                         ? ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                             ? (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                >= vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)
                             : (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                < vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data))
                         : ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                             ? VL_GTES_III(32, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)
                             : VL_LTS_III(32, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)))
                     : ((1U & (~ ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3) 
                                  >> 1U))) && ((1U 
                                                & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                                ? (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                                   != vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)
                                                : (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                                   == vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data))))
                    ? vlSelfRef.tb_processor_1__DOT__dut__DOT__target
                    : ((IData)(4U) + vlSelfRef.tb_processor_1__DOT__dut__DOT__pc))
                : ((IData)(4U) + vlSelfRef.tb_processor_1__DOT__dut__DOT__pc)));
}

void Vtb_processor_1___024root___timing_resume(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_processor_1___024root___eval_triggers__act(Vtb_processor_1___024root* vlSelf);

bool Vtb_processor_1___024root___eval_phase__act(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_processor_1___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_processor_1___024root___timing_resume(vlSelf);
        Vtb_processor_1___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_processor_1___024root___eval_phase__nba(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_processor_1___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor_1___024root___dump_triggers__nba(Vtb_processor_1___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor_1___024root___dump_triggers__act(Vtb_processor_1___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_processor_1___024root___eval(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_processor_1___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_processor_1.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_processor_1___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/tb_processor_1.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_processor_1___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_processor_1___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_processor_1___024root___eval_debug_assertions(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
