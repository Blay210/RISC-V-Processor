package riscv_pkg;


    localparam int XLEN           = 32;
    localparam int REG_COUNT      = 32;
    localparam int REG_ADDR_WIDTH = $clog2(REG_COUNT);
    localparam reg_addr_t X0      ='0;


    typedef logic [REG_ADDR_WIDTH-1:0] reg_addr_t;
    typedef logic [XLEN-1:0] word_t;

endpackage