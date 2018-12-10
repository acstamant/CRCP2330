#include <iostream>
#include <string> 
#include <fstream>
#include <cstdlib>
#include "Parser.h"

using namespace std; 

int main(){
//ofstream constructor opens the file
	ofstream outFile("ed.text", ios::ate);//ios::out was erasing the file

	//exit if unable to open file
	if(!outFile)
	{
		cout << "File could not be opened" << endl;
		exit(EXIT_FAILURE);
	}

	outFile<<endl;
}

