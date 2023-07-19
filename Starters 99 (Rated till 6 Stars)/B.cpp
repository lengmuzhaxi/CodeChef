#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int x = 0, y = 0, r = 0, m = 0;
		cin >> x >> y >> r;
		m = r / 30 + x;
		if (m % y == 0)
		{
			cout << m / y << endl;
		}
		else
		{
			cout << m / y + 1 << endl;
		}
	}
	return 0;
}
