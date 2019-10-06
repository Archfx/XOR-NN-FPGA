`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:23:05 10/02/2019 
// Design Name: 
// Module Name:    XOR-NN 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module XOR_NN(
	input [1:0] x,
	input clock,
	output reg [16:0] out
	);
reg [7:0] X [0:3] [0:1]  = {{8'd0,8'd1}, {8'd1,8'd0}, {8'd1,8'd1}, {8'd0,8'd0}};
reg   y [0:3]  = {1, 1, 0, 0};



//reg [7:0] W1 [0:2] [0:1] = {{11111111,11111111},{11111111,11111111},{11111111,11111111}};
reg [7:0] W1 [0:2] [0:1] ={{8'd47,8'd61},{8'd35,8'd46},{8'd55,8'd37}};
reg [7:0] W2 [0:2]= {8'd75,8'd44,8'd66};

reg [7:0] B1 [0:2]= {8'd23,8'd7,8'd13};
reg [7:0] B2 = 8'd33;



reg [7:0] z2 [0:2] ={8'd0,8'd0,8'd0};
reg [7:0] z3 = 8'd0;

reg [7:0] a2 [0:2];
reg [7:0] a3 ;

reg en_Hidden=1;
//reg en_Hidden_sigmoid=0;
reg en_Output=0;
//reg en_Output_sigmoid=0;

wire [7:0] z2_0;
wire [7:0] z2_1;
wire [7:0] z2_2;

wire [7:0] a2_0;
wire [7:0] a2_1;
wire [7:0] a2_2;

wire [7:0] z3_wire;
wire [7:0] a3_wire;



assign z2_0 =z2[0][7:0];//[7:0][0*8+:8];
assign z2_1 =z2[1][7:0];//[1*8+:8];
assign z2_2 =z2[2][7:0];//[2*8+:8];

assign a2_0 =a2[0][7:0];//[0*8+:8];
assign a2_1 =a2[1][7:0];//[1*8+:8];
assign a2_2 =a2[2][7:0];//[2*8+:8];

assign z3_wire = z3;
assign a3_wire = a3;

	sigmoid Hidden_0(
	.in(z2_0),
	.out(a2_0)
	);
	
	sigmoid Hidden_1(
	.in(z2_1),
	.out(a2_1)
	);
	
	sigmoid Hidden_2(
	.in(z2_2),
	.out(a2_2)
	);
	
	sigmoid Output(
	.in(z3_wire),
	.out(a3_wire)
	);


always @ (posedge clock) begin
	// Foward propergation
	if (en_Hidden) begin
		z2[0]= W1[0][0]*X[0][1]+W1[0][1]*X[1][0]+B1[0];
		z2[1]= W1[1][0]*X[0][1]+W1[0][1]*X[1][0]+B1[1];
		z2[2]= W1[2][0]*X[0][1]+W1[0][1]*X[1][0]+B1[2];
		en_Output=1;
		en_Hidden = 0;
	end
	if (en_Output) begin
	/*		MAC uut (
			.result(result), 
			.multiplicand(multiplicand), 
			.multiplier(multiplier), 
			.clock(clock), 
			.clear(clear)
		);*/
		z3 = W2[0][0]*a2[0]+W2[1][1]*a2[1]+B2;
	
	end
	$display("%d",a3);
end


endmodule
