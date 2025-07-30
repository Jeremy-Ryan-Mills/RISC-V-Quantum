module pulse_scheduler (
    input logic clk,
    input logic rst_n,

    input logic [31:0] pulse_inst_in,


);


// If the pulse_inst says to load pulse register, load it
// Fetch frequency, phase, amplitude, t_start, t_len and wen in to pulse register
// Implement a queue in pulse register to store next pulse instructions


// If the time counter matches or is over t_start, trigger the pulse
// and block any other pulse from being triggered, just skip over it
// once pulse is done, wait for next pulse instruction


    logic [27:0] count_out;
    
    counter counter_inst (
        .clk(clk),
        .rst_n(rst_n),
        .count_out(count_out)
    );


endmodule