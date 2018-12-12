#include <string>
#include <iostream>
//header file for the parser.cpp

class parser
{
public:
	parser();

	//declared as a friend bc need to access non-public class members 
	//friend std::istream& operator >>(std::istream&, const parser&); //stream extraction operator function, tajes teh istream refererence input  

	//inputs file and removes the comments and blank space
	void parseText(std::string); 

	//checks to see if it is at the end of the file
	bool endofFile(std::string);



	//bool readNextLine();

private: 
	int linePost; 
	int command; 
	std::string current; 




};