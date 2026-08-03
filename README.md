# RISC-V Processor

## Project Settings
```
Linter : Slang
Simulation : Verilator
Wave : GTKWave
```

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



## Needed Signal for each Stages
#### if stage  
- branch taken  
- target pc  
- pc selection(mux)  
  
#### id stage  
- reg write(from WB)  
- wb data  
- rd address  

#### ex stage  
- pc  
- rs1 data  
- rs2 data  
- immediate  
- funct3  
- funct7  

#### mem stage
- mem write  
- mem read  
- alu result  
- rs2 data  

#### wb stage
- alu result  
- mem data  
- pc + 4  
- wb sel