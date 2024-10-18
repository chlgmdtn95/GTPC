#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string input;
	int len;

	std::getline(std::cin, input);
	len = input.length();
	int dp[len][2];
	
	dp[len-1][0] = input.at(len-1)=='0'? 0: 1;
	dp[len-1][1] = input.at(len-1)=='0'? 1: 0;

	for (int i=len - 2 ; i >= 0; i--)
	{
		if (input.at(i) == '1')
		{
			dp[i][0] = std::min(dp[i+1][0] + 1, dp[i+1][1] + 1);
			dp[i][1] = std::min(dp[i+1][0] + 1, dp[i+1][1]);
		}
		else
		{
			dp[i][0] = std::min(dp[i+1][0], dp[i+1][1] + 1);
			dp[i][1] = std::min(dp[i+1][0] + 1, dp[i+1][1] + 1);
		}
	}
	std::cout << dp[0][1] << std::endl;
}