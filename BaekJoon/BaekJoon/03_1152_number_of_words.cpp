#include <iostream>
#include <string>

using namespace std;


int main()
{
	string InStr;
	int WordNum = 1;

	getline(cin, InStr);

	if (InStr.length() == 1 && InStr[0] == ' ')
	{
		cout << 0;
		return 0;
	}

	for (int i = 1; i < InStr.length() - 1; i++)
	{
		if (InStr[i] == ' ')
			WordNum++;
	}

	cout << WordNum++;


	return 0;
}
