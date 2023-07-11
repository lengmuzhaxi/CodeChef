#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() 
{
    int t=0; 
    cin >> t;
    while (t--) 
    {
        int n=0,q=0; 
        cin >> n >> q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        vector<int> count(n);
        count[0] = ((n - 1) * (n - 2)) / 2;
        for (int i = 1; i <= n - 2; i++) 
        {
            count[i] = count[i - 1] + ((n - i - 1) * (n - i - 2)) / 2;
        }
        count[n - 1] = count[n - 2];
        while (q--)
        {
            int x; cin >> x;
            int index = lower_bound(count.begin(), count.end(), x) - count.begin();
            cout << arr[index] << '\n';
        }



    }


    return 0;
}