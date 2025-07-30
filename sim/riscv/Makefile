TOPLEVEL_LANG = verilog
VERILOG_SOURCES = $(shell pwd)/../../src/core/core.sv \
	$(shell pwd)/../../src/fetch/fetch_stage.sv \
	$(shell pwd)/../../src/fetch/instruction_mem_if.sv \
	$(shell pwd)/../../src/fetch/pc.sv \
	$(shell pwd)/../../src/decode/branch_predictor.sv \
	$(shell pwd)/../../src/decode/decode_stage.sv \
	$(shell pwd)/../../src/decode/decoder.sv \
	$(shell pwd)/../../src/decode/control_unit.sv \
	$(shell pwd)/../../src/execute/alu.sv \
	$(shell pwd)/../../src/execute/branch_comp.sv \
	$(shell pwd)/../../src/memory/memory.sv \
	$(shell pwd)/../../src/common/riscv_defines.vh \
	$(shell pwd)/../../src/common/control_types.vh \
	$(shell pwd)/../../src/common/reg_file.sv

TOPLEVEL = core
MODULE = test_core  # This is test_core.py
SIM = verilator

# Optional include path
EXTRA_ARGS += -I../../src
VERILATOR_TRACE = 1
WAVES = 1
VERILATOR_FLAGS += --sv --trace --trace-structs --trace-fst

all: fst
fst: sim
	mv dump.fst $(TOPLEVEL).fst
	printf "\a\a\a"


include $(shell cocotb-config --makefiles)/Makefile.sim
