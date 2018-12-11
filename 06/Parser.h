#include <iostream>
#include <string> 
#include <fstream>
#include <string>
#include <map>

using namespace std; 

class parser {
public:
	parser() {
	}
	void parseText(string fileName)
	{
		char charIn;
		std::cout << "Parser Class Start" << endl;
		//reads in the file	
		ifstream in(fileName, fstream::in);
		//While there are still characters
		while(in.get(charIn)) 
		{
			std::cout << charIn << endl;

			//if(charIn == "@") {
		}

	}

	void mapA(){
		


	}
};


