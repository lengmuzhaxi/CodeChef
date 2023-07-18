#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<set>
//using namespace std;
//using ll = long long;
//string solve(string a, ll n)
//{
//	if (n % 3 == 1)
//	{
//		return "YES";
//	}
//	if (n % 3 == 0)
//	{
//		set<char>st;
//		for (int i = 0; i < n; i += 3)
//		{
//			st.insert(a[i]);
//			if (st.find(a[i + 2]) != st.end())
//			{
//				return "YES";
//			}
//		}
//	}
//	if (n % 3 == 2)
//	{
//		set<char>st;
//		for (int i = 0; i < n; i += 3)
//		{
//			st.insert(a[i]);
//			if (st.find(a[i + 1]) != st.end())
//			{
//				return "YES";
//			}
//		}
//	}
//	return "NO";
//}
//int main()
//{
//	ll t = 0; 
//	cin >> t;
//	while (t--)
//	{
//		ll n = 0; 
//		cin >> n;
//		string a;
//		cin >> a;
//		cout << solve(a, n) << endl;
//	}
//}