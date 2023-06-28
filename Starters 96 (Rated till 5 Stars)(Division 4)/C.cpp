#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
typedef long long ll;
ll i;
int main()
{
    ll t = 0,sum=0;
    cin >> t;
    while (t--)
    {
        ll n = 0, m = 0, k = 0, x = 0;
        cin >> n >> m >> k;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
        }
        while (i == n - 1)
        {
            sum += x;
        }
        if (sum+ k - 1 <= m)
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
