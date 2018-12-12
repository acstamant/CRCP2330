#include <string>
#include <iostream>
//header file for the parser.cpp


enum class commands{A_COMMAND, C_COMMAND, L_COMMAND};  
class parser
{
public:
	parser();
	parser(std::string);

	void advance();

	std::string removeComments(std::string);
	//use a switch case

	std::string symbol();
	std::string dest();
	std::string comp();
	std::string jump();
	commands commandType();



	//bool readNextLine();

private: 
	std::string instruction; 
	




};