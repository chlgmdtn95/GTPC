#include <iostream>
#include <sstream>
#include <string>

int main()
{
	std::string input, tem;
	int	ham, cheese;
	std::stringstream ss;
	std::getline(std::cin, input);

	ss.str(input);
	ss >> tem;
	ham = stoi(tem);
	ss >> tem;
	cheese = stoi(tem);

	if (ham > 2 * cheese)
		std::cout << cheese;
	else
		std::cout << ham / 2;

	std::cout << std::endl;
}