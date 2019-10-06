`timescale 1ns / 1ps

module sigmoid(
	input [7:0] in,
	output reg [7:0] out
);

integer total;

always @ (in) begin
    if (in>8'd49) out<=8'd100;
    else if (in>8'd39 & in<8'd50) out<=8'd98;
    else if (in>8'd34 & in<8'd40) out<=8'd98;
    else if (in>8'd29 & in<8'd35) out<=8'd95;
    else if (in>8'd24 & in<8'd30) out<=8'd92;
    else if (in>8'd19 & in<8'd25) out<=8'd88;
    else if (in>8'd14 & in<8'd20) out<=8'd81;
    else if (in>8'd9 & in<8'd15) out<=8'd73;
    else if (in>8'd4 & in<8'd10) out<=8'd62;
    else if (in<8'd5) out<=8'd50;

end

endmodule