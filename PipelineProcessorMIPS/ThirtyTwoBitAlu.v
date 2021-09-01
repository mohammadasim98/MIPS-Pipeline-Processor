`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:56:49 11/18/2019 
// Design Name: 
// Module Name:    ThirtyTwoBitAlu 
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
module ThirtyTwoBitAlu(
		input [31:0]A, 
		input [31:0]B,												//define input operands
		output reg [31:0]result, Output,									//define output of ALU
		input [1:0]op, 												//define operation
		input binv, CLK					//define cout, overflow bit and set if less than bit
		);
	reg cout, overflow, SLT;
	reg [31:0]sum;														//define sum as reg
	reg [31:0]_B;														//define second input copy as reg
	reg carryin;														//define carryin as reg
	always @(*) begin				//always block triggered at change in op, A, B, binv, _B
		if(binv)															//check if binv is 1
			_B = ~B;														//1's complement of the second input 
		else																//else if binv is 0
			_B = B;														//second input as it is			
		{carryin, sum[30:0]} = A[30:0] + _B[30:0] + binv;	//assign carryin by adding the first 30 bits
		{cout, sum} = A[31:0] + _B[31:0] + binv;				//assign cout and sum
		overflow = cout ^ carryin;									//assign overflow
		SLT = overflow ^ sum[31];
		case(op)															//case statement for the operation to be performed
			2'b00:Output = A & _B;									//AND
			2'b01:Output = A | _B;									//OR
			2'b10:Output = sum;										//sum
			2'b11:Output = SLT;										//set if less than
			default: Output = 32'hxxxxxxxx;						//output is none / unknown by default 
		endcase	//assign set if less than bit														//end of case statement
	end						//end of if condition
	always @ (posedge CLK)begin
		result <= Output;
	end
endmodule																//end of ALU module
