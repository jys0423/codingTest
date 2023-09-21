#include <iostream>
#include <vector>

// Stack overflow ... T^T -> vector½áµµµÊ
/*
int main()
{
	int size, calcTimes;
	std::cin >> size >> calcTimes;

	std::vector<std::vector<int>> S(size, std::vector<int>(size + 1, 0));
	
	for (int i = 0; i < size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			int temp;
			std::cin >> temp;
			S[i][j] = S[i][j - 1] + temp;
		}
	}

	for (int i = 0; i < calcTimes; i++)
	{
		int x1, y1, x2, y2, result = 0;
		std::cin >> x1 >> y1 >> x2 >> y2;

		while (x1 <= x2)
		{
			result += S[x1-1][y2] - S[x1-1][y1 - 1];
			x1++;
		}
		std::cout << result << std::endl;
	}

	return 0;
}
*/