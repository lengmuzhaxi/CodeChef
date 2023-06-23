#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int t=0;
	cin >> t;
	while (t--)
	{
		int n, m, h;
		cin >> n >> m >> h;
		vector<long long> capacity;
		for (int i = 0; i < n; i++)
		{
			long long x=0;
			cin >> x;
			capacity.push_back(x);
		}
		vector<long long> power;
		for (int i = 0; i < m; i++)
		{
			long long x=0;
			cin >> x;
			power.push_back(x);
		}
		sort(capacity.rbegin(), capacity.rend());
		sort(power.rbegin(), power.rend());
		long long ans = 0;
		int a = min(n, m);
		for (int i = 0; i < a; i++)
		{
			long long q = min(capacity[i], (1ll * power[i]) * (1ll * h));
			ans = ans + (1ll *q);
		}
		cout << ans << endl;
	}
	return 0;
}