#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> v(N, 0);
	vector<char> result;
	stack<int> s;

	for (int i = 0; i < N; i++)
		cin >> v[i];

	int c = 0;
	for (int i = 0; i < N; i++)
	{
		while (v[i] > c)
		{
			c++;
			s.push(c);
			result.push_back('+');
		}
		if (v[i] == s.top())
		{
			s.pop();
			result.push_back('-');
		}
		else
		{
			cout << "NO\n";
			return 0;
		}
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << '\n';
	}

	return 0;
}