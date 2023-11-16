#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        for (int i = 0; i <n/2; i++)
        {
            cout << 2 * n - 2 * i << ' ';
            cout<< 2 * i + 2 << ' ';
        }
        cout << '\n';
        for (int i = 0; i < n/2; i++)
        {
            cout << 2 * i + 1 << ' ';
            cout<< n + 2 * i + 1 << ' ';
        }
        cout << '\n';
    }
}
