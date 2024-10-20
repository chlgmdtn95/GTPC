#include <iostream>
#include <sstream>
#include <string>
#include <list>

int main()
{
	std::string input;
	std::stringstream ss;
	int	tem, n;
	std::getline(std::cin, input);
	n = stoi(input);

	std::list<int> list;

	list.push_front(0);
	for (int i=1; i<n + 1; i++)
	{
		for (std::list<int>::iterator iter = list.begin(); iter != list.end(); iter++)
		{
			if (i - *iter == 2 || i - *iter == 3)
			{
				list.insert(++iter, i);
				iter--;
			}
		}
	}
	for (std::list<int>::iterator iter = list.begin(); iter != list.end(); iter++)
	{
		if (n - *iter < 2)
			std::cout << 'B';
		else if (n - *iter < 4)
			std::cout << 'A';
		else if (n - *iter < 5)
			std::cout << 'O';
	}
	std::cout << std::endl;
}