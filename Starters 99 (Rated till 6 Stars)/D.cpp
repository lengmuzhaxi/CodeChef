#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, a[200000] = { 0 }, m = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			m += a[i];
		}
		sort(a, a + n);
		cout << m << " ";
		for (int i = 0; i < n - 1; i++)
		{
			m -= a[i];
			cout << m << " ";
		}
		cout << endl;
	}
	return 0;
}
