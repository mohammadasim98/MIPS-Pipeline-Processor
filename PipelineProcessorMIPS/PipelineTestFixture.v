`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:18:50 12/22/2019
// Design Name:   PipelineProcessorMIPS
// Module Name:   D:/5th Semester/Computer Organization/Xilinx/PipelineProcessorMIPS/PipelineTestFixture.v
// Project Name:  PipelineProcessorMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PipelineProcessorMIPS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PipelineTestFixture;

	// Inputs
	reg CLK;
	reg RST;

	// Instantiate the Unit Under Test (UUT)
	PipelineProcessorMIPS uut (
		.CLK(CLK), 
		.RST(RST)
	);
	always 
	#1 CLK = ~CLK;
	initial begin
		// Initialize Inputs
		CLK = 0;
		RST = 1;
		#2 RST = 0;
		#120 $finish;

	end
      
endmodule

