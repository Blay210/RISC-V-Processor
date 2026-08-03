`timescale 1ns/1ps

module hazard_detection_unit (
    input  riscv_pkg::if_id_t if_id,
    input  riscv_pkg::id_ex_t id_ex,

    output logic              load_use_stall
);

    import riscv_pkg::*;

    reg_addr_t if_id_rs1;
    reg_addr_t if_id_rs2;

    logic uses_rs1;
    logic uses_rs2;


    assign if_id_rs1 = if_id.inst[19:15];
    assign if_id_rs2 = if_id.inst[24:20];

    assign load_use_stall = if_id.valid && id_ex.valid &&
                            id_ex.mem_ctrl.mem_read &&
                            id_ex.rd_addr != X0 && (
                                (uses_rs1 && id_ex.rd_addr == if_id_rs1) ||
                                (uses_rs2 && id_ex.rd_addr == if_id_rs2)
                            );


    always_comb begin
        uses_rs1 = 1'b0;
        uses_rs2 = 1'b0;

        unique case (if_id.inst[6:0])
            OPCODE_OP: begin
                uses_rs1 = 1'b1;
                uses_rs2 = 1'b1;
            end

            OPCODE_OP_IMM,
            OPCODE_LOAD,
            OPCODE_JALR: begin
                uses_rs1 = 1'b1;
            end

            OPCODE_STORE,
            OPCODE_BRANCH: begin
                uses_rs1 = 1'b1;
                uses_rs2 = 1'b1;
            end

            default: begin
            end
        endcase
    end


endmodule