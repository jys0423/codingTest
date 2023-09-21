#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> v(N, 0);

	for (int i = 0; i < N; i++)
		cin >> v[i];

	int result;

	for (int i = 0; i < N - 1; i++)
	{
		result = -1;
		for (int j = i + 1; j < N; j++)
		{
			if (v[i] < v[j])
			{
				result = v[j];
				break;
			}
		}
		cout << result << ' ';
	}
	cout << -1 << '\n';
	return 0;
}