`ifndef PULSE_DESCRIPTOR_VH
`define PULSE_DESCRIPTOR_VH

typedef struct packed {
    logic [11:0] delay;
    logic [31:0] pulse_mem_addr;
} pulse_descriptor_t;

`endif