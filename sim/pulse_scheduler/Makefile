TOPLEVEL_LANG = verilog
VERILOG_SOURCES = $(shell pwd)/../../src/pulse_engine/pulse_engine.sv \
	$(shell pwd)/../../src/pulse_mem/pulse_fetch.sv \
	$(shell pwd)/../../src/pulse_registers/pulse_registers.sv \
	$(shell pwd)/../../src/pulse_scheduler/pulse_scheduler.sv \
	$(shell pwd)/../../src/pulse_scheduler/counter.sv \
	$(shell pwd)/../../src/dac/dac_axi_master.sv

TOPLEVEL = core
MODULE = test_pulse_scheduler  # This is test_pulse_scheduler.py
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
