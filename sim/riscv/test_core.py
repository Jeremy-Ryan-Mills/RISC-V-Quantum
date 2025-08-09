import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer


@cocotb.test()
async def test_core(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    dut._log.info("Applying reset...")
    dut.reset.value = 1
    await Timer(20, units="ns")
    dut.reset.value = 0
    dut._log.info("Reset deasserted.")

    for i in range(10):
        await RisingEdge(dut.clk)
        dut._log.info(f"Cycle {i}: clk={dut.clk.value}, reset={dut.reset.value}")

# ================================================
# ADDI AND ADD INSTRUCTIONS
# ================================================
@cocotb.test()
async def test_addi_add(dut):
    """Integration test: addi and add instruction"""

    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut.reset.value = 1
    await Timer(20, units="ns")
    dut.reset.value = 0

    # Load instructions into instruction memory
    # You may need to adapt the hierarchy here based on your design
    instr_mem = dut.fetch_stage_inst.instruction_mem_if_inst.mem
    instr_mem[0].value = 0x00400293  # addi x5, x0, 4
    instr_mem[1].value = 0x00228313  # addi x6, x5, 2
    instr_mem[2].value = 0x005303b3  # add x7, x6, x5

    # Simulate core running
    for _ in range(10):
        await RisingEdge(dut.clk)

    # Now read back register values
    x5 = dut.reg_file_inst.regs[5].value.integer
    x6 = dut.reg_file_inst.regs[6].value.integer
    x7 = dut.reg_file_inst.regs[7].value.integer

    assert x5 == 4, f"x5 != 4, got {x5}"
    assert x6 == 6, f"x6 != 6, got {x6}"
    assert x7 == 10, f"x7 != 10, got {x7}"

    dut._log.info("Integration test passed")

# ================================================
# LOGIC OPERATIONS
# ================================================
@cocotb.test()
async def test_logic_ops(dut):
    """Integration test: logic instructions instruction"""

    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut.reset.value = 1
    await Timer(20, units="ns")
    dut.reset.value = 0

    # Load instructions into instruction memory
    # You may need to adapt the hierarchy here based on your design
    instr_mem = dut.fetch_stage_inst.instruction_mem_if_inst.mem
    instr_mem[0].value = 0x00F00293   # addi  x5, x0, 15      ; x5 = 0x0000000F
    instr_mem[1].value = 0x0F000313   # addi  x6, x0, 0xF0    ; x6 = 0x000000F0
    instr_mem[2].value = 0x0062E3B3   # or     x7, x5, x6     ; 0xFF
    instr_mem[3].value = 0x0053C433   # xor    x8, x7, x5     ; 0xFF ^ 0x0F = 0xF0
    instr_mem[4].value = 0x0062F4B3   # and    x9, x5, x6     ; 0x0

    # Simulate core running
    for _ in range(10):
        await RisingEdge(dut.clk)

    # Now read back register values
    x5 = dut.reg_file_inst.regs[5].value.integer
    x6 = dut.reg_file_inst.regs[6].value.integer
    x7 = dut.reg_file_inst.regs[7].value.integer
    x8 = dut.reg_file_inst.regs[8].value.integer
    x9 = dut.reg_file_inst.regs[9].value.integer

    assert x5 == 0x0F, f"x5 != 0x0F, got {x5}"
    assert x6 == 0xF0, f"x6 != 0xF0, got {x6}"
    assert x7 == 0xFF, f"x7 != 0xFF, got {x7}"
    assert x8 == 0xF0, f"x8 != 0xF0, got {x8}"
    assert x9 == 0x0, f"x9 != 0x0, got {x9}"

    dut._log.info("Integration test passed")

# ================================================
# BRANCH INSTRUCTIONS
# ================================================
@cocotb.test()
async def test_branch_instructions(dut):
    """Integration test: branch instructions"""

    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut.reset.value = 1
    await Timer(20, units="ns")
    dut.reset.value = 0

    # Load instructions into instruction memory
    # You may need to adapt the hierarchy here based on your design
    instr_mem = dut.fetch_stage_inst.instruction_mem_if_inst.mem
    instr_mem[0].value = 0x00400193   # addi  addi x3 x0 4 ; x3 = 4
    instr_mem[1].value = 0x00419463   # bne x3 x4 8 # this should be taken
    instr_mem[2].value = 0x00700113   # addi x2 x0 7, this should be skipped over
    instr_mem[3].value = 0x00018233   # addi x4 x3 0, this should be executed 
    instr_mem[4].value = 0x0041c863   # blt x3 x4 8, this should not be taken
    instr_mem[5].value = 0x00119093   # slli x1 x3 1, this should be executed ; x1 = 8

    # Simulate core running
    for _ in range(15):
        await RisingEdge(dut.clk)

    # Now read back register values
    x1 = dut.reg_file_inst.regs[1].value.integer
    x2 = dut.reg_file_inst.regs[2].value.integer
    x3 = dut.reg_file_inst.regs[3].value.integer
    x4 = dut.reg_file_inst.regs[4].value.integer

    assert x1 == 8, f"x1 != 8, got {x1}"
    assert x2 == 0, f"x2 != 0, got {x2}"
    assert x3 == 4, f"x3 != 4, got {x3}"
    assert x4 == 4, f"x4 != 4, got {x4}"

    dut._log.info("Integration test passed")


# ================================================
# LOAD AND STORE INSTRUCTIONS
# ================================================
@cocotb.test()
async def test_load_store(dut):
    """Integration test: load and store instructions"""

    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut.reset.value = 1
    await Timer(20, units="ns")
    dut.reset.value = 0

    # Load instructions into instruction memory
    # You may need to adapt the hierarchy here based on your design
    instr_mem = dut.fetch_stage_inst.instruction_mem_if_inst.mem
    instr_mem[0].value = 0x00500293 # addi x5 x0 5
    instr_mem[1].value = 0x01000313 # addi x6 x0 16
    instr_mem[2].value = 0x00532023 # sw x5 0(x6)
    instr_mem[3].value = 0x00000013 # nop
    instr_mem[4].value = 0x00032383 # lw x7 0(x6)

    # Simulate core running
    for _ in range(10):
        await RisingEdge(dut.clk)

    # Now read back register values
    x5 = dut.reg_file_inst.regs[5].value.integer
    x7 = dut.reg_file_inst.regs[7].value.integer

    assert x5 == 5, f"x5 != 5, got {x5}"
    assert x7 == 5, f"x7 != 5, got {x7}"

    dut._log.info("Integration test passed")


# ================================================
# JAL INSTRUCTION
# ================================================
@cocotb.test()
async def test_jal(dut):
    """Integration test: jal instruction"""

    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut.reset.value = 1
    await Timer(20, units="ns")
    dut.reset.value = 0

    # Load instructions into instruction memory
    # You may need to adapt the hierarchy here based on your design
    instr_mem = dut.fetch_stage_inst.instruction_mem_if_inst.mem

    #  0: jal   x1, +12        ; jump to index 3, x1 = 4
    instr_mem[0].value = 0x00C000EF
    #  1: addi  x2, x0, 5      ; should be skipped
    instr_mem[1].value = 0x00500113
    #  2: addi  x3, x0, 6      ; should be skipped
    instr_mem[2].value = 0x00600193
    #  3: addi  x4, x0, 7      ; executed, x4 = 7
    instr_mem[3].value = 0x00700213
    #  4: addi  x5, x0, 32     ; x5 = 32 (target for jalr)
    instr_mem[4].value = 0x02000293
    #  5: jalr  x6, 0(x5)      ; jump to 32 (index 8), x6 = 24
    instr_mem[5].value = 0x00028367
    #  6: addi  x9, x0, 11     ; filler, skipped
    instr_mem[6].value = 0x00B00493
    #  7: addi  x10,x0, 12     ; filler, skipped
    instr_mem[7].value = 0x00C00513
    #  8: addi  x11,x0, 13     ; executed, x11 = 13
    instr_mem[8].value = 0x00D00593

    # Let the core run long enough for pipeline & control-flow to settle
    for _ in range(30):
        await RisingEdge(dut.clk)

    # ---------------------------------
    # Read back architectural registers
    # ---------------------------------
    regs = dut.reg_file_inst.regs
    x1  = regs[1].value.integer
    x2  = regs[2].value.integer
    x3  = regs[3].value.integer
    x4  = regs[4].value.integer
    x5  = regs[5].value.integer
    x6  = regs[6].value.integer
    x9  = regs[9].value.integer
    x10 = regs[10].value.integer
    x11 = regs[11].value.integer

    # ----------------------
    # Functional assertions
    # ----------------------
    assert x1  == 4,   f"x1 (link from JAL) expected 4, got {x1}"
    assert x2  == 0,   f"x2 should remain 0 (skipped), got {x2}"
    assert x3  == 0,   f"x3 should remain 0 (skipped), got {x3}"
    assert x4  == 7,   f"x4 expected 7, got {x4}"
    assert x5  == 32,  f"x5 expected 32, got {x5}"
    assert x6  == 24,  f"x6 (link from JALR) expected 24, got {x6}"
    assert x9  == 0,   f"x9 should remain 0 (skipped), got {x9}"
    assert x10 == 0,   f"x10 should remain 0 (skipped), got {x10}"
    assert x11 == 13,  f"x11 expected 13, got {x11}"

    dut._log.info("Integration test passed")


# ================================================
# MIXED: ALU + LOGIC + BRANCH + MEM (no jumps)
# ================================================
@cocotb.test()
async def test_end_to_end_no_jumps(dut):
    """End-to-end: ADD/ADDI, OR/XOR/AND, branches, LW/SW"""

    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut.reset.value = 1
    await Timer(40, units="ns")
    dut.reset.value = 0

    imem = dut.fetch_stage_inst.instruction_mem_if_inst.mem

    # --- ALU chain ---
    imem[0].value  = 0x00400293  # addi x5, x0, 4
    imem[1].value  = 0x00228313  # addi x6, x5, 2     ; x6 = 6
    imem[2].value  = 0x005303B3  # add  x7, x6, x5    ; x7 = 10

    # --- logic ops ---
    imem[3].value  = 0x00F00293  # addi x5, x0, 15    ; x5 = 0x0F
    imem[4].value  = 0x0F000313  # addi x6, x0, 0xF0  ; x6 = 0xF0
    imem[5].value  = 0x0062E3B3  # or   x7, x5, x6    ; x7 = 0xFF
    imem[6].value  = 0x0053C433  # xor  x8, x7, x5    ; x8 = 0xF0
    imem[7].value  = 0x0062F4B3  # and  x9, x5, x6    ; x9 = 0x00

    # --- branches ---
    imem[8].value  = 0x00400193  # addi x3, x0, 4     ; x3 = 4
    imem[9].value  = 0x00419463  # bne  x3, x4, +8    ; skip next
    imem[10].value = 0x00700113  # addi x2, x0, 7     ; skipped
    imem[11].value = 0x00018233  # add  x4, x3, x0    ; x4 = 4
    imem[12].value = 0x0041C863  # blt  x3, x4, +8    ; not taken
    imem[13].value = 0x00119093  # slli x1, x3, 1     ; x1 = 8

    # --- memory round-trip ---
    imem[14].value = 0x00500293  # addi x5, x0, 5     ; x5 = 5
    imem[15].value = 0x01000313  # addi x6, x0, 16    ; x6 = 16
    imem[16].value = 0x00532023  # sw   x5, 0(x6)
    imem[17].value = 0x00000013  # nop
    imem[18].value = 0x00032383  # lw   x7, 0(x6)     ; x7 = 5

    for _ in range(80):
        await RisingEdge(dut.clk)

    regs = dut.reg_file_inst.regs
    x = lambda r: regs[r].value.integer

    # Final state checks
    assert x(1) == 8
    assert x(2) == 0
    assert x(3) == 4
    assert x(4) == 4
    assert x(5) == 5
    assert x(6) == 16
    assert x(7) == 5          # from LW
    assert x(8) == 0xF0
    assert x(9) == 0x0

    dut._log.info("End-to-end (no jumps) test passed")


# ================================================
# MIXED: JAL/JALR + MEM + a bit of logic
# (keeps your original JAL/JALR encodings)
# ================================================
@cocotb.test()
async def test_jumps_combo(dut):
    """Combine JAL/JALR with some memory + logic afterward"""

    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut.reset.value = 1
    await Timer(40, units="ns")
    dut.reset.value = 0

    imem = dut.fetch_stage_inst.instruction_mem_if_inst.mem

    # --- your JAL/JALR sequence (indices 0..8) ---
    imem[0].value = 0x00C000EF  # jal  x1, +12   ; jump to index 3, x1=4
    imem[1].value = 0x00500113  # addi x2, x0, 5 ; skipped
    imem[2].value = 0x00600193  # addi x3, x0, 6 ; skipped
    imem[3].value = 0x00700213  # addi x4, x0, 7 ; executed
    imem[4].value = 0x02000293  # addi x5, x0, 32
    imem[5].value = 0x00028367  # jalr x6, 0(x5) ; jump to addr 32 -> index 8, x6=24
    imem[6].value = 0x00B00493  # addi x9,  x0, 11 ; filler, skipped
    imem[7].value = 0x00C00513  # addi x10, x0, 12 ; filler, skipped
    imem[8].value = 0x00D00593  # addi x11, x0, 13 ; executed

    # --- extra work after jumps (indices 9..12) ---
    imem[9].value  = 0x00500293  # addi x5, x0, 5
    imem[10].value = 0x01000313  # addi x6, x0, 16
    imem[11].value = 0x00532023  # sw   x5, 0(x6)
    imem[12].value = 0x00032383  # lw   x7, 0(x6)   ; x7 = 5
    imem[13].value = 0x0062E3B3  # or   x7, x5, x6  ; x7 = 5 | 16 = 21

    for _ in range(100):
        await RisingEdge(dut.clk)

    regs = dut.reg_file_inst.regs
    x = lambda r: regs[r].value.integer

    # Jumps + follow-on effects
    assert x(1)  == 4     # JAL link
    assert x(2)  == 0     # skipped
    assert x(3)  == 0     # skipped
    assert x(4)  == 7
    assert x(6)  == 16    # overwritten later by addi (after jalr); link value (24) was in x6 before this
    assert x(11) == 13
    assert x(5)  == 5
    assert x(7)  == 21, f"x7 != 21, got {x(7)}"   # 21

    dut._log.info("Jumps combo test passed")
