#include <iostream>

using namespace std;

int main()
{
	long long a = 0 , b = 0;
	cin >> a >> b;

	if (a <= b)
		cout << (b - a + 1) * (b + a) / 2;
	else
		cout << (a - b + 1) * (a + b) / 2;



	return 0;
}