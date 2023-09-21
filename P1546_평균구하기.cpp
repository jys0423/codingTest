#include <iostream>
#include <vector>

int main()
{
	int N;
	int input;
	std::vector<int> v;
	int max;
	double sum = 0;

	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> input;
		v.push_back(input);
	}

	max = v[0];
	for (int i = 1; i < N; i++)
	{
		if (max < v[i])
			max = v[i];
	}

	for (int i = 0; i < N; i++)
	{
		sum += (double)v[i] / max * 100;
	}

	std::cout << (double)sum / N << std::endl;

	return 0;
}