# RISC-V with Quantum ISA Extension

This is a RISC-V processor project with an extended instruction set for superconducting qubit control. This is a personal project in order to learn Verilog and apply my knowledge of Quantum Control Electronics to a project.

## Microarchitecture

This RISC-V processor has four pipelined stages:

1. Instruction Fetch - Instructions are retreived from IMEM
2. Instruction Decode - Instructions are decoded, registers are accessed, branch prediction is made
3. Execution - Branch comparison is made and compared to branch prediction, registers are used in ALU operation
4. MEM/WB - Memory is read/written to, and the writeback value is sent to the register file

The reasons for this style of pipeline are as follows:
- Pipeline between address and memory read to make memory read combinational for instant writeback. This is synthesizable on Xilinx FPGAs, and is a way to reduce the memory latency without introducing more data hazards in a five stage pipelined processor.
- Data forwarding is used to the EX stage from MEM/WB. If the MEM/WB stage is writing to a register that is being used in EX, there is a mux that will forward the data into the ALU/Branch comp module. 
- Having the branch predictor in the decode stage will make the penalty for jump instructions only 1 cycle, and the penalty for mispredicted branches 2 cycles instead of the typical 3 cycles in a 5-stage pipeline. 

## Tesbenches

I am going to use Cocotb with a verilator backend to test the processor.

## Block Diagram

Note that so far, only the RISC-V processor has been implemented. Soon, the Quantum ISA extension will be added.

![block diagram](block_diagram.png "RISC-V Processor Block Diagram")

## Pulse Scheduler

In my implementation of the pulse scheduler, the RISC-V core will send instructions to the pulse scheduler over an asynchronous FIFO, and add a pulse from memory into the pulse register FIFO. This pulse register will trigger the first pulse in the FIFO when the timer matches the t_start of the pulse. For now, all envelopes are constant envelopes.

## Pulse Memory

| **Field**  | **Bit Range (msb\:lsb)** | **Width (bits)** | **Description**                                                                |
| ---------- | ------------------------ | ---------------- | ------------------------------------------------------------------------------ |
| `freq`     | **31 : 0**               | 32 bits          | Frequency |
| `phase`    | **47 : 32**              | 16 bits          | Initial phase offset |
| `amp`      | **61 : 48**              | 14 bits (signed) | Amplitude |
| *spare*    | **63 : 62**              | 2 bits           | Reserved / alignment. |
| `t_start`  | **87 : 64**              | 24 bits          | Start Time (Figure out in reference to what) |
| `t_len`    | **103 : 88**             | 16 bits          | Envelope length |
| `env_addr` | **119 : 104**            | 16 bits          | Address of Envelope in Memory |
| *reserved* | **255 : 120**            | 136 bits         | Future use (flags, CRC, channel ID, etc.).                                     |
