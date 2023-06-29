#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
ll i;
int main()
{
    ll t = 0,sum=0;
    cin >> t;
    while (t--)
    {
        vector<int>a;
        ll n = 0, m = 0, k = 0, x = 0;
        cin >> n >> m >> k;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[i-1] + k - 1 <= x)
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
    }
    return 0;
}
