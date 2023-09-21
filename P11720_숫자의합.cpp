#include <iostream>

int main()
{
	int n;
	char number[101];
	int sum = 0;

	std::cin >> n;
	std::cin >> number;

	for (int i = 0; i < n; i++)
	{
		sum += (number[i] - '0');
	}

	std::cout << sum;
	return 0;
}