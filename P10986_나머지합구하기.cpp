#include <iostream>
#include <vector>

int main()
{
	int N, M;
	std::cin >> N >> M;

	int numbers[106] = {};
	std::vector<int> results = {};

	for (int i = 0; i < N; i++) {
		std::cin >> numbers[i];
	}

	for (int i = 0; i < N; i++)
	{
		int sum = 0;
		for (int j = i; j >= 0; j--)
		{
			sum += numbers[j];
			results.push_back(sum);
		}
	}

	int zero_count = 0;
	for (int i = 0; i < results.size(); i++)
	{
		if ((results[i] % M) == 0)
			zero_count++;
	}

	std::cout << zero_count << '\n';
	return 0;
}