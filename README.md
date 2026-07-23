# RISC-V Processor

## Project Architecture
```
rtl/
├── processor.sv
├── common/
│   └── riscv_pkg.sv
│
├── stages/
│   ├── if_stage.sv
│   ├── id_stage.sv
│   ├── ex_stage.sv
│   ├── mem_stage.sv
│   └── wb_stage.sv
│
├── units/
│   ├── register_file.sv
│   ├── immediate_generator.sv
│   ├── control_unit.sv
│   ├── alu.sv
│   ├── alu_control.sv
│   ├── branch_unit.sv
│   └── program_counter.sv
│
├── memories/
│   ├── instruction_memory.sv
│   └── data_memory.sv
└
```

## Coding Style

### 패키지
```
package riscv_pkg;

    //--------------------------------------
    // ISA Parameters
    //--------------------------------------

    ...

    //--------------------------------------
    // Types
    //--------------------------------------

    ...

    //--------------------------------------
    // Enums
    //--------------------------------------

    ...

    //--------------------------------------
    // Structures
    //--------------------------------------

    ...

endpackage
```

### 모듈
```
module register_file (

    //=====================================
    // Ports
    //=====================================

    ...

);

    import riscv_pkg::*;

    //=====================================
    // Internal Signals
    //=====================================

    ...

    //=====================================
    // Combinational Logic
    //=====================================

    ...

    //=====================================
    // Sequential Logic
    //=====================================

    ...

endmodule
```


## Use System Verilog Style!


## Simulation
#### Iverilog
```
# 1. 컴파일 (verilator.f 파일과 테스트벤치를 묶어서 sim.out 생성)
iverilog -g2012 -o sim.out -f verilator.f testbench/tb_top.sv

# 2. 시뮬레이션 실행 (wave.vcd 파형 파일 자동 생성)
vvp sim.out

# 3. GTKWave로 파형 열기
gtkwave wave.vcd
```


#### Verilator


#### XSIM(VIVADO)