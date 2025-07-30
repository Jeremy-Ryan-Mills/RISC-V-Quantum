module reg_file #(parameter AW = 5, parameter DW = 32) (
    input  logic        clk,
    input  logic        reset,
    input  logic        we,
    input  logic [4:0]  rs1, rs2, rd,
    input  logic [DW-1:0] wd,
    output logic [DW-1:0] rv1, rv2
);
    logic [DW-1:0] regs [0:AW-1];

    // asynchronous read
    assign rv1 = (rs1 == AW'd0) ? DW'd0 : (rs1 == rd && we) ? wd : regs[rs1];
    assign rv2 = (rs2 == AW'd0) ? DW'd0 : (rs2 == rd && we) ? wd : regs[rs2];

    // synchronous write
    always_ff @(posedge clk or posedge reset) begin
        if (reset)
            for (int i = 0; i < AW; i++)
                regs[i] <= DW'd0;
        else if (we && rd != AW'd0)
            regs[rd] <= wd;
    end
endmodule