
#include <fstream>


#include "parser.cpp"
#include "symbolTable.cpp"

using namespace std; 

int main()
{
	parser p1;//creates the object p1 of the parser class

	p1.parseText("add.asm"); //the object uses function to read in text file

	return 0; 
	
}
