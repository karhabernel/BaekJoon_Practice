#include <iostream>
#include <string>
using namespace std;


int main()
{
	char Char;
	string Str;

	while (1)
	{
		cin >> Char;
		if (Char == '#') break;
		getline(cin, Str);

		int Length = Str.length();
		int Count = 0;

		for (int i = 0; i < Length; i++)
		{
			if (Str[i] == Char || Str[i] == toupper(Char)) Count++;
		}

		cout << Char << " " << Count << "\n";
	}


	return 0;
}
