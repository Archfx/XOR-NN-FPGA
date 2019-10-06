`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:49:01 10/03/2019
// Design Name:   XOR_NN
// Module Name:   C:/Users/Aruna/Documents/ISE/XOR_NN/XOR_NN_test.v
// Project Name:  XOR_NN
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: XOR_NN
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module XOR_NN_test;

	// Inputs
	reg [1:0] x;
	reg clock;
	
	// Outputs
	wire [16:0] out;

	// Instantiate the Unit Under Test (UUT)
	XOR_NN uut (
		.x(x),
		.clock(clock),
		.out(out)
	);

	initial begin
		// Initialize Inputs
		x = 2'd0;
		clock = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	initial begin
	forever begin
	 #5 clock = ~clock;
	end 
	end
      
endmodule

