`timescale 10ns/10ps
module countup (
    input wire clk,
    input wire rst_n,
    output reg [3:0] count
);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            count <= 0;
        end else begin
            count <= count + 1;
        end
    end
endmodule
