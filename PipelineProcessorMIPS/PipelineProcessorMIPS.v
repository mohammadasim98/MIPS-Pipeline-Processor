`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:34:29 12/22/2019 
// Design Name: 
// Module Name:    PipelineProcessorMIPS 
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
module PipelineProcessorMIPS(input CLK, RST
    );
	wire EXRegWRITE, MEMRegWRITE, WBRegWRITE, mem2Reg, mem2Reg1, mem2Reg2, EXMemWRITE, MEMMemWRITE, Stall;
	wire [4:0]Rd1, Rd2, Rd3, Rd4;
	wire [31:0] Instruction1, inMUX, BusWF1, BusBF1, ALUresult;
	wire [31:0]BusWFlipFlop, BusAFlipFlop, BusBFlipFlop, ExtOUT, IncPC2;
	wire [31:0]IncPC1, PC1, PC2, PCMUX, memDATA, MemMuxout, ALUresultFlipFlop, ALUout;
	wire [1:0]ALUop;
	InstructionFetchStage IF(CLK, RST, Stall, PCsrc, inMUX, Instruction1, PC1);
	InstructionDecodeStage ID(
							CLK, WBRegWRITE, MEMRegWRITE, Rd2, Rd3, Instruction1, 
							BusWFlipFlop,  PC1, ALUout, MemMuxout, Rd4, EXMemWRITE, 
							mem2Reg, BusAFlipFlop, BusBFlipFlop, ExtOUT,
							inMUX, Rd1, EXRegWRITE, ALUop, ALUsrc, 
							PCsrc, b_invert, Stall
							);
	IntructionExecuteStage IEEX(
										CLK, ALUsrc, EXMemWRITE, mem2Reg, EXRegWRITE, 
										b_invert, MEMMemWRITE, mem2Reg1, 
										MEMRegWRITE, ALUop,
										BusAFlipFlop, BusBFlipFlop, ExtOUT, IncPC2, 
										PC2, Rd1, Rd2, BusBF1, ALUresult, ALUout);
	MemoryStage MEM(
						MEMMemWRITE, CLK, mem2Reg1, MEMRegWRITE,
						BusBF1, Rd2, ALUresult, 
						memDATA, MemMuxout, Rd3, WBRegWRITE);
	WriteBackResult WBack(CLK, Rd3, MemMuxout, BusWFlipFlop, Rd4);
endmodule
