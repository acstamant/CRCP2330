#include <string>
#include <iostream>
//header file for the parser.cpp

class parser
{
public:
	parser();
	parser(std::string);
	//declared as a friend bc need to access non-public class members 

	//inputs file and removes the comments and blank space
	void parseText(std::string); 

	//checks to see if it is at the end of the file
	bool endofFile(std::string);

	void nextLine();


	//bool readNextLine();

private: 
	int linePost; 
	int command; 
	std::string current; 




};