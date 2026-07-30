TOP       := tb_processor_1

BUILD_DIR := build
OBJ_DIR   := $(BUILD_DIR)/obj_dir
WAVE_FILE := $(BUILD_DIR)/cpu.fst

PKG       := rtl/pkg/riscv_pkg.sv

UNITS     := $(shell find rtl/units -type f -name "*.sv" | sort)
MEMORIES  := $(shell find rtl/memories -type f -name "*.sv" | sort)
STAGES    := $(shell find rtl/stages -type f -name "*.sv" | sort)

RTL_FILES := \
	$(UNITS) \
	$(MEMORIES) \
	$(STAGES) \
	rtl/processor.sv

TB_FILE   := sim/$(TOP).sv

VERILATOR := verilator
SLANG     := slang
GTKWAVE   := gtkwave

VERILATOR_FLAGS := \
	--binary \
	--sv \
	--timing \
	--trace-fst \
	--top-module $(TOP) \
	--Mdir $(OBJ_DIR) \
	-Irtl \
	-Wall \
	-Wno-fatal

.PHONY: all lint compile run wave clean rebuild

all: run

lint:
	$(SLANG) \
		$(PKG) \
		$(RTL_FILES) \
		$(TB_FILE)

compile:
	mkdir -p $(BUILD_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		$(PKG) \
		$(RTL_FILES) \
		$(TB_FILE)

run: lint compile
	./$(OBJ_DIR)/V$(TOP)

wave:
	$(GTKWAVE) $(WAVE_FILE)

clean:
	rm -rf $(BUILD_DIR)

rebuild: clean run