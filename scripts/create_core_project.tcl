# scripts/create_project.tcl
create_project riscv_core ./vivado -part xc7z020clg400-1 -force

# Add RTL (adjust extensions/paths as needed)
add_files [glob ../src/common/*.sv ../src/common/*.v]
add_files [glob ../src/riscv_core/*.sv ../src/riscv_core/*.v]
add_files [glob ../src/decode/*.sv ../src/decode/*.v]
add_files [glob ../src/execute/*.sv ../src/execute/*.v]
add_files [glob ../src/fetch/*.sv ../src/fetch/*.v]
add_files [glob ../src/memory/*.sv ../src/memory/*.v]
add_files [glob ../src/writeback/*.sv ../src/writeback/*.v]

# Add constraints to the right fileset
add_files -fileset constrs_1 ./constraints/riscv_core_constraints.xdc

# Set top
set_property top top_riscv_core [current_fileset]

# Recompute order
update_compile_order -fileset sources_1
