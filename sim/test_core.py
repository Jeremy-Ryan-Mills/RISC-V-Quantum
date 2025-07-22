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
