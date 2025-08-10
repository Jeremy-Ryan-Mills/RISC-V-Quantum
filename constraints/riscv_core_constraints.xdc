## PYNQ-Z1 Rev C — minimal constraints for `core`

## Clock: 125 MHz board oscillator → port `clk`
set_property -dict { PACKAGE_PIN H16 IOSTANDARD LVCMOS33 } [get_ports { clk }] ; # Sch=sysclk
create_clock -name sys_clk -period 8.000 -waveform {0 4} [get_ports { clk }]


## BTN0 as active-HIGH reset (momentary pushbutton)

set_property -dict { PACKAGE_PIN D19 IOSTANDARD LVCMOS33 } [get_ports { reset }] ; # Sch=btn[0]
set_false_path -from [get_ports reset]