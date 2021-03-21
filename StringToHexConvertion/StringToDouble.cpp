#include <iostream>
#include <iomanip>
#include <sstream>

int main()
{
	// Converting the content of a char array or a string to a double variable
	double Double;
	std::string string;
	string = "4.5";
	std::istringstream(string) >> Double;
	std::cout << "\nThe value of the double variable Double is " << Double << std::endl;
	std::istringstream("9.87654") >> Double;
}