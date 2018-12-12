#include <string>
#include <iostream>
//header file for the parser.cpp

class parser
{
public:
	parser(); 

	void parseText(std::string);

	bool readNextLine();

private: 
	int linePost; 
	int command; 
	std::string current; 




};