// ���������� �� ��������, ���������� ��޵Ǿ����� �������ķ� ����
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> v(N, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N-1-i; j++)
		{
			if (v[j] > v[j + 1])
			{
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
}