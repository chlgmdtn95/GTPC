#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

int main()
{
	std::string input, tem;
	std::string tem1, tem2, tem3;
	int	ret, count;

	int top[3][3];
	int front[3][3];
	int side[3][3];

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			top[i][j] = 0;
			front[i][j] = 0;
			side[i][j] = 0;
		}
	}
	for (int i=0; i<3; i++)
	{
		std::stringstream ss;
		std::getline(std::cin, input);
		ss.str(input);
		ss >> tem1;
		ss >> tem2;
		ss >> tem3;
		top[i][0] = stoi(tem1);
		top[i][1] = stoi(tem2);
		top[i][2] = stoi(tem3);
	}
	for (int i=0; i<3; i++)
	{
		std::stringstream ss;
		std::getline(std::cin, input);
		ss.str(input);
		ss >> tem;
		front[i][0] = stoi(tem);
		ss >> tem;
		front[i][1] = stoi(tem);
		ss >> tem;
		front[i][2] = stoi(tem);
	}
	for (int i=0; i<3; i++)
	{
		std::stringstream ss;
		std::getline(std::cin, input);
		ss.str(input);
		ss >> tem;
		side[i][0] = stoi(tem);
		ss >> tem;
		side[i][1] = stoi(tem);
		ss >> tem;
		side[i][2] = stoi(tem);
	}
	// Parse

	// std::cout << "top" << std::endl;
	// for (int i=0; i<3; i++)
	// {
	// 	for (int j=0; j<3; j++)
	// 	{
	// 		std::cout << top[i][j] << " ";
	// 	}
	// 	std::cout << std::endl;
	// }
	// std::cout << std::endl;
	// std::cout << "front" << std::endl;
	// for (int i=0; i<3; i++)
	// {
	// 	for (int j=0; j<3; j++)
	// 	{
	// 		std::cout << front[i][j] << " ";
	// 	}
	// 	std::cout << std::endl;
	// }
	// std::cout << std::endl;
	// std::cout << "side" << std::endl;
	// for (int i=0; i<3; i++)
	// {
	// 	for (int j=0; j<3; j++)
	// 	{
	// 		std::cout << side[i][j] << " ";
	// 	}
	// 	std::cout << std::endl;
	// }
	// std::cout << std::endl;
	////Debug



	int arr[3][3];
	int row[3];
	int col[3];

	for (int i=0; i<3; i++)
	{
		col[i] = front[0][i] + front[1][i] + front[2][i];
		row[2-i] = side[0][i] + side[1][i] + side[2][i];
	}

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			if (top[i][j] == 0)
				arr[i][j] = 0;
			else
				arr[i][j] = std::min(front[0][j] + front[1][j] + front[2][j], side[0][2-i] + side[1][2-i] + side[2][2-i]);
		}
	}

	std::cout << std::endl;
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	count = 0;
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
		}
	}

	std::cout << std::endl;
	if (count == 0)
		std::cout << 0;
	else
		std::cout << ret;


	std::cout << std::endl;
}