// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vtb_processor_1___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"ALU_ADD", "ALU_SUB", "ALU_AND", "ALU_OR", 
                                "ALU_XOR", "ALU_SLL", 
                                "ALU_SRL", "ALU_SRA", 
                                "ALU_SLT", "ALU_SLTU"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001"};
        tracep->declDTypeEnum(1, "riscv_pkg::alu_ctrl_t", 10, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ALU_OP_ADD", "ALU_OP_BRANCH", "ALU_OP_REG", 
                                "ALU_OP_IMM"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(2, "riscv_pkg::alu_op_t", 4, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PC_NEXT_4", "PC_NEXT_BRANCH", "PC_NEXT_JAL", 
                                "PC_NEXT_JALR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(3, "riscv_pkg::pc_sel_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IMM_NONE", "IMM_I", "IMM_S", "IMM_B", "IMM_U", 
                                "IMM_J"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(4, "riscv_pkg::imm_sel_t", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"WB_ALU", "WB_MEM", "WB_PC_4"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(5, "riscv_pkg::wb_sel_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vtb_processor_1___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtb_processor_1___024root__traceDeclTypesSub0(tracep);
}
