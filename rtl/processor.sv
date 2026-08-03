`timescale 1ns/1ps

module processor (
    input logic clk,
    input logic rst_n
);

    import riscv_pkg::*;

    logic redirect_valid;
    word_t redirect_pc;

    logic if_id_stall;
    logic if_id_flush;
    logic id_ex_stall;
    logic id_ex_flush;
    logic ex_mem_stall;
    logic ex_mem_flush;
    logic mem_wb_stall;
    logic mem_wb_flush;

    if_id_t if_id_d, if_id_q;
    id_ex_t id_ex_d, id_ex_q;
    ex_mem_t ex_mem_d, ex_mem_q;
    mem_wb_t mem_wb_d, mem_wb_q;

    word_t wb_data, mem_fwd_data;
    
    logic  load_use_stall;
    forward_sel_t forward_a, forward_b;

    assign if_id_stall   = load_use_stall;
    assign id_ex_stall   = 1'b0;
    assign ex_mem_stall  = 1'b0;
    assign mem_wb_stall  = 1'b0;

    assign if_id_flush   = redirect_valid;
    assign id_ex_flush   = load_use_stall || redirect_valid;
    assign ex_mem_flush  = 1'b0;
    assign mem_wb_flush  = 1'b0;
    
    if_stage #(
        .PROGRAM_FILE("rtl/programs/program.hex")
    ) u_if_stage (
        .clk(clk),
        .rst_n(rst_n),
        .load_use_stall(load_use_stall),
        // ========== input  ==========
        .redirect_valid(redirect_valid),
        .redirect_pc(redirect_pc),
        // ========== output ==========
        .if_id(if_id_d)
    );

    if_id u_if_id (
        .clk(clk),
        .rst_n(rst_n),
        .stall(if_id_stall),
        .flush(if_id_flush),

        .if_id_in(if_id_d),
        .if_id_out(if_id_q)
    );

    id_stage u_id_stage (
        .clk(clk),
        .rst_n(rst_n),
        // ========== input  ==========
        .if_id_in(if_id_q),
        .mem_wb_in(mem_wb_q),
        .wb_rd_data(wb_data),
        // ========== output ==========
        .id_ex_out(id_ex_d)
    );

    id_ex u_id_ex (
        .clk(clk),
        .rst_n(rst_n),
        .stall(id_ex_stall),
        .flush(id_ex_flush),
        
        .id_ex_in(id_ex_d),
        .id_ex_out(id_ex_q)
    );

    ex_stage u_ex_stage (
        // ========== input  ==========
        .id_ex_in(id_ex_q),
        .mem_fwd_data(mem_fwd_data),
        .wb_fwd_data(wb_data),
        .forward_a(forward_a),
        .forward_b(forward_b),
        // ========== output ==========
        .ex_mem_out(ex_mem_d),
        .redirect_pc(redirect_pc),
        .redirect_valid(redirect_valid)
    );

    ex_mem u_ex_mem (
        .clk(clk),
        .rst_n(rst_n),
        .stall(ex_mem_stall),
        .flush(ex_mem_flush),

        .ex_mem_in(ex_mem_d),
        .ex_mem_out(ex_mem_q)
    );

    mem_stage u_mem_stage (
        .clk(clk),
        .rst_n(rst_n),
        // ========== input  ==========
        .ex_mem_in(ex_mem_q),
        // ========== output ==========
        .mem_wb_out(mem_wb_d)
    );

    mem_wb u_mem_wb (
        .clk(clk),
        .rst_n(rst_n),
        .stall(mem_wb_stall),
        .flush(mem_wb_flush),

        .mem_wb_in(mem_wb_d),
        .mem_wb_out(mem_wb_q)        
    );

    wb_stage u_wb_stage (
        // ============= input  =============
        .mem_wb_in(mem_wb_q),
        // ============= output =============
        .wb_data(wb_data)
    );

    forwarding_unit u_forwarding_unit (
        // ============= input  =============
        .id_ex(id_ex_q),
        .ex_mem(ex_mem_q),
        .mem_wb(mem_wb_q),
        // ============= output =============
        .forward_a(forward_a),
        .forward_b(forward_b)
    );

    ex_mem_forward_mux u_ex_mem_forward_mux (
        // ============= input  =============
        .ex_mem(ex_mem_q),
        // ============= output =============
        .forward_data(mem_fwd_data)
    );

    hazard_detection_unit u_hazard_detection_unit (
        // ============= input  =============
        .if_id(if_id_q),
        .id_ex(id_ex_q),
        // ============= output =============
        .load_use_stall(load_use_stall)
    );

endmodule
