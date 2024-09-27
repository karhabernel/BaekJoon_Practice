#include <iostream>

using namespace std;

int main()
{
	string InStr;

	cin >> InStr;
	double score = 0;

	//switch (InStr[0])
	//{
	//case 'A' :
	//	score += 4.0;
	//	break;
	//case 'B' :
	//	score += 3.0;
	//	break;
	//case 'C' :
	//	score += 2.0;
	//	break;
	//case 'D' :
	//	score += 1.0;
	//	break;
	//default:
	//	break;
	//}

	//switch (InStr[1])
	//{
	//case '+':
	//	score += 0.3;
	//	break;
	//case '-':
	//	score -= 0.3;
	//	break;
	//default:
	//	break;
	//}
	if (InStr[0] == 'A') score = 4.0;
	else if (InStr[0] == 'B')score = 3.0;
	else if (InStr[0] == 'C')score = 2.0;
	else if (InStr[0] == 'D')score = 1.0;


	if (InStr[1] == '+') score += 0.3;
	else if (InStr[1] == '-') score -= 0.3;


	cout << fixed;
	cout.precision(1);

	cout << score;


	return 0;


}

