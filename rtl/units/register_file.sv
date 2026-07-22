`timescale 1ns/1ps

module register_file #(
    parameter int XLEN           = 32,
    parameter int REG_COUNT      = 32,
    parameter int REG_ADDR_WIDTH = $clog2(REG_COUNT)
)(
    // input
    input  logic clk,
    input  logic reg_write,
    input  logic [REG_ADDR_WIDTH-1:0] rs1_addr,
    input  logic [REG_ADDR_WIDTH-1:0] rs2_addr,
    input  logic [REG_ADDR_WIDTH-1:0] rd_addr,
    input  logic [     XLEN-1     :0] rd_data,
    // output
    output logic [     XLEN-1     :0] rs1_data,
    output logic [     XLEN-1     :0] rs2_data
);
    // registers x0 ~ x31
    logic [XLEN-1:0] registers [0:REG_COUNT-1];

    assign rs1_data = (rs1_addr == '0) 
                    ? '0 
                    : registers[rs1_addr];

    assign rs2_data = (rs2_addr == '0)
                    ? '0 
                    : registers[rs2_addr];

    always_ff @(posedge clk) begin
        if (reg_write && rd_addr != '0) begin
            registers[rd_addr] <= rd_data;
        end
    end

endmodule