// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Mult.asm

// Multiplies R0 and R1 and stores the result in R2.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

@0
D=M
@i
M=D //this sets 0 and i to the same memory 

 (LOOP)

 	@i
 	D=M
 	@END
 	D; JEQ //causes the loop to end if i=0

 	@1
 	D=M
 	@2
 	M=M+D //adds the number in R1 to R2

 	@i
 	M=M-1 //this deincrements i
 	
 	@LOOP

 (END)	
	 @END
