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
	$(shell pwd)/../../src/common/reg_file.sv \
	$(shell pwd)/../../src/pulse_engine/pulse_engine.sv \
	$(shell pwd)/../../src/pulse_mem/pulse_fetch.sv \
	$(shell pwd)/../../src/pulse_registers/pulse_registers.sv \
	$(shell pwd)/../../src/pulse_scheduler/pulse_scheduler.sv \
	$(shell pwd)/../../src/pulse_scheduler/counter.sv \
	$(shell pwd)/../../src/dac/dac_axi_master.sv \
	$(shell pwd)/../../src/common/pulse_descriptor.sv \
	$(shell pwd)/../../src/top/top.sv \
	$(shell pwd)/../../src/top/async_fifo.sv \

TOPLEVEL = top
MODULE = test_integration  # This is test_integration.py
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
