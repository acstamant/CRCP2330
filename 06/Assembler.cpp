
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std; 

int main()
{
	ifstream inFile("add.asm", ios::in);

	if(!inFile)
	{
		cerr<< "File could not be opened"<<endl; 
		exit(EXIT_FAILURE);
	}
}

