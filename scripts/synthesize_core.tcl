# 1) Verify your filesets exist
get_filesets

# 2) Set include dirs for synthesis and simulation
set SRC_DIR /home/jeremymills/Desktop/RISC-V-Quantum/src
set_property include_dirs [list $SRC_DIR] [get_filesets sources_1]
set_property include_dirs [list $SRC_DIR] [get_filesets sim_1]

# (Optional but helpful) mark the header as a header file type
set HEADER_FILE $SRC_DIR/common/riscv_defines.vh
if {[llength [get_files -quiet $HEADER_FILE]]} {
  set_property FILE_TYPE {Verilog Header} [get_files $HEADER_FILE]
}

# 3) Recompute compile order
update_compile_order -fileset sources_1
update_compile_order -fileset sim_1

# 4) Clean and re-run synthesis
reset_run synth_1
launch_runs synth_1 -jobs 8
wait_on_run synth_1
