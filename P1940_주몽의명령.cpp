#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, unique;
	cin >> N >> unique;
	vector<int> v(N, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int left = 0;
	int right = N - 1;
	int count = 0;

	while (left < right)
	{
		int sum = v[left] + v[right];

		if (sum < unique)
		{
			left++;
		}
		else if (sum > unique)
		{
			right--;
		}
		else
		{
			count++;
			left++;
			right--;
		}
	}

	cout << count << endl;
	return 0;
}
