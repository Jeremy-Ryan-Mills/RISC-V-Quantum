/**
 * Simple Counter Module
 * 
 * A basic 32-bit counter that increments on every clock cycle. This module
 * is designed for timing and synchronization purposes in the pulse generation
 * system.
 * 
 * Operation:
 * - Counts up from 0 on each positive clock edge
 * - Resets to 0 when rst_n is asserted
 * - Provides continuous counting for timing reference
 * 
 * Note: Clock frequency is assumed to be 250 MHz based on comment in original code
 * 
 * @param clk       System clock (250 MHz assumed)
 * @param rst_n     Active-low reset
 * @param count_out 32-bit counter output
 */
// Assume clock frequency is 250 MHz

module counter (
    input logic clk,
    input logic rst_n,
    output logic [31:0] count_out
);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            count_out <= 32'd0;
        end else begin
            count_out <= count_out + 32'd1;
        end
    end

endmodule