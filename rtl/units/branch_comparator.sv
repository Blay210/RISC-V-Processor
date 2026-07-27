`timescale 1ns/1ps

module branch_comparator (
    input  riscv_pkg::word_t   rs1_data,
    input  riscv_pkg::word_t   rs2_data,
    input  riscv_pkg::funct3_t funct3,

    output logic branch_taken
);
    
    import riscv_pkg::*;

    always_comb begin
        branch_taken = 1'b0;

        unique case (funct3)
            FUNCT3_BEQ: begin
                branch_taken = (rs1_data == rs2_data);
            end
            
            FUNCT3_BNE: begin
                branch_taken = (rs1_data != rs2_data);
            end

            FUNCT3_BLT: begin
                branch_taken = ($signed(rs1_data) < $signed(rs2_data));
            end
            
            FUNCT3_BGE: begin
                branch_taken = ($signed(rs1_data) >= $signed(rs2_data));
            end

            FUNCT3_BLTU: begin
                branch_taken = (rs1_data < rs2_data);
            end

            FUNCT3_BGEU: begin
                branch_taken = (rs1_data >= rs2_data);
            end

            default: begin
                branch_taken = 0;
            end
        endcase
    end

endmodule