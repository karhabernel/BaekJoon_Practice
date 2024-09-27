#include <iostream>

using namespace std;


int main()
{
	for (int i = 0; i < 3; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int sum = a + b + c + d;
		if (sum == 0) cout << "D" << "\n";
		else if (sum == 1) cout << "C" << "\n";
		else if (sum == 2) cout << "B" << "\n";
		else if (sum == 3)cout << "A" << "\n";
		else cout << "E" << "\n";

	}

	return 0;
}






//
//int arr[4];
//int arr2[4];
//int arr3[4];
//
//int main()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> arr2[i];
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> arr3[i];
//	}
//
//	int back1 = 0, back2 = 0, back3 = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		if (arr[i] == 1)
//			back1++;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (arr2[i] == 1)
//			back2++;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (arr3[i] == 1)
//			back3++;
//	}
//
//	switch (back1)
//	{
//	case 0:cout << "D"; break;
//	case 1:cout << "C"; break;
//	case 2:cout << "B";  break;
//	case 3:cout << "A";  break;
//	case 4:cout << "E";  break;
//	}
//
//	cout << "\n";
//	switch (back2)
//	{
//	case 0:cout << "D"; break;
//	case 1:cout << "C"; break;
//	case 2:cout << "B";  break;
//	case 3:cout << "A";  break;
//	case 4:cout << "E";  break;
//	}
//
//	cout << "\n";
//	switch (back3)
//	{
//	case 0:cout << "D"; break;
//	case 1:cout << "C"; break;
//	case 2:cout << "B";  break;
//	case 3:cout << "A";  break;
//	case 4:cout << "E";  break;
//	}
//
//
//	return 0;
//}