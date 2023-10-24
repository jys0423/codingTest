#include <iostream>
using namespace std;

void insertion_sort(int* arr, int len);

int main()
{
	int N;
	int arr[1000];

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	
	insertion_sort(arr, N);
	
	int sum = 0;
	int min_time = 0;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
		min_time += sum;
	}
	cout << min_time << endl;

	return 0;
}

void insertion_sort(int* arr, int len)
{
	for (int i = 1; i < len; i++)
	{
		int sort_val = arr[i];
		int j = i - 1;
		for (; j >= 0; j--)
		{
			if (arr[j] < sort_val)
				break;
			else
			{
				arr[j + 1] = arr[j];
			}
		}
		arr[j + 1] = sort_val;
	}
}