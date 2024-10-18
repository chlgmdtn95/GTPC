#include <iostream>
#include <sstream>
#include <string>

int	carring(int *arr, int k)
{
	int	carry = 0;

	if (arr[k] >= 5)
		carry = 1;
	else
		carry = 0;
	
	for (int i=0 ; i < k ; i++)
	{
		if (carry == 1)
		{
			if (arr[k - 1 - i] == 9)
			{
				arr[k - 1 - i] = 0;
				carry = 1;
			}
			else
			{
				arr[k - 1 - i]++;
				carry = 0;
			}
		}
	}
	if (carry == 1)
		return (1);
	else
		return (0);
}

int main()
{
	std::string input, tem;
	std::stringstream ss;
	int	ret;
	long	a, b, k, carry;
	char *test;
	std::getline(std::cin, input);

	ss.str(input);
	ss >> tem;
	a = stol(tem);
	ss >> tem;
	b = stol(tem);
	ss >> tem;
	k = stol(tem);

	
	int	arr[k + 1];
	ret = a / b;
	a = a % b;

	for (int i = 0; i < k + 1; i++)
	{
		a *= 10;
		arr[i] = (a / b) % 10;
		a = a % b;
	}

	ret += carring(arr, k);

	std::cout << ret << ".";
	for (int i=0; i<k ; i++)
		std::cout << arr[i];
	std::cout << std::endl;
}