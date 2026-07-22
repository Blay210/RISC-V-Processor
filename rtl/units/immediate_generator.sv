`timescale 1ns/1ps

module immediate_generator (
    // =============== input  ===============
    input  riscv_pkg::word_t    inst,
    input  riscv_pkg::imm_sel_t imm_sel,

    // =============== output ===============
    output riscv_pkg::word_t    immediate
);

    import riscv_pkg::*;
    
    always_comb begin
        immediate = '0;

        unique case (imm_sel)
            IMM_NONE: immediate = '0;

            IMM_I: immediate = {
                {20{inst[31]}},
                inst[31:20]
            };

            IMM_S: immediate = {
                {20{inst[31]}},
                inst[31:25],
                inst[11:7]
            };

            IMM_B: immediate = {
                {19{inst[31]}},
                inst[31],
                inst[7],
                inst[30:25],
                inst[11:8],
                1'b0
            };

            IMM_U: immediate = {
                inst[31:12],
                12'b0
            };

            IMM_J: immediate = {
                {11{inst[31]}},
                inst[31],
                inst[19:12],
                inst[20],
                inst[30:21],
                1'b0
            };

            default: immediate = '0;
        endcase
    end
    
endmodule