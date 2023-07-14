#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll a = 0, b = 0, c = 0;
		cin >> a >> b >> c;
		if (a * b % c == 0)
		{
			cout << a * b << " " << c << endl;
		}
		else if (a * c % b == 0)
		{
			cout << a * c << " " << b << endl;
		}
		else if (b * c % a == 0)
		{
			cout << b * c << " " << a << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
	return 0;
}