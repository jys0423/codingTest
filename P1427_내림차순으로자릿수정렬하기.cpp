#include <iostream>
using namespace std;

int main()
{
	string number;
	cin >> number;

	for (int i = 0; i < number.size() - 1; i++)
	{
		char* max = &(number[i]);
		for (int j = i + 1; j < number.size(); j++)
		{
			if (*max < number[j])
			{
				max = &(number[j]);
			}
		}
		char temp = number[i];
		number[i] = *max;
		*max = temp;
	}

	cout << number << endl;

	return 0;
}