TOPLEVEL_LANG = verilog
VERILOG_SOURCES = $(shell pwd)/../src/core/core.v \
	$(shell pwd)/../src/fetch/fetch_stage.v \
	$(shell pwd)/../src/fetch/instruction_mem_if.v \
	$(shell pwd)/../src/fetch/pc.v \
	$(shell pwd)/../src/decode/decode_stage.v \
	$(shell pwd)/../src/decode/decoder.v \
	$(shell pwd)/../src/decode/control_unit.v \
	$(shell pwd)/../src/execute/alu.v \
	$(shell pwd)/../src/execute/branch_comp.v \
	$(shell pwd)/../src/memory/memory.v \
	$(shell pwd)/../src/writeback/writeback_mux.v \
	$(shell pwd)/../src/common/riscv_defines.vh \
	$(shell pwd)/../src/common/control_types.vh \
	$(shell pwd)/../src/common/reg_file.v

TOPLEVEL = core
MODULE = test_core  # This is test_core.py
SIM = verilator

# Optional include path
EXTRA_ARGS += -I../src
VERILATOR_TRACE = 1
WAVES = 1
VERILATOR_FLAGS += --sv --trace --trace-structs --trace-fst

all: fst
fst: sim
	mv dump.fst $(TOPLEVEL).fst
	printf "\a\a\a"


include $(shell cocotb-config --makefiles)/Makefile.sim
