#include <iostream>

using namespace std;

int main()
{
	int num[9] = { 0 };
	for (int i = 0; i < 9; i++)
	{
		cin >> num[i];
	}

	int MaxValue = 0;
	int MaxValueIndex = 0;

	for (int i = 0; i < 9; i++)
	{
		if (num[i] > MaxValue)
		{
			MaxValue = num[i];
			MaxValueIndex = i+1;
		}
	}

	cout << MaxValue << "\n" << MaxValueIndex;


	return 0;
}