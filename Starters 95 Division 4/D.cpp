#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<string, int> mp;
    string ans = "";
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        string str = arr[i];
        if (mp.find(str) != mp.end())
            continue;
        else
        {
            ans += str[str.size() - 2];
            ans += str[str.size() - 1];
            mp[str]++;
        }
    }
    cout << ans;
    return 0;
}