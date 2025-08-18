/**
 * Pulse Fetch Module
 * 
 * Retrieves pulse parameters from pulse memory based on addresses provided by
 * the RISC-V core. This module acts as a memory interface that translates
 * pulse memory addresses into actual pulse parameters for the generation pipeline.
 * 
 * Operation:
 * 1. Receives pulse_descriptor with memory address and delay information
 * 2. Fetches the corresponding pulse instruction from pulse memory
 * 3. Extracts individual parameters (frequency, phase, amplitude, etc.)
 * 4. Combines memory data with delay information for timing control
 * 
 * Memory Interface:
 * - 32-entry pulse memory (5-bit addressing)
 * - Each entry contains complete pulse parameters
 * - Delay (t_start) comes from the descriptor, not memory
 * - Memory is read synchronously on valid descriptor
 * 
 * Parameter Extraction:
 * - Uses bit-field macros to extract parameters from memory words
 * - Provides clean parameter interface to downstream modules
 * - Supports configurable bit widths via header macros
 * 
 * @param clk                System clock
 * @param rst_n              Active-low reset
 * @param pulse_descriptor   Pulse descriptor with address and delay
 * @param pulse_descriptor_valid Valid signal for descriptor
 * @param frequency          Extracted frequency parameter
 * @param phase             Extracted phase parameter
 * @param amplitude         Extracted amplitude parameter
 * @param t_start           Start time (from descriptor delay)
 * @param t_len             Extracted length parameter
 * @param envelope_addr     Extracted envelope address
 */
module pulse_fetch (
    input logic clk,
    input logic rst_n,

    input pulse_descriptor_t pulse_descriptor,
    input logic pulse_descriptor_valid,
    output logic [`PULSE_REG_FREQ_W-1:0] frequency,
    output logic [`PULSE_REG_PHASE_W-1:0] phase,
    output logic [`PULSE_REG_AMP_W-1:0] amplitude,
    output logic [`PULSE_REG_TSTART_W-1:0] t_start,
    output logic [`PULSE_REG_TLEN_W-1:0] t_len,
    output logic [`ENVELOPE_ADDR_W-1:0] envelope_addr
);

    reg [`PULSE_REG_W-1:0] mem [0:31];
    reg [`PULSE_REG_W-1:0] pulse_inst;

    always_ff @(posedge clk) begin
        if (rst_n || !pulse_descriptor_valid) begin
            pulse_inst <= `PULSE_REG_W'd0;
        end else begin
            pulse_inst <= mem[pulse_descriptor.pulse_mem_addr];
        end
    end

    assign frequency = pulse_inst[`PULSE_REG_FREQ_END:`PULSE_REG_FREQ_START];
    assign phase = pulse_inst[`PULSE_REG_PHASE_END:`PULSE_REG_PHASE_START];
    assign amplitude = pulse_inst[`PULSE_REG_AMP_END:`PULSE_REG_AMP_START];
    assign t_start = pulse_descriptor.delay;
    assign t_len = pulse_inst[`PULSE_REG_TLEN_END:`PULSE_REG_TLEN_START];
    assign envelope_addr = pulse_inst[`PULSE_REG_ENV_ADDR_END:`PULSE_REG_ENV_ADDR_START];

endmodule