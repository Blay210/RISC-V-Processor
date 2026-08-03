`timescale 1ns/1ps

module wb_stage (
    // ============= input  =============
    input riscv_pkg::mem_wb_t mem_wb_in,
    
    // ============= output =============
    output riscv_pkg::word_t   wb_data
);

    import riscv_pkg::*;
    
    wb_mux wb_mux (
        // ========== input  ==========
        .pc_4(mem_wb_in.pc4),
        .alu_result(mem_wb_in.alu_result),
        .mem_read_data(mem_wb_in.mem_data),
        .wb_sel(mem_wb_in.wb_ctrl.wb_sel),
        // ========== output ==========
        .wb_data(wb_data)
    );

endmodule
