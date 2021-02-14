//https://codeforces.com/problemset/problem/469/A

#include <iostream>
#include <climits>
#include <set>

int main()
{
	int test_cases = 0;
	std::cin >> test_cases;

	int x_temp = INT_MIN, y_temp = INT_MIN;
	int x_limit = INT_MIN, y_limit = INT_MIN;

	std::cin >> x_limit;
	int x_levels[x_limit] = {INT_MIN};

	//set for storing the unique level value
	std::set<int> s;
	std::set<int>::iterator it;

	for (int i = 0; i < x_limit; i++)
	{
		std::cin >> x_temp;
		x_levels[i] = x_temp;
		s.insert(x_temp);
		x_temp = INT_MIN;
	}

	std::cin >> y_limit;
	int y_levels[y_limit] = {INT_MIN};

	for (int j = 0; j < y_limit; j++)
	{
		std::cin >> y_temp;
		y_levels[j] = y_temp;
		s.insert(y_temp);
		y_temp = INT_MIN;
	}

	bool flag = true;
	for (int k = 1; k <= test_cases; k++)
	{
		flag = s.find(k) != s.end();
		if (!flag)
		{
			std::cout << "Oh, my keyboard!" << std::endl;
			return 0;
		}
	}
	std::cout << "I become the guy." << std::endl;

	return 0;
}