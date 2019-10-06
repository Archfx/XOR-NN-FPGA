`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:21:41 10/06/2019
// Design Name:   sigmoid
// Module Name:   C:/Users/Aruna/Documents/ISE/XOR_NN/sig_test.v
// Project Name:  XOR_NN
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sigmoid
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sig_test;

	// Inputs
	reg [7:0] in;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	sigmoid uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		in = 8'd42;	
		// Add stimulus here

	end
      
endmodule

