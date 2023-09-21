#include <iostream>
#include <vector>
using namespace std;

int MIN[2];
void push(int n);
void pop();
vector<int> d;
/*
int main()
{
	int N, L;
	cin >> N >> L;

	vector<int> v(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	MIN[0] = v[0];
	MIN[1] = v[1];

	for (int i = 0; i < L; i++)
	{
		push(v[i]);
		cout << MIN[0] << endl;
	}

	for (int i = L; i < N; i++)
	{
		pop();
		push(v[i]);
		cout << MIN[0] << endl;
	}

	return 0;
}
*/
void push(int n)
{
	d.push_back(n);
	if (n < MIN[0])
	{
		MIN[1] = MIN[0];
		MIN[0] = n;
	}
	else if (n < MIN[1])
	{
		MIN[1] = n;
	}
}

void pop()
{
	/* vector는 앞에서 제거할 수 없다는 사실을 알았다. */
}