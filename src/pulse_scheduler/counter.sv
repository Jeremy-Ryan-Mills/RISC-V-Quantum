// Assume clock frequency is 250 MHz

module counter (
    input logic clk,
    input logic rst_n,
    output logic [27:0] count_out
);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            count_out <= 28'd0;
        end else begin
            count_out <= count_out + 28'd4;
        end
    end

endmodule