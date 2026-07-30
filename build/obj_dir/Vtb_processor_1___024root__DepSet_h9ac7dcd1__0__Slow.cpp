// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processor_1.h for the primary calling header

#include "Vtb_processor_1__pch.h"
#include "Vtb_processor_1___024root.h"

VL_ATTR_COLD void Vtb_processor_1___024root___eval_static(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_processor_1___024root___eval_final(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor_1___024root___dump_triggers__stl(Vtb_processor_1___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_processor_1___024root___eval_phase__stl(Vtb_processor_1___024root* vlSelf);

VL_ATTR_COLD void Vtb_processor_1___024root___eval_settle(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_processor_1___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_processor_1.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_processor_1___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor_1___024root___dump_triggers__stl(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_processor_1___024root___stl_sequent__TOP__0(Vtb_processor_1___024root* vlSelf);
VL_ATTR_COLD void Vtb_processor_1___024root____Vm_traceActivitySetAll(Vtb_processor_1___024root* vlSelf);

VL_ATTR_COLD void Vtb_processor_1___024root___eval_stl(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_processor_1___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_processor_1___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 8192> Vtb_processor_1__ConstPool__TABLE_hbd9514fb_0;

VL_ATTR_COLD void Vtb_processor_1___024root___stl_sequent__TOP__0(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*12:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data 
        = ((0U == (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs2_addr))
            ? 0U : vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers
           [vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs2_addr]);
    vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
        = ((0U == (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs1_addr))
            ? 0U : vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers
           [vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs1_addr]);
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
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a 
        = ((0U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                         >> 4U))) ? vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data
            : ((1U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                             >> 4U))) ? vlSelfRef.tb_processor_1__DOT__dut__DOT__pc
                : 0U));
    __Vtableidx1 = (((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct7) 
                     << 6U) | (((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3) 
                                << 3U) | (7U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))));
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl 
        = Vtb_processor_1__ConstPool__TABLE_hbd9514fb_0
        [__Vtableidx1];
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__target_base 
        = vlSelfRef.tb_processor_1__DOT__dut__DOT__pc;
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
    vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b 
        = ((8U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
            ? ((8U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                ? vlSelfRef.tb_processor_1__DOT__dut__DOT__immediate
                : 0U) : vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data);
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

VL_ATTR_COLD void Vtb_processor_1___024root___eval_triggers__stl(Vtb_processor_1___024root* vlSelf);

VL_ATTR_COLD bool Vtb_processor_1___024root___eval_phase__stl(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_processor_1___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_processor_1___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor_1___024root___dump_triggers__act(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_processor_1.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_processor_1.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor_1___024root___dump_triggers__nba(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_processor_1.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_processor_1.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_processor_1___024root____Vm_traceActivitySetAll(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtb_processor_1___024root___ctor_var_reset(Vtb_processor_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_processor_1__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_processor_1__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_processor_1__DOT__dut__DOT__target = VL_RAND_RESET_I(32);
    vlSelf->tb_processor_1__DOT__dut__DOT__raw_inst = VL_RAND_RESET_I(32);
    vlSelf->tb_processor_1__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_processor_1__DOT__dut__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->tb_processor_1__DOT__dut__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->tb_processor_1__DOT__dut__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->tb_processor_1__DOT__dut__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_processor_1__DOT__dut__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_processor_1__DOT__dut__DOT__control = VL_RAND_RESET_I(16);
    vlSelf->tb_processor_1__DOT__dut__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->tb_processor_1__DOT__dut__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__next_pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_processor_1__DOT__dut__DOT__u_if_stage__DOT__instruction_memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode = VL_RAND_RESET_I(7);
    vlSelf->tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs1_addr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__target_base = VL_RAND_RESET_I(32);
    vlSelf->tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__raw_target = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_processor_1__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_processor_1__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
