#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        if (n >= 5)
        {
            int m = (n - 1) / 5 + 1;
            cout << (100 - 1) / m + 1 << '\n';
        }
        else
        {
            cout << (500 - 1) / n + 1 << '\n';
        }

    }
    return 0;
}
