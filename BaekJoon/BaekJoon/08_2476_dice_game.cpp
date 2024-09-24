#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int CalcFunc(int arr[3])
{
	int dice[7] = { 0 };
	int answer = 0, count = 0;

	for (int i = 0; i < 3; i++)
	{
		dice[arr[i]]++;
	}

	for (int i = 0; i < 7; i++)
	{
		if (dice[i] == 3) answer = i * 1000 + 10000;
		if (dice[i] == 2) answer = i * 100 + 1000;
	}

	if (answer == 0)
	{
		sort(arr, arr + 3);
		answer = arr[2] * 100;
	}

	return answer;
}

int main()
{
	vector<int> vec;
	int N = 0;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int arr[3] = { 0 };

		for (int j = 0; j < 3; j++)
		{
			cin >> arr[j];
		}
		vec.push_back(CalcFunc(arr));
	}

	int Max = 0;
	for (int i = 0; i < N; i++)
	{
		Max = max(Max, vec[i]);
	}

	cout << Max;

	return 0;
}
