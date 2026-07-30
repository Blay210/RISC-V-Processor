// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_processor_1__Syms.h"


void Vtb_processor_1___024root__trace_chg_0_sub_0(Vtb_processor_1___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_processor_1___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root__trace_chg_0\n"); );
    // Init
    Vtb_processor_1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processor_1___024root*>(voidSelf);
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_processor_1___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_processor_1___024root__trace_chg_0_sub_0(Vtb_processor_1___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+32,(((4U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
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
                                             >> 1U))) 
                                   && ((1U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                        ? (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                           != vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)
                                        : (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                           == vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data))))));
        bufp->chgBit(oldp+33,((0U == vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result)));
        bufp->chgIData(oldp+34,(vlSelfRef.tb_processor_1__DOT__dut__DOT__target),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_processor_1__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+37,(((IData)(4U) + vlSelfRef.tb_processor_1__DOT__dut__DOT__pc)),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_processor_1__DOT__dut__DOT__immediate),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result),32);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_processor_1__DOT__dut__DOT__rd_addr),5);
        bufp->chgSData(oldp+43,(vlSelfRef.tb_processor_1__DOT__dut__DOT__control),16);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3),3);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct7),7);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl),4);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a),32);
        bufp->chgIData(oldp+48,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b),32);
        bufp->chgCData(oldp+49,((0x1fU & vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b)),5);
        bufp->chgCData(oldp+50,((7U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))),3);
        bufp->chgCData(oldp+51,((7U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                       >> 3U))),3);
        bufp->chgCData(oldp+52,((3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                       >> 0xbU))),2);
        bufp->chgIData(oldp+53,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__target_base),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__raw_target),32);
        bufp->chgBit(oldp+55,((1U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                     >> 0xfU))));
        bufp->chgIData(oldp+56,(((((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode) 
                                   << 0x19U) | (((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__rd_addr) 
                                                 << 0x14U) 
                                                | ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3) 
                                                   << 0x11U))) 
                                 | (((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs1_addr) 
                                     << 0xcU) | (((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs2_addr) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct7))))),32);
        bufp->chgCData(oldp+57,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode),7);
        bufp->chgCData(oldp+58,((7U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                       >> 8U))),3);
        bufp->chgCData(oldp+59,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs1_addr),5);
        bufp->chgCData(oldp+60,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs2_addr),5);
        bufp->chgIData(oldp+61,(((0x1000U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                                  ? vlSelfRef.tb_processor_1__DOT__dut__DOT__target
                                  : ((0x800U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                                      ? (((4U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                           ? ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                                   ? 
                                                  (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                                   >= vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)
                                                   : 
                                                  (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                                   < vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                                   ? 
                                                  VL_GTES_III(32, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)
                                                   : 
                                                  VL_LTS_III(32, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)))
                                           : ((1U & 
                                               (~ ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3) 
                                                   >> 1U))) 
                                              && ((1U 
                                                   & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                                   ? 
                                                  (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                                   != vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)
                                                   : 
                                                  (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                                   == vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data))))
                                          ? vlSelfRef.tb_processor_1__DOT__dut__DOT__target
                                          : ((IData)(4U) 
                                             + vlSelfRef.tb_processor_1__DOT__dut__DOT__pc))
                                      : ((IData)(4U) 
                                         + vlSelfRef.tb_processor_1__DOT__dut__DOT__pc)))),32);
        bufp->chgBit(oldp+62,((1U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                     >> 0xeU))));
        bufp->chgCData(oldp+64,((0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result 
                                          >> 2U))),8);
        bufp->chgCData(oldp+65,((3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                       >> 6U))),2);
    }
    bufp->chgBit(oldp+66,(vlSelfRef.tb_processor_1__DOT__clk));
    bufp->chgBit(oldp+67,(vlSelfRef.tb_processor_1__DOT__rst_n));
    bufp->chgIData(oldp+68,(((0x4000U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                              ? vlSelfRef.tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory
                             [(0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result 
                                        >> 2U))] : 0U)),32);
    bufp->chgIData(oldp+69,(((0U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                           >> 6U)))
                              ? vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result
                              : ((1U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                               >> 6U)))
                                  ? ((0x4000U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                                      ? vlSelfRef.tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory
                                     [(0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result 
                                                >> 2U))]
                                      : 0U) : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                                    >> 6U)))
                                                ? ((IData)(4U) 
                                                   + vlSelfRef.tb_processor_1__DOT__dut__DOT__pc)
                                                : 0U)))),32);
}

void Vtb_processor_1___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root__trace_cleanup\n"); );
    // Init
    Vtb_processor_1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processor_1___024root*>(voidSelf);
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
