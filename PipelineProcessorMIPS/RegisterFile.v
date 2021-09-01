`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:02:39 12/21/2019 
// Design Name: 
// Module Name:    RegisterFile 
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
module RegisterFile(
    input CLK,
    input regWRITE,
    input [4:0] AddressA,
    input [4:0] AddressB,
    input [4:0] AddressW,
    output reg [31:0] BusA,
    output reg [31:0] BusB,
    input [31:0] BusW
    );

reg [31:0] Regs [31:0];
integer i;
always@(*)begin
	BusA = Regs[AddressA];
	BusB = Regs[AddressB];
end
always@(posedge CLK)begin
		if(regWRITE)
			Regs[AddressW] <= BusW;
end
initial begin
	for(i=0; i<=31; i = i + 1)
		Regs[i] = 0;
end
endmodule

