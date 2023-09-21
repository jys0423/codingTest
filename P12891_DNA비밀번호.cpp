#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int S, P;
	int A, C, G, T;
	cin >> S >> P;

	vector<char> v(S, NULL);
	for (int i = 0; i < S; i++)
		cin >> v[i];

	cin >> A >> C >> G >> T;

	int left = 0, right = P-1;
	int count = 0;
	int a = 0, c = 0, g = 0, t = 0;
	for (int i = left; i <= right; i++)
	{
		switch (v[i]) {
		case 'A':
			a++;
			break;
		case 'C':
			c++;
			break;
		case 'G':
			g++;
			break;
		case 'T':
			t++;
			break;
		}
	}

	if (a >= A && c >= C && g >= G && t >= T)
		count++;

	while (right < S-1)
	{
		switch (v[left]) {
		case 'A':
			a--;
			break;
		case 'C':
			c--;
			break;
		case 'G':
			g--;
			break;
		case 'T':
			t--;
			break;
		}

		left++;

		right++;

		switch (v[right]) {
		case 'A':
			a++;
			break;
		case 'C':
			c++;
			break;
		case 'G':
			g++;
			break;
		case 'T':
			t++;
			break;
		}

		if (a >= A && c >= C && g >= G && t >= T)
			count++;
	}

	cout << count << endl;

	return 0;
}