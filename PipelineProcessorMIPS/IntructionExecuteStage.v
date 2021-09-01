`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:09:22 12/21/2019 
// Design Name: 
// Module Name:    IntructionExecuteStage 
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
module IntructionExecuteStage(
		input CLK, ALUsrc, EXMemWRITE, mem2Reg, EXRegWRITE, b_invert,
		output reg MEMMemWRITE, mem2Reg1, MEMRegWRITE, 
		input [1:0]ALUop,
		input [31:0]BusAFlipFlop, BusBFlipFlop, ExtOUT, IncPC2, PC2,
		input [4:0]Rd1,
		output reg [4:0]Rd2,
		output reg [31:0]BusBF1, 
		output [31:0]ALUresult, ALUout
    );
reg [31:0]ALUinA; 
reg [31:0]ALUinB;
always @ (*)begin
	ALUinA = BusAFlipFlop;
	if(ALUsrc)
		ALUinB = ExtOUT;
	else
		ALUinB = BusBFlipFlop;
end

ThirtyTwoBitAlu ALU(ALUinA, ALUinB, ALUresult, ALUout, ALUop, b_invert, CLK);
always @ (posedge CLK)begin
	MEMMemWRITE <= EXMemWRITE;
	BusBF1 <= BusBFlipFlop;
	mem2Reg1 <= mem2Reg;
	MEMRegWRITE <= EXRegWRITE;
	Rd2 <= Rd1;
end
endmodule
