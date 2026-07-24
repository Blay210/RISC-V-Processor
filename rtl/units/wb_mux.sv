`timescale 1ns/1ps

module wb_mux (
    // =============== input  ===============
    input  riscv_pkg::word_t   alu_result,
    input  riscv_pkg::word_t   mem_read_data,
    input  riscv_pkg::word_t   pc_4,
    input  riscv_pkg::wb_sel_t wb_sel,
    // =============== output ===============
    output riscv_pkg::word_t   wb_data
);

    import riscv_pkg::*;

    always_comb begin
        unique case (wb_sel)
            WB_ALU:  wb_data = alu_result;
            WB_MEM:  wb_data = mem_read_data;
            WB_PC_4: wb_data = pc_4;
            default: wb_data = '0;
        endcase
    end
    
endmodule