#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include<vector>
using ll = long long;
int main()
{
	ll t = 0;
	cin >> t;

	while (t--)
	{
		ll n = 0, k = 0, cnt = 0, b = 0;
		cin >> n >> k;
		vector<ll>a(n + 1);
		//b[0]=0;
		for (int i = 1; i <=n; i++)
		{
			cin >> a[i];
		}
		ll j = 0,m=0;
		while (j + k <=n)
		{
			for (int i = j; i <k; i++)
			{
				b |= a[i];
			}
			if (b % 2)
			{
				cnt++;
			}
			j++;
		}
	}
}
