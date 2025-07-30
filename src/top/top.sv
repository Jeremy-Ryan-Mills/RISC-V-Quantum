module top (
    input logic core_clk,
    input logic core_rst_n,
    input logic ps_clk,
    input logic ps_rst_n,
);

    core core_inst(
        .clk(core_clk),
        .rst_n(core_rst_n)
    );


endmodule