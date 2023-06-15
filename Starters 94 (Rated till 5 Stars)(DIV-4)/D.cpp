#define _CRT_SECURE_NO_WARNINGS
#include<iostream>//ͬ(div2.b div3.c div1.a)
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, b = 0,c=-1;
		cin >> n >> b;
		vector<ll>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if ((arr[i] & b) == b)
			{
				c &= arr[i];
			}
		}
		if (c == b)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}