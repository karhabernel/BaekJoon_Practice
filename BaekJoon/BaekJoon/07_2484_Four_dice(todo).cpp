//todo. failed?

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calc(int arr[4])
{
	int dice[7] = { 0 };
	int count = 0;
	int answer = 0;

	for (int i = 0; i < 4; i++)
	{
		dice[arr[i]]++;
	}

	for (int i = 0; i < 7; i++)
	{
		if (dice[i] == 4) answer = 50000 + i * 5000;
		if (dice[i] == 3) answer = 10000 + i * 1000;

		if (answer != 0) return answer;
	}
	
	int flag = 0;
	int temp = 0;
	for (int i = 0; i < 7; i++)
	{
		if (dice[i] == 2)
		{
			flag++;
			if (flag == 1) answer = 1000 + dice[i] * 100;
			if (flag == 2) answer = 2000 + temp * 500 + dice[i] * 500;
			temp = i;
		}
	}

	if (answer == 0)
	{
		sort(arr, arr+4);
		answer = arr[3] * 100;
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
		int arr[4] = { 0 };

		for (int j = 0; j < 4; j++)
			cin >> arr[j];

		vec.push_back(calc(arr));
	}

	int Max = 0;
	for (int i = 0; i < N; i++)
	{
		Max = max(Max, vec[i]);
	}

	cout << Max;

	return 0;
}










//================================================================================================
//int N;
//vector<int> d1;
//vector<int> d2;
//vector<int> d3;
//vector<int> d4;
//
//int Same4(int die)
//{
//	return 50000 + (die * 5000);
//}
//
//int Same3(int die)
//{
//	return 10000 * (die * 1000);
//}
//
//int Same2x2(int die1, int die2)
//{
//	return 2000 + (die1 * 500) + (die2 * 500);
//}
//
//int Same2(int die)
//{
//	return 1000 + (die * 100);
//}
//
//int main()
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> d1[i] >> d2[i] >> d3[i] >> d4[i];
//
//		if(d1[i]==d2[i]==d3[i]==d4[i])
//			Same4()
//
//	}
//
//	return 0;
//}