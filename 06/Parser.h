#include <string>
#include <iostream>
//header file for the parser.cpp

class parser
{
public:
	parser();
	parser(std::string);

	void advance();

	std::string commandType();

	std::string removeComments(std::string);
	//use a switch case

	std::string symbol();
	std::string dest();
	std::string comp();
	std::string jump();
	void numOfLines(int); 
	bool hasMoreCommands(std::string, int&);


	//checks to see if it is at the end of the file
	bool endofFile(std::string);

	void nextLine();


	//bool readNextLine();

private: 
	




};