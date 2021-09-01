`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:46:11 12/21/2019 
// Design Name: 
// Module Name:    InstructionFetchStage 
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
module InstructionFetchStage(
		input CLK, RST, Stall, PCsrc,
		input [31:0]inMux,
		output reg [31:0]Instruction1,
		output reg [31:0]PC1
    );
wire [31:0]PC, Instruction;

always @ (posedge CLK)begin
	if (PCsrc)
		Instruction1 <= 0;
	else
		if(Stall == 0)
			Instruction1 <= Instruction;
end
ProgramCounter P0(CLK, RST, Stall, PCsrc, inMux, PC, IncPC1);
Instructionmemory2 I0(PC[4:0], Instruction);
always @ (posedge CLK)begin
	PC1 <= PC;
end
endmodule
