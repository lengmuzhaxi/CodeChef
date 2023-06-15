#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int x = 0, n = 0, m = 0;
	cin >> x >> n >> m;
	if (x + m >= n)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	return 0;
}
