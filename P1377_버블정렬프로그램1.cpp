#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> A(N+1, 0);
	for (int i = 1; i <= N; i++)
		cin >> A[i];

	int count = 0;
	for (int i = 1; i < N; i++)
	{
		if (A[i] > A[i + 1])
			count++;
	}
	count++;

	cout << count;
	return 0;
}
