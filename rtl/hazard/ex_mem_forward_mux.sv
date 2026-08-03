`timescale 1ns/1ps

module ex_mem_forward_mux (
    // ============= input  =============
    input  riscv_pkg::ex_mem_t ex_mem,

    // ============= output =============
    output riscv_pkg::word_t forward_data
);

    import riscv_pkg::*;

    always_comb begin
        forward_data = '0;

        unique case (ex_mem.wb_ctrl.wb_sel)
            WB_ALU: begin
                forward_data = ex_mem.alu_result;
            end

            WB_PC_4: begin
                forward_data = ex_mem.pc4;
            end

            WB_MEM: begin
                //pass
            end

            default: begin
                //pass
            end
        endcase
    end

endmodule
