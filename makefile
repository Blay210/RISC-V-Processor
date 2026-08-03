TOP          := tb_processor

BUILD_DIR    := build
OBJ_DIR      := $(BUILD_DIR)/obj_dir
WAVE_FILE    := $(BUILD_DIR)/cpu.fst

PROGRAM      ?= program
ASM_FILE     := programs/$(PROGRAM).S
PROGRAM_OBJ  := $(BUILD_DIR)/$(PROGRAM).o
PROGRAM_ELF  := $(BUILD_DIR)/$(PROGRAM).elf
PROGRAM_BIN  := $(BUILD_DIR)/$(PROGRAM).bin
PROGRAM_HEX  := rtl/programs/program.hex

PKG          := rtl/pkg/riscv_pkg.sv

UNITS        := $(sort $(shell find rtl/units     -type f -name '*.sv' -print))
MEMORIES     := $(sort $(shell find rtl/memories  -type f -name '*.sv' -print))
STAGES       := $(sort $(shell find rtl/stages    -type f -name '*.sv' -print))
PIPELINES    := $(sort $(shell find rtl/pipelines -type f -name '*.sv' -print))
HAZARD       := $(sort $(shell find rtl/hazard    -type f -name '*.sv' -print))

RTL_FILES    := \
	$(UNITS) \
	$(MEMORIES) \
	$(STAGES) \
	$(PIPELINES) \
	$(HAZARD) \
	rtl/processor.sv

TB_FILE      := sim/$(TOP).sv

VERILATOR    := verilator
SLANG        := slang
GTKWAVE      := gtkwave

RISCV_PREFIX := riscv64-unknown-elf-
AS           := $(RISCV_PREFIX)as
LD           := $(RISCV_PREFIX)ld
OBJCOPY      := $(RISCV_PREFIX)objcopy
OBJDUMP      := $(RISCV_PREFIX)objdump

VERILATOR_FLAGS := \
	--binary \
	--sv \
	--timing \
	--assert \
	--trace-fst \
	--trace-structs \
	--top-module $(TOP) \
	--Mdir $(OBJ_DIR) \
	-Irtl \
	-Wall \
	-Wno-fatal

.PHONY: all program disasm lint compile run wave clean rebuild sources

all: run

program: $(PROGRAM_HEX)

$(PROGRAM_OBJ): $(ASM_FILE)
	mkdir -p $(BUILD_DIR)
	$(AS) \
		-march=rv32i \
		-mabi=ilp32 \
		-o $@ \
		$<

$(PROGRAM_ELF): $(PROGRAM_OBJ)
	$(LD) \
		-m elf32lriscv \
		-Ttext=0x00000000 \
		-o $@ \
		$<

$(PROGRAM_BIN): $(PROGRAM_ELF)
	$(OBJCOPY) \
		-O binary \
		-j .text \
		$< \
		$@

$(PROGRAM_HEX): $(PROGRAM_BIN) scripts/bin_to_hex.py
	python3 scripts/bin_to_hex.py \
		$(PROGRAM_BIN) \
		$(PROGRAM_HEX)

disasm: $(PROGRAM_ELF)
	$(OBJDUMP) \
		-d \
		-M no-aliases,numeric \
		$(PROGRAM_ELF)

lint:
	$(SLANG) \
		$(PKG) \
		$(RTL_FILES) \
		$(TB_FILE)

compile: program
	mkdir -p $(BUILD_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		$(PKG) \
		$(RTL_FILES) \
		$(TB_FILE)

run: lint compile
	./$(OBJ_DIR)/V$(TOP)

wave:
	$(GTKWAVE) $(WAVE_FILE)

# 실제 source 목록을 한 줄씩 확인
sources:
	@printf '%s\n' \
		$(PKG) \
		$(RTL_FILES) \
		$(TB_FILE)

clean:
	rm -rf $(BUILD_DIR)
	rm -f $(PROGRAM_HEX)

rebuild: clean run