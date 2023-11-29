#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0;
        cin >> a >> b;
        int cnt = 0, k = 0,x=a,p=b;
        if (a >= b)
        {
            if (a % b == 0)
            {
                cout << 0 << '\n';
            }
            else
            {
                for (int i = 1; i <= b - 1; i++)
                {
                    int ma = a - i, mb = b + i;
                    k++;
                    if (ma % mb == 0)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                for (int i = 1; i <= b - 1; i++)
                {
                    int mk = x+i, mc = p-i;
                    cnt++;
                    if (mk % mc == 0)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                cout << min(cnt, k) << '\n';
            }
        }
        else
        {
            for (int i = 1; i <= b - 1; i++)
            {
                int mk = x + i, mc = p - i;
                cnt++;
                if (mk % mc == 0)
                {
                    break;
                }
                else
                {
                    continue;
                }
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}
