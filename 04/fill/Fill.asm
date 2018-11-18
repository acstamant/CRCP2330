// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Fill.asm

// Runs an infinite loop that listens to the keyboard input.
// When a key is pressed (any key), the program blackens the screen,
// i.e. writes "black" in every pixel;
// the screen should remain fully black as long as the key is pressed. 
// When no key is pressed, the program clears the screen, i.e. writes
// "white" in every pixel;
// the screen should remain fully clear as long as no key is pressed.

@SCREEN
D=A
@i
M=D //initalizes screen and i to the same memory, i tells you where the next screen is 

(LOOP)
	@24576
	D=M 
	@BLACK 
	D; JNE 
	@WHITE
	D; JEQ


(BLACK)
	@SCREEN
	M=-1 

	@i
	M=A
	D=M+1 //increments i to the next section of the screen 	
	@LOOP
	0; JMP

(WHITE)
	@SCREEN 
	M=0

	@i 
	M=A
	D=M-1 //deincrements i so that the black goes away

	@LOOP
	D; JMP

(END)
@END
D;JMP //infinite loop 