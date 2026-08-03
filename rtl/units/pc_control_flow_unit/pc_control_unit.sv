`timescale 1ns/1ps

module pc_control_unit (
    // ============= input  =============
    input logic valid,
    input riscv_pkg::word_t   pc,
    input riscv_pkg::word_t   forwarded_rs1,
    input riscv_pkg::word_t   forwarded_rs2,
    input riscv_pkg::word_t   immediate,
    input riscv_pkg::funct3_t funct3,
    input riscv_pkg::pc_sel_t pc_sel,
    // ============= output =============
    output logic redirect_valid,
    output riscv_pkg::word_t redirect_pc
);

    import riscv_pkg::*;

    logic branch_taken;
    word_t pc_target;


    always_comb begin
        redirect_valid = 1'b0;
        redirect_pc    = pc_target;

        if (valid) begin
            unique case (pc_sel)
                PC_NEXT_BRANCH: begin
                    redirect_valid = branch_taken;
                end

                PC_NEXT_JAL,
                PC_NEXT_JALR: begin
                    redirect_valid = 1'b1;
                end

                default: begin
                    redirect_valid = 1'b0;
                end
            endcase
        end
    end


    branch_comparator branch_comparator (
        // ========== input  ==========
        .rs1_data(forwarded_rs1),
        .rs2_data(forwarded_rs2),
        .funct3(funct3),
        // ========== output ==========
        .branch_taken(branch_taken)
    );

    pc_target_generator pc_target_generator (
        // ========== input  ==========
        .pc(pc),
        .pc_sel(pc_sel),
        .rs1_data(forwarded_rs1),
        .immediate(immediate),
        // ========== output ==========
        .pc_target(pc_target)
    );

endmodule
