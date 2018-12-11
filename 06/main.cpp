#include <iostream>
#include <string> 
#include <fstream>
#include <string>

#include "parser.h"

using namespace std; 

int main()
{
	parser p1;//creates the parser object 
	p1.parseText("add.asm"); //the object uses function to read in text file
	cout << endl; 
}
