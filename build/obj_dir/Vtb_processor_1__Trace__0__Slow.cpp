// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_processor_1__Syms.h"


VL_ATTR_COLD void Vtb_processor_1___024root__trace_init_sub__TOP__riscv_pkg__0(Vtb_processor_1___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_processor_1___024root__trace_init_sub__TOP__0(Vtb_processor_1___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("riscv_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_processor_1___024root__trace_init_sub__TOP__riscv_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_processor_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"raw_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"pc_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("u_ex_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"alu_ctrl",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"alu_ctrl",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_control_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"alu_op",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"alu_ctrl",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"alu_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"operand_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"operand_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("branch_comparator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+33,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("target_generator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"pc_sel",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+35,0,"target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"target_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"raw_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_id_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"wb_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"raw_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"wb_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"wb_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+43,0,"decoded_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"control",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"decoded_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("control_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"control",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("immediate_generator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"imm_sel",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"decoded_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_if_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"control_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"pc_sel",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"raw_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"pc_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("instruction_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("next_pc_logic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"pc_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"control_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"pc_sel",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+33,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("program_counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"RESET_VECTOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_mem_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"mem_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("data_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"word_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_wb_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"pc_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("wb_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"pc_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"wb_sel",5, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_processor_1___024root__trace_init_sub__TOP__riscv_pkg__0(Vtb_processor_1___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root__trace_init_sub__TOP__riscv_pkg__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+74,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+74,0,"REG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+75,0,"REG_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+76,0,"FUNCT7_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+77,0,"FUNCT7_ALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+78,0,"X0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+79,0,"FUNCT3_BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"FUNCT3_BNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"FUNCT3_BLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+82,0,"FUNCT3_BGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"FUNCT3_BLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+84,0,"FUNCT3_BGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vtb_processor_1___024root__trace_init_top(Vtb_processor_1___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_processor_1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_processor_1___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_processor_1___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_processor_1___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_processor_1___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_processor_1___024root__trace_register(Vtb_processor_1___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_processor_1___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_processor_1___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_processor_1___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_processor_1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_processor_1___024root__trace_const_0_sub_0(Vtb_processor_1___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_processor_1___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root__trace_const_0\n"); );
    // Init
    Vtb_processor_1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processor_1___024root*>(voidSelf);
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_processor_1___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_processor_1___024root__trace_const_0_sub_0(Vtb_processor_1___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+71,(0x100U),32);
    bufp->fullIData(oldp+72,(8U),32);
    bufp->fullIData(oldp+73,(0U),32);
    bufp->fullIData(oldp+74,(0x20U),32);
    bufp->fullIData(oldp+75,(5U),32);
    bufp->fullCData(oldp+76,(0U),7);
    bufp->fullCData(oldp+77,(0x20U),7);
    bufp->fullCData(oldp+78,(0U),5);
    bufp->fullCData(oldp+79,(0U),3);
    bufp->fullCData(oldp+80,(1U),3);
    bufp->fullCData(oldp+81,(4U),3);
    bufp->fullCData(oldp+82,(5U),3);
    bufp->fullCData(oldp+83,(6U),3);
    bufp->fullCData(oldp+84,(7U),3);
}

VL_ATTR_COLD void Vtb_processor_1___024root__trace_full_0_sub_0(Vtb_processor_1___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_processor_1___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root__trace_full_0\n"); );
    // Init
    Vtb_processor_1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processor_1___024root*>(voidSelf);
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_processor_1___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_processor_1___024root__trace_full_0_sub_0(Vtb_processor_1___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processor_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor_1___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT__register_file__DOT__registers[31]),32);
    bufp->fullBit(oldp+33,(((4U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
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
    bufp->fullBit(oldp+34,((0U == vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result)));
    bufp->fullIData(oldp+35,(vlSelfRef.tb_processor_1__DOT__dut__DOT__target),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_processor_1__DOT__dut__DOT__raw_inst),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_processor_1__DOT__dut__DOT__pc),32);
    bufp->fullIData(oldp+38,(((IData)(4U) + vlSelfRef.tb_processor_1__DOT__dut__DOT__pc)),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data),32);
    bufp->fullIData(oldp+41,(vlSelfRef.tb_processor_1__DOT__dut__DOT__immediate),32);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result),32);
    bufp->fullCData(oldp+43,(vlSelfRef.tb_processor_1__DOT__dut__DOT__rd_addr),5);
    bufp->fullSData(oldp+44,(vlSelfRef.tb_processor_1__DOT__dut__DOT__control),16);
    bufp->fullCData(oldp+45,(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3),3);
    bufp->fullCData(oldp+46,(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct7),7);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__alu_ctrl),4);
    bufp->fullIData(oldp+48,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_a),32);
    bufp->fullIData(oldp+49,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b),32);
    bufp->fullCData(oldp+50,((0x1fU & vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__operand_b)),5);
    bufp->fullCData(oldp+51,((7U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))),3);
    bufp->fullCData(oldp+52,((7U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                    >> 3U))),3);
    bufp->fullCData(oldp+53,((3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                    >> 0xbU))),2);
    bufp->fullIData(oldp+54,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__target_base),32);
    bufp->fullIData(oldp+55,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_ex_stage__DOT__target_generator__DOT__raw_target),32);
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                  >> 0xfU))));
    bufp->fullIData(oldp+57,(((((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode) 
                                << 0x19U) | (((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__rd_addr) 
                                              << 0x14U) 
                                             | ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3) 
                                                << 0x11U))) 
                              | (((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs1_addr) 
                                  << 0xcU) | (((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs2_addr) 
                                               << 7U) 
                                              | (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct7))))),32);
    bufp->fullCData(oldp+58,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__control_unit__opcode),7);
    bufp->fullCData(oldp+59,((7U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                    >> 8U))),3);
    bufp->fullCData(oldp+60,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs1_addr),5);
    bufp->fullCData(oldp+61,(vlSelfRef.tb_processor_1__DOT__dut__DOT__u_id_stage__DOT____Vcellinp__register_file__rs2_addr),5);
    bufp->fullIData(oldp+62,(((0x1000U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                               ? vlSelfRef.tb_processor_1__DOT__dut__DOT__target
                               : ((0x800U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                                   ? (((4U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                        ? ((2U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                                ? (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                                   >= vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)
                                                : (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                                   < vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data))
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                                ? VL_GTES_III(32, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)
                                                : VL_LTS_III(32, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data, vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)))
                                        : ((1U & (~ 
                                                  ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3) 
                                                   >> 1U))) 
                                           && ((1U 
                                                & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__funct3))
                                                ? (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                                   != vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data)
                                                : (vlSelfRef.tb_processor_1__DOT__dut__DOT__rs1_data 
                                                   == vlSelfRef.tb_processor_1__DOT__dut__DOT__rs2_data))))
                                       ? vlSelfRef.tb_processor_1__DOT__dut__DOT__target
                                       : ((IData)(4U) 
                                          + vlSelfRef.tb_processor_1__DOT__dut__DOT__pc))
                                   : ((IData)(4U) + vlSelfRef.tb_processor_1__DOT__dut__DOT__pc)))),32);
    bufp->fullBit(oldp+63,((1U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                  >> 0xeU))));
    bufp->fullCData(oldp+65,((0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result 
                                       >> 2U))),8);
    bufp->fullCData(oldp+66,((3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
                                    >> 6U))),2);
    bufp->fullBit(oldp+67,(vlSelfRef.tb_processor_1__DOT__clk));
    bufp->fullBit(oldp+68,(vlSelfRef.tb_processor_1__DOT__rst_n));
    bufp->fullIData(oldp+69,(((0x4000U & (IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control))
                               ? vlSelfRef.tb_processor_1__DOT__dut__DOT__u_mem_stage__DOT__data_memory__DOT__memory
                              [(0xffU & (vlSelfRef.tb_processor_1__DOT__dut__DOT__alu_result 
                                         >> 2U))] : 0U)),32);
    bufp->fullIData(oldp+70,(((0U == (3U & ((IData)(vlSelfRef.tb_processor_1__DOT__dut__DOT__control) 
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
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelfRef.tb_processor_1__DOT__dut__DOT__pc)
                                                 : 0U)))),32);
}
