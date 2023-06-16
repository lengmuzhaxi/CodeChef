#define _CRT_SECURE_NO_WARNINGS
#include<iostream>//ͬ(div2.c div3.d div1.b)
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, k = 0,count=0;
		cin >> n >> k;
		string s;
		cin >> s;
		vector<pair<ll, ll> >a;
		pair<ll, ll>tmp;
		for (ll i = 0; i<s.length(); i++)
		{
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			{
				if (count == 0)
				{
					tmp.first = i;
					count++;
					if (count == k)
					{
						tmp.second = i;
						a.push_back(tmp);
						count = 0;
					}
				}
				else if (count < k)
				{
					count++;
					if (count == k)
					{
						tmp.second = i;
						a.push_back(tmp);
						count = 0;
					}
				}
			}
		}
			ll mod = 1e9 + 7, ans = 1;
			for (ll i = 0; i<a.size() - 1; i++)
			{
				pair<ll, ll>tmp1 = a[i];
				pair<ll, ll>tmp2 = a[i+1];
				ll cnt = tmp2.first - tmp1.second;
				ans = (ans * cnt) % mod;
			}
		cout << ans << endl;
	}
	return 0;
}