`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:00:58 12/21/2019 
// Design Name: 
// Module Name:    InstructionDecodeStage 
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
module InstructionDecodeStage(
		input CLK, WBRegWRITE, MEMRegWRITE,
		input [4:0]Rd2, Rd3,
		input [31:0]Instruction1, BusWFlipFlop, 
		input [31:0]PC1, ALUout, MemMuxout,
		input [4:0]Rd4,
		output EXMemWRITE, mem2Reg,
		output reg[31:0]BusAFlipFlop, BusBFlipFlop,
		output reg [31:0]ExtOUT, inMUX, 
		output reg [4:0]Rd1, 
		output EXRegWRITE,
		output [1:0]ALUop, 
		output ALUsrc, PCsrc, b_invert, Stall
		);
wire ExtOP, J;
reg ZERO;
wire [31:0]BranchRESULT;
reg [31:0]MuxA, MuxB;
wire [31:0]BusA, BusB, BusDiff;
wire [1:0]ForwardA, ForwardB;
RegisterFile R0(CLK, WBRegWRITE, Instruction1[25:21], Instruction1[20:16], Rd4, BusA, BusB, BusWFlipFlop);
Control control(
						CLK,Stall, Instruction1[5:0], Instruction1[31:26], 
						EXRegWRITE, EXMemWRITE, ExtOP, b_invert, ALUsrc, 
						regDST, mem2Reg, J, beq, bne, ALUop
					); 
HazardDetector H0(
						Instruction1[25:21], Instruction1[20:16], Rd2,
						Rd3, Rd4, EXRegWRITE, MEMRegWRITE, WBRegWRITE, 
						EXMemWRITE, ForwardA, ForwardB, Stall
						);					
assign BranchRESULT = PC1 + {{16{Instruction1[15]}}, Instruction1[15:0]};
assign PCsrc = (beq & ZERO) | (bne & (~ZERO)) | J;
assign BusDiff = MuxA - MuxB;
always @ (*)begin
	if(regDST)
		Rd1 = Instruction1[15:11];
	else
		Rd1 = Instruction1[20:16];
	if(J)
		inMUX = {PC1[31:26], Instruction1[25:0]};
	else 
		inMUX = BranchRESULT;
	case(ForwardA)
		2'b00:MuxA = BusA;
		2'b01:MuxA = ALUout;
		2'b10:MuxA = MemMuxout;
		2'b11:MuxA = BusWFlipFlop;
	endcase
	case(ForwardB)
		2'b00:MuxB = BusB;
		2'b01:MuxB = ALUout;
		2'b10:MuxB = MemMuxout;
		2'b11:MuxB = BusWFlipFlop;
	endcase
end
always @ (posedge CLK)begin
	BusAFlipFlop <= MuxA;
	BusBFlipFlop <= MuxB;
	if(ExtOP)
		ExtOUT <= {{16{Instruction1[15]}}, Instruction1[15:0]};
	else
		ExtOUT <= {16'h0000, Instruction1[15:0]};
end
always @ (*)begin
	if(BusDiff)
		ZERO = 0;
	else
		ZERO = 1;
end
endmodule
