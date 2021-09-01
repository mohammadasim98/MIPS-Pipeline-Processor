`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:56:42 12/21/2019 
// Design Name: 
// Module Name:    InstructionMemory 
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
module InstructionMemory(
	 input CLK,
    input [4:0] Address,
    output reg [31:0] Instruction
    );
reg [31:0] Memory [0:31];
always @ (Address)begin
	Instruction = Memory[Address];
end
initial begin
	Memory[0] = 32'h24100000;// li $s0, 0
	Memory[1] = 32'h24110004;// li $s1, 4
	Memory[2] = 32'h24120008;// li $s2, 8
	Memory[3] = 32'h24130004;// li $s3, 4
	Memory[4] = 32'h0800000c;// j cond
	Memory[5] = 32'h8e080000;// loop : lw $t0, 0($s0)
	Memory[6] = 32'h8e290000;//  lw $t1, 0($s1)
	Memory[7] = 32'h01094020;// add $t0, $t0, $t1
	Memory[8] = 32'hae480000;// sw $t0, 0($s2)
	Memory[9] = 32'h22100001;// addi $s0, $s0, 1
	Memory[10] = 32'h22310001;// addi $s1, $s1, 1
	Memory[11] = 32'h22520001;// addi $s2, $s2, 1
	Memory[12] = 32'h1613fff9;// bne $s0, $s3,loop
	Memory[13] = 32'h24140004;
	Memory[14] = 32'h0;
	Memory[15] = 32'h0;
	Memory[16] = 32'h0;
end
endmodule
