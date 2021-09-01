`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:16:54 12/22/2019 
// Design Name: 
// Module Name:    WriteBackResult 
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
module WriteBackResult(
		input CLK,
		input [4:0]Rd3,
		input [31:0]MemMuxout, 
		output reg[31:0]BusWFlipFlop,
		output reg [4:0]Rd4
    );
always @ (posedge CLK)begin
	BusWFlipFlop <= MemMuxout;
	Rd4 <= Rd3;
end
endmodule
