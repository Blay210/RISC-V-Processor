`timescale 1ns/1ps

module control_unit (
    // ============== input  ==============
    input  logic rst_n,
    input  riscv_pkg::opcode_bits_t opcode,
    // ============== output ==============
    output riscv_pkg::pc_sel_t   pc_sel,
    output riscv_pkg::imm_sel_t  imm_sel,
    output riscv_pkg::ex_ctrl_t  ex_ctrl,
    output riscv_pkg::mem_ctrl_t mem_ctrl,
    output riscv_pkg::wb_ctrl_t  wb_ctrl
);

    import riscv_pkg::*;

    always_comb begin
        pc_sel = pc_sel_t'(0);
        imm_sel = imm_sel_t'(0);
        ex_ctrl = '0;
        mem_ctrl = '0;
        wb_ctrl = '0;

        if (!rst_n) begin
            pc_sel = pc_sel_t'(0);
            imm_sel = imm_sel_t'(0);
            ex_ctrl = '0;
            mem_ctrl = '0;
            wb_ctrl = '0;
        end
        else begin
            unique case (opcode)
                OPCODE_LOAD: begin
                    imm_sel = IMM_I;
                    ex_ctrl.alu_src.a = ALU_A_RS1;
                    ex_ctrl.alu_src.b = ALU_B_IMM;
                    ex_ctrl.alu_op    = ALU_OP_ADD;
                    mem_ctrl.mem_read = 1'b1;
                    wb_ctrl.wb_sel    = WB_MEM;
                    wb_ctrl.reg_write = 1'b1;
                end

                OPCODE_OP_IMM: begin
                    imm_sel = IMM_I;
                    ex_ctrl.alu_src.a = ALU_A_RS1;
                    ex_ctrl.alu_src.b = ALU_B_IMM;
                    ex_ctrl.alu_op    = ALU_OP_IMM;
                    wb_ctrl.wb_sel    = WB_ALU;
                    wb_ctrl.reg_write = 1'b1;
                end

                OPCODE_AUIPC: begin
                    imm_sel = IMM_U;
                    ex_ctrl.alu_src.a = ALU_A_PC;
                    ex_ctrl.alu_src.b = ALU_B_IMM;
                    ex_ctrl.alu_op    = ALU_OP_ADD;
                    wb_ctrl.wb_sel    = WB_ALU;
                    wb_ctrl.reg_write = 1'b1;
                end

                OPCODE_STORE: begin
                    imm_sel = IMM_S;
                    ex_ctrl.alu_src.a = ALU_A_RS1;
                    ex_ctrl.alu_src.b = ALU_B_IMM;
                    ex_ctrl.alu_op    = ALU_OP_ADD;
                    mem_ctrl.mem_write = 1'b1;
                end

                OPCODE_OP: begin
                    imm_sel = IMM_NONE;
                    ex_ctrl.alu_src.a = ALU_A_RS1;
                    ex_ctrl.alu_src.b = ALU_B_RS2;
                    ex_ctrl.alu_op    = ALU_OP_REG;
                    wb_ctrl.wb_sel    = WB_ALU;
                    wb_ctrl.reg_write = 1'b1;
                end

                OPCODE_LUI: begin
                    imm_sel = IMM_U;
                    ex_ctrl.alu_src.a = ALU_A_ZERO;
                    ex_ctrl.alu_src.b = ALU_B_IMM;
                    ex_ctrl.alu_op    = ALU_OP_ADD;
                    wb_ctrl.wb_sel    = WB_ALU;
                    wb_ctrl.reg_write = 1'b1;
                end

                OPCODE_BRANCH: begin
                    pc_sel  = PC_NEXT_BRANCH;
                    imm_sel = IMM_B;
                    ex_ctrl.alu_src.a = ALU_A_PC;
                    ex_ctrl.alu_src.b = ALU_B_IMM;
                    ex_ctrl.alu_op    = ALU_OP_ADD;
                end

                OPCODE_JALR: begin
                    pc_sel  = PC_NEXT_JALR;
                    imm_sel = IMM_I;
                    ex_ctrl.alu_src.a = ALU_A_RS1;
                    ex_ctrl.alu_src.b = ALU_B_IMM;
                    ex_ctrl.alu_op    = ALU_OP_ADD;
                    wb_ctrl.wb_sel    = WB_PC_4;
                    wb_ctrl.reg_write = 1'b1;
                end

                OPCODE_JAL: begin
                    pc_sel  = PC_NEXT_JAL;
                    imm_sel = IMM_J;
                    ex_ctrl.alu_src.a = ALU_A_PC;
                    ex_ctrl.alu_src.b = ALU_B_IMM;
                    ex_ctrl.alu_op    = ALU_OP_ADD;
                    wb_ctrl.wb_sel    = WB_PC_4;
                    wb_ctrl.reg_write = 1'b1;
                end
                
                OPCODE_SYSTEM: begin
                    //pass
                end

                default: begin
                    //pass
                end

            endcase
        end
    end
    
endmodule
