#include <iostream>

using namespace std;


int main()
{
	int N, K, time = 0;
	cin >> N;

	while (true)
	{
		K++;
		if (N == 0) break;
		time++;
		if (N < K) K = 1;
		N -= K;
	}

	cout << time;

	return 0;
}
