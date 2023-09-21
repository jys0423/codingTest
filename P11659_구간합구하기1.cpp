#include <iostream>

/* 구간 합을 이용하지 않은 케이스 */
/*
int main()
{
	int numOfData;
	int calcTimes;
	int i, j;
	int numbers[100000] = { 0, };
	int answers[100000] = { 0, };

	std::cin >> numOfData >> calcTimes;
	for (int k = 0; k < numOfData; k++)
		std::cin >> numbers[k];

	for (int k = 0; k < calcTimes; k++)
	{
		std::cin >> i >> j;
		for (int l = i; l <= j; l++)
			answers[k] += numbers[l-1];
	}

	for (int k = 0; k < calcTimes; k++)
		std::cout << answers[k] << '\n';

	return 0;
}
*/

/* 구간 합을 이용하는 케이스 */
/*
int main()
{
	int numOfData;
	int calcTimes;
	int i, j;
	int numbers[100000];
	int S[100000];

	std::cin >> numOfData >> calcTimes;
	for (int k = 0; k < numOfData; k++)
		std::cin >> numbers[k];

	S[0] = numbers[0];
	for (int k = 1; k < numOfData; k++)
		S[k] = S[k - 1] + numbers[k];

	for (int k = 0; k < calcTimes; k++)
	{
		std::cin >> i >> j;
		if (i <= 1) // numbers[1], S[1]부터 채우고 S[0]을 0으로 채워놓으면 이런 조건문을 없앨 수 있다.
			std::cout << S[j - 1] << std::endl;
		else
			std::cout << S[j - 1] - S[i - 2] << std::endl;
	}

	return 0;
}
*/