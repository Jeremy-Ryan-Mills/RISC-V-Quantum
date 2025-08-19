module quantum_handler (
    input logic clk,
    input logic reset,
    input logic [31:0] instr,
    input logic [31:0] rv1,
    output pulse_descriptor_t pulse_descriptor,
    output logic pulse_descriptor_valid,
    output logic [11:0] qdelay,
    output logic qwait_busy,
    input logic pulse_register_full,
    input logic pulse_register_empty
);

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            pulse_descriptor <= '0;
            pulse_descriptor_valid <= 0;
            qdelay <= 0;
            qwait_busy <= 0;
        end else begin
            if (instr[6:0] == 7'b0001011) begin
                case (instr[14:12])
                    `FUNCT3_QPULSE: begin
                        pulse_descriptor.pulse_mem_addr <= rv1;
                        pulse_descriptor.delay <= instr[31:20];
                        pulse_descriptor_valid <= ~pulse_register_full;
                        qwait_busy <= qwait_busy & ~pulse_register_empty;
                        if (qdelay != 12'd0) begin
                            qdelay <= qdelay - 12'd1;
                        end
                    end
                    `FUNCT3_QDELAY: begin
                        pulse_descriptor_valid <= 0;
                        qwait_busy <= qwait_busy & ~pulse_register_empty;
                        qdelay <= instr[31:20];
                    end
                    `FUNCT3_QWAIT_BUSY: begin
                        pulse_descriptor_valid <= 0;
                        qwait_busy <= 1;
                        if (qdelay != 12'd0) begin
                            qdelay <= qdelay - 12'd1;
                        end
                    end
                    `FUNCT3_QGETT: begin
                        pulse_descriptor_valid <= 0;
                        if (qdelay != 12'd0) begin
                            qdelay <= qdelay - 12'd1;
                        end
                    end
                    `FUNCT3_QSETT: begin
                        pulse_descriptor_valid <= 0;
                        if (qdelay != 12'd0) begin
                            qdelay <= qdelay - 12'd1;
                        end
                    end
                    default: begin
                        pulse_descriptor_valid <= 0;
                        if (qdelay != 12'd0) begin
                            qdelay <= qdelay - 12'd1;
                        end
                    end
                endcase
            end
        end
    end


endmodule