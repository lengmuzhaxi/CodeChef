#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<map> 
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, m = 0, x = 0, y = 0;
		cin >> n;
		map<int, int>mp;
		for (int i = 0; i < n; i++)
		{
			cin >> y;
			if (mp[y] == 0)
			{
				mp[y] = 1;
				x++;
			}
			else if (mp[y] == 1)
			{
				x--;
				mp[y] = 0;
			}
			m = max(x, m);
		}
		cout << m << endl;
	}
	return 0;
}