`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:04:32 12/02/2019 
// Design Name: 
// Module Name:    MemoryStage 
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
module MemoryStage(
	 input MEMMemWRITE, CLK, mem2Reg1, MEMRegWRITE,
	 input [31:0]DataW, Rd2, ALUresult,
	 output [31:0]memDATA,
	 output reg [31:0]MemMuxout, 
	 output reg [4:0]Rd3, 
	 output reg WBRegWRITE
    );
DATAMEM datamemory(CLK, MEMMemWRITE, ALUresult[4:0], DataW, memDATA);
always @ (posedge CLK)begin
	Rd3 <= Rd2;
	WBRegWRITE <= MEMRegWRITE;
end
always @ (*)begin
	if(mem2Reg1)
		MemMuxout = memDATA;
	else
		MemMuxout = ALUresult;
end
endmodule
