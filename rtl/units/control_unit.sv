`timescale 1ns/1ps

module control_unit (
    // ============== input  ==============
    input  riscv_pkg::opcode_bits_t opcode,
    // ============== output ==============
    output riscv_pkg::control_t     control
);

    import riscv_pkg::*;

    always_comb begin
        control = '0;

        unique case (opcode)
            OPCODE_LOAD: begin
                control.reg_write = 1'b1;
                control.mem_read  = 1'b1;
                control.alu_src.a = ALU_A_RS1;
                control.alu_src.b = ALU_B_IMM;
                control.imm_sel   = IMM_I;
                control.wb_sel    = WB_MEM;
                control.alu_op    = ALU_OP_ADD;
            end

            OPCODE_OP_IMM: begin
                control.reg_write = 1'b1;
                control.alu_src.a = ALU_A_RS1;
                control.alu_src.b = ALU_B_IMM;
                control.imm_sel   = IMM_I;
                control.wb_sel    = WB_ALU;
                control.alu_op    = ALU_OP_IMM;
            end

            OPCODE_AUIPC: begin
                control.reg_write = 1'b1;
                control.alu_src.a = ALU_A_PC;
                control.alu_src.b = ALU_B_IMM;
                control.imm_sel   = IMM_U;
                control.wb_sel    = WB_ALU;
                control.alu_op    = ALU_OP_ADD;
            end

            OPCODE_STORE: begin
                control.mem_write = 1'b1;
                control.alu_src.a = ALU_A_RS1;
                control.alu_src.b = ALU_B_IMM;
                control.imm_sel   = IMM_S;
                control.alu_op    = ALU_OP_ADD;
            end

            OPCODE_OP: begin
                control.reg_write = 1'b1;
                control.alu_src.a = ALU_A_RS1;
                control.alu_src.b = ALU_B_RS2;
                control.imm_sel   = IMM_NONE;
                control.wb_sel    = WB_ALU;
                control.alu_op    = ALU_OP_REG;
            end

            OPCODE_LUI: begin
                control.reg_write = 1'b1;
                control.alu_src.a = ALU_A_ZERO;
                control.alu_src.b = ALU_B_IMM;
                control.imm_sel   = IMM_U;
                control.wb_sel    = WB_ALU;
                control.alu_op    = ALU_OP_ADD;
            end

            OPCODE_BRANCH: begin
                control.pc_sel    = PC_NEXT_BRANCH;
                control.alu_src.a = ALU_A_PC;
                control.alu_src.b = ALU_B_IMM;
                control.imm_sel   = IMM_B;
                control.alu_op    = ALU_OP_ADD;
            end

            OPCODE_JALR: begin
                control.reg_write = 1'b1;
                control.pc_sel    = PC_NEXT_JALR;
                control.alu_src.a = ALU_A_RS1;
                control.alu_src.b = ALU_B_IMM;
                control.imm_sel   = IMM_I;
                control.wb_sel    = WB_PC_4;
                control.alu_op    = ALU_OP_ADD;
            end

            OPCODE_JAL: begin
                control.reg_write = 1'b1;
                control.pc_sel    = PC_NEXT_JAL;
                control.alu_src.a = ALU_A_PC;
                control.alu_src.b = ALU_B_IMM;
                control.imm_sel   = IMM_J;
                control.wb_sel    = WB_PC_4;
                control.alu_op    = ALU_OP_ADD;
            end
            
            OPCODE_SYSTEM: begin
                // pass
            end

            default: begin
                // nop
            end

        endcase
    end
    
endmodule