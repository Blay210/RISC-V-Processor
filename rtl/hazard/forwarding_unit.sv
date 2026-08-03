`timescale 1ns/1ps

module forwarding_unit (
    // =============== input  ===============
    input  riscv_pkg::id_ex_t  id_ex,
    input  riscv_pkg::ex_mem_t ex_mem,
    input  riscv_pkg::mem_wb_t mem_wb,
    // =============== output ===============
    output riscv_pkg::forward_sel_t forward_a,
    output riscv_pkg::forward_sel_t forward_b
);

    import riscv_pkg::*;

    // forward a (operand a)
    always_comb begin

        forward_a = FWD_NONE;

        if (ex_mem.valid &&
            ex_mem.wb_ctrl.reg_write &&
            ex_mem.rd_addr != X0 &&
            ex_mem.rd_addr == id_ex.rs1_addr)
        begin
            forward_a = FWD_EXMEM;
        end

        else if (mem_wb.valid &&
                 mem_wb.wb_ctrl.reg_write &&
                 mem_wb.rd_addr != X0 &&
                 mem_wb.rd_addr == id_ex.rs1_addr)
        begin
            forward_a = FWD_MEMWB;
        end

    end

    
    // forward b (operand a)
    always_comb begin
        
        forward_b = FWD_NONE;

        if (ex_mem.valid &&
            ex_mem.wb_ctrl.reg_write &&
            ex_mem.rd_addr != X0 &&
            ex_mem.rd_addr == id_ex.rs2_addr)
        begin
            forward_b = FWD_EXMEM;
        end

        else if (mem_wb.valid &&
                 mem_wb.wb_ctrl.reg_write &&
                 mem_wb.rd_addr != X0 &&
                 mem_wb.rd_addr == id_ex.rs2_addr)
        begin
            forward_b = FWD_MEMWB;
        end

    end
    
endmodule
