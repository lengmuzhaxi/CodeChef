#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    ll t = 0;
    cin >> t;
    while (t--)
    {
        ll n = 0, cnt = 0, f = 0;
        cin >> n;
        string s, k = "100";
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s.find(s[i] == '1') && i < n - 2)
            {
                f = 1;
                cnt = i;
                break;
            }
        }
        if (f)
        {
            cout << s.substr(0, cnt) + "100" + s.substr(cnt + 3, n - 1) << '\n';
        }
        else
        {
            cout << s << '\n';
        }
    }
    return 0;
}
