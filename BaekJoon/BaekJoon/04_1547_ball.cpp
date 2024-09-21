#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, M;

	int arr[3] = { 1, 2, 3 };

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		swap(arr[a - 1], arr[b - 1]);
	}

	for (int i = 0; i < 3; i++)
	{
		if (arr[i] == 1)
		{
			cout << i + 1;
		}
	}

	return 0;
}
