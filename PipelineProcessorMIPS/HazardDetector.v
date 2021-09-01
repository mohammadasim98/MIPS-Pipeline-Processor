`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:33 12/25/2019 
// Design Name: 
// Module Name:    HazardDetector 
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
module HazardDetector(
		input [4:0]Rs, Rt, Rd2, Rd3, Rd4,
		input EXRegWRITE, MEMRegWRITE, WBRegWRITE, EXMemWRITE,
		output reg[1:0]ForwardA, ForwardB,
		output reg Stall
    );
always @ (*)begin
	if((Rs != 0) && (Rs == Rd2) && (EXRegWRITE))
		ForwardA = 1;
	else if((Rs != 0) && (Rs == Rd3) && (MEMRegWRITE))
		ForwardA = 2;
	else if((Rs != 0) && (Rs == Rd4) && (WBRegWRITE))
		ForwardA = 3;
	else
		ForwardA = 0;
	if((Rt != 0) && (Rt == Rd2) && (EXRegWRITE))
		ForwardB = 1;
	else if((Rt != 0) && (Rt == Rd3) && (MEMRegWRITE))
		ForwardB = 2;
	else if((Rt != 0) && (Rt == Rd4) && (WBRegWRITE))
		ForwardB = 3;
	else
		ForwardB = 0;
	if((EXMemWRITE == 0) && ((ForwardA == 1) || (ForwardB == 1)))
		Stall = 1;
	else
		Stall = 0;
end
endmodule
