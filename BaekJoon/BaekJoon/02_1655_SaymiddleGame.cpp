#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n;
priority_queue<int> maxQ;
priority_queue<int, vector<int>, greater<int>> minQ;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (maxQ.empty())
			maxQ.push(x);
		else if (maxQ.size() == minQ.size())
			maxQ.push(x);
		else
			minQ.push(x);

		if (!maxQ.empty() && !minQ.empty() && (maxQ.top() > minQ.top()))
		{
			int a = maxQ.top();
			int b = minQ.top();

			maxQ.pop();
			minQ.pop();

			maxQ.push(b);
			minQ.push(a);
		}
		cout << maxQ.top() << '\n';
	}

	return 0;
}

