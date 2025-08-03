module pulse_scheduler (
    input logic clk,
    input logic rst_n,

    input logic [31:0] pulse_inst_in,
    input logic pulse_inst_in_valid


);
    logic [27:0] count_out;
    
    async_fifo #(
        .DATA_WIDTH(32),
        .DEPTH(16)
    ) pulse_inst_fifo (
        .clk(clk),
        .rst_n(rst_n),
    );


    counter counter_inst (
        .clk(clk),
        .rst_n(rst_n),
        .count_out(count_out)
    );


endmodule