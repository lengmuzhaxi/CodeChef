#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() 
{
    int t=0;
    cin >> t;
    while (t--) 
    {
        int n=0, k=0;
        cin >> n >> k;
        int a[1000] = { 0 };
        for (auto& x : a)
        {
            cin >> x;
        }
        if (n <= k)
        {
            for (auto val : a) 
            {
                cout << val << " ";
            }
            cout << endl;
            continue;
        }
        if (n < 2 * k)
        {
            vector<int> v;
            for (int i = 0; i < n - k; i++) 
            {
                v.push_back(a[i]);
            }
            for (int i = n - 1; i >= k; i--)
            {
                v.push_back(a[i]);
            }
            sort(v.begin(), v.end());
            for (int j = 0; j < n - k; j++) 
            {
                cout << v[j] << " ";
            }
            for (int i = n - k; i < k; i++) 
            {
                cout << a[i] << " ";
            }
            for (j; j < v.size(); j++) 
            {
                cout << v[j] << " ";
            }
            cout << endl;
        }
        else 
        {
            sort(a, a + n);
            for (auto val : a)
            {
                cout << val << " ";
            }
            cout << endl;
        }

    }
    return 0;
}