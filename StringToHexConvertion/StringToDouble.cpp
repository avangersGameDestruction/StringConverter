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

	// Converting a double to string with formatting restrictions
	double dble = 3.771234567;
	std::ostringstream osStream;
	osStream.fill('#');
	osStream << "<<<" << std::setprecision(6) << std::setw(20) << dble << ">>>";
	
	string = osStream.str(); // formatted converted double is now in string
	std::cout << "\nThe value of the string variable string is " << string << std::endl;

	return 0;
}