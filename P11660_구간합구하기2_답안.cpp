#include <iostream>
#include <vector>
using namespace std;

// 원본배열을 유지할 필요가 있나?
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));    // 원본배열
	vector<vector<int>> D(N + 1, vector<int>(N + 1, 0));    // 합배열

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> A[i][j];
			D[i][j] = D[i - 1][j] + D[i][j - 1] - D[i - 1][j - 1] + A[i][j];
		}
	}

	for (int i = 0; i < M; i++)
	{
		int x1, y1, x2, y2, result = 0;
		cin >> x1 >> y1 >> x2 >> y2;

		result = D[x2][y2] - D[x1 - 1][y2] - D[x2][y1 - 1] + D[x1 - 1][y1 - 1];
		cout << result << endl;
	}
	return 0;
}