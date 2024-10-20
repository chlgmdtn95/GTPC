#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>


void	printArr(int arr[3][3])
{
	for (int i=0; i<3; i++)
	{
		std::cout << std::endl;
		for (int j=0; j<3; j++)
			std::cout << arr[i][j] << " ";
	}
	std::cout << std::endl;
}

bool chk(int arr[3][3], int row[3], int col[3], int top[3][3])
{
	for (int i=0; i<3; i++)
	{
		if (col[i] != std::max(std::max(arr[0][i], arr[1][i]), arr[2][i]))
			return (false);
		if (row[i] != std::max(std::max(arr[i][0], arr[i][1]), arr[i][2]))
			return (false);
	}
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			if (top[i][j] == 0 && arr[i][j] != 0)
				return (false);
			if (top[i][j] != 0 && arr[i][j] == 0)
				return (false);
		}
	}
	return (true);
}

void	brute(int &count, int i, int j, int arr[3][3], int row[3], int col[3], int top[3][3])
{
	for (int z=0; z<3; z++)
	{
		if (top[i][j] == 0)
		{
			arr[i][j] = 0;
			z = 3;
		}
		else
			arr[i][j] = z;
		if (i < 2)
			brute(count, i+1, j, arr, row, col, top);
		else if (i == 2 && j < 2)
			brute(count, 0, j+1, arr, row, col, top);
		else if (i == 2 && j == 2)
		{
			printArr(arr);
			if (chk(arr, row, col, top))
				count++;
		}
	}
}

int main()
{
	std::string input, tem;
	std::string tem1, tem2, tem3;
	int	ret, count;

	int top[3][3];
	int front[3][3];
	int side[3][3];
	int arr[3][3];

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			top[i][j] = 0;
			front[i][j] = 0;
			side[i][j] = 0;
			arr[i][j] = 0;
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

	int row[3];
	int col[3];

	for (int i=0; i<3; i++)
	{
		col[i] = front[0][i] + front[1][i] + front[2][i];
		row[2-i] = side[0][i] + side[1][i] + side[2][i];
	}

	count = 0;
	brute(count, 0, 0, arr, row, col, top);
	std::cout << count << std::endl;
}