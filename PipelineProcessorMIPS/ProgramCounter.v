`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:47:38 12/21/2019 
// Design Name: 
// Module Name:    ProgramCounter 
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
module ProgramCounter(
		input CLK, RST, Stall, PCsrc,
		input [31:0]inMux,
		output reg [31:0]PC,
		output reg [31:0]IncPC1
    );
wire [31:0]IncPC;
assign IncPC = PC + 1;
reg [31:0]PCin;
always @ (*)begin
	if(PCsrc)
		PCin = inMux;
	else 
		PCin = IncPC;
end
always @ (posedge CLK)begin
	IncPC1 <= IncPC;
end
always @ (posedge CLK)begin
	if(RST)
		PC <= 0;
	else
		if(Stall == 0)
			PC <= PCin; 
end
endmodule
