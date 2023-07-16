#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
using namespace std;
int main() 
{
	int t=0;
	cin >> t;
	while (t--) 
	{
		map<int, int> mp;
		int n=0,max = 0;
		cin >> n;
		for (int i = 0; i < n * 2; i++) 
		{
			int num;
			cin >> num;
			mp[num]++;
		}
		for (auto k : mp) 
		{
			if (max < k.second) 
			{
				max = k.second;
			}
		}
		cout << max << endl;
	}
	return 0;
}