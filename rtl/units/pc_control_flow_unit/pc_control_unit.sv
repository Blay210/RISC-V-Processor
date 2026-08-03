`timescale 1ns/1ps

module pc_control_unit (
    // ============= input  =============
    input riscv_pkg::id_ex_t id_ex,
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

        if (id_ex.valid) begin
            unique case (id_ex.pc_sel)
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
        .rs1_data(id_ex.rs1_data),
        .rs2_data(id_ex.rs2_data),
        .funct3(id_ex.funct3),
        // ========== output ==========
        .branch_taken(branch_taken)
    );

    pc_target_generator pc_target_generator (
        // ========== input  ==========
        .pc(id_ex.pc),
        .pc_sel(id_ex.pc_sel),
        .rs1_data(id_ex.rs1_data),
        .immediate(id_ex.immediate),
        // ========== output ==========
        .pc_target(pc_target)
    );

endmodule
