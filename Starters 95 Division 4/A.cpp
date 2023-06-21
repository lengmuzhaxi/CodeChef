#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int x = 0, n = 0;
		cin >> x >> n;
		cout << abs(x - n) << endl;
	}
	return 0;
}
