`timescale 1ns/1ps

module tb_processor;

    logic clk;
    logic rst_n;

    processor dut (
        .clk   (clk),
        .rst_n (rst_n)
    );

    // 10 ns clock period
    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
        $dumpfile("build/cpu.fst");
        $dumpvars(0, tb_processor);
    end

    initial begin
        rst_n = 1'b0;

        repeat (3) @(posedge clk);
        rst_n = 1'b1;

        // Pipeline fill, branch flush, WB 완료 시간을 충분히 확보
        repeat (200) @(posedge clk);

        check_results();

        $display("====================================");
        $display("PIPELINE PROCESSOR TEST PASSED");
        $display("====================================");

        $finish;
    end

    task automatic check_results;
        begin
            // register_file의 실제 hierarchy 이름에 맞춰 수정
            assert (dut.u_id_stage.register_file.registers[1] == 32'd10)
                else $fatal(1, "x1 mismatch: expected 10, got %0d",
                            dut.u_id_stage.register_file.registers[1]);

            assert (dut.u_id_stage.register_file.registers[2] == 32'd20)
                else $fatal(1, "x2 mismatch: expected 20, got %0d",
                            dut.u_id_stage.register_file.registers[2]);

            assert (dut.u_id_stage.register_file.registers[3] == 32'd30)
                else $fatal(1, "x3 mismatch: expected 30, got %0d",
                            dut.u_id_stage.register_file.registers[3]);

            assert (dut.u_id_stage.register_file.registers[4] == 32'd30)
                else $fatal(1, "x4 mismatch: expected 30, got %0d",
                            dut.u_id_stage.register_file.registers[4]);

            assert (dut.u_id_stage.register_file.registers[5] == 32'd100)
                else $fatal(1, "x5 mismatch: expected 100, got %0d",
                            dut.u_id_stage.register_file.registers[5]);

            assert (dut.u_id_stage.register_file.registers[7] == 32'd77)
                else $fatal(1, "x7 mismatch: expected 77, got %0d",
                            dut.u_id_stage.register_file.registers[7]);

            assert (dut.u_id_stage.register_file.registers[8] == 32'd0)
                else $fatal(1, "x8 should remain 0, got %0d",
                            dut.u_id_stage.register_file.registers[8]);

            // data_memory hierarchy 이름에 맞춰 수정
            assert (dut.u_mem_stage.data_memory.memory[0] == 32'd30)
                else $fatal(1, "memory[0] mismatch: expected 30, got %0d",
                            dut.u_mem_stage.data_memory.memory[0]);
        end
    endtask

    initial begin
        // 무한루프, X 전파 등에 대한 안전장치
        #5000;
        $fatal(1, "Simulation timeout");
    end

endmodule