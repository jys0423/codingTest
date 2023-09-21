#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ������ ���ԵǱ� ������ �̷��� �ϸ� �ȵȴ�.
int main()
{
	int N;
	cin >> N;

	vector<int> v(N, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int left = 0;
	int right = 1;
	int target = 2;
	int count = 0;

	while (target < N)
	{
		if (v[target] < v[left] + v[right])
		{
			target++;
		}
		else
		{
			if (v[target] == v[left] + v[right])
			{
				count++;
				target++;
			}

			left++;

			if (left == right)
			{
				right++;
				left = 0;
				if (right == target)
					target++;
			}
		}
	}

	cout << count << '\n';
	return 0;
}
