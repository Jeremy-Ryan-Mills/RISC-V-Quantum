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
    instr_mem[4].value = 0x00228313  # addi x6, x5, 2
    instr_mem[8].value = 0x005303b3  # add x7, x6, x5

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
