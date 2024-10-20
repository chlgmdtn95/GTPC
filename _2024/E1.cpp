#include <iostream>
#include <sstream>
#include <string>

std::string toBinary(int in)
{
	if (in / 2 <= 0)
		return (std::to_string(in));
	else
		return (toBinary(in / 2) + std::to_string(in % 2));
}

int main()
{
	std::string input, tem;
	std::stringstream ss;
	std::getline(std::cin, input);
	int	a, b;

	ss.str(input);
	ss >> tem;
	a = stoi(tem);
	ss >> tem;
	b = stoi(tem);

	std::string as, bs;

	as = toBinary(a);
	bs = toBinary(b);

	int count = 0;
	for (int i=0 ; i<as.length(); i++)
	{
		if (as.find(bs, i) != -1)
		{
			i = as.find(bs, i);
			count++;
		}
	}
	if (as.find(bs, as.length() - 1) != -1)
		count++;
	std::cout << count << std::endl;
}