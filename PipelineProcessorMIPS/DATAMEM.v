
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:20:40 12/10/2019 
// Design Name: 
// Module Name:    DataMemory 
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
module DATAMEM(
    input clk, WriteEnable, input [4:0] Address,input [31:0] BusIn,
    output [31:0] BusOut
    );
	 integer i;
	 reg [31:0] Memory [31:0];
	 assign BusOut = Memory[Address];
	always@(posedge clk)begin
	 if(WriteEnable)
		Memory[Address] <= BusIn;
	end
	 initial begin
		Memory[0] = 4;
		Memory[1] = 5;
		Memory[2] = 6;
		Memory[3] = 7;
		Memory[4] = 8;
		Memory[5] = 9;
		Memory[6] = -17;
		Memory[7] = 1;
		Memory[8] = 2;
		Memory[9] = 3;
		Memory[10] = 4;
		Memory[11] = 4;
		for(i = 12; i <= 31; i = i + 1)
			Memory[i] = 0;
	 end
endmodule

