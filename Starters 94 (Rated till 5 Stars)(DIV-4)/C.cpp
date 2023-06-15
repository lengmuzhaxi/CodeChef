#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>//同(div2.a div3.b)
//#include<vector>
//#include<algorithm>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll t = 0, n = 0;
//	cin >> t;
//	while (t--)
//	{
//		ll s = 0, m = 0, maxom = 0, maxaddy = 0;
//		cin >> n;
//		vector<int>a(n);
//		vector<int>b(n);
//		for (ll i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}for (ll i = 0; i < n; i++)
//		{
//			cin >> b[i];
//		}
//		for (ll i = 0; i < n; i++)
//		{
//			if (a[i] > 0)
//			{
//				m++;
//			}
//			else
//			{
//				m = 0;
//			}
//			if (b[i] > 0)
//			{
//				s++;
//			}
//			else
//			{
//				s = 0;
//			}
//			maxom = max(maxom, m);
//			maxaddy = max(maxaddy, s);
//		}
//		if (maxom > maxaddy) 
//		{
//			cout << "OM" << endl;
//		}
//		else if (maxaddy > maxom) 
//		{
//			cout << "ADDY" << endl;
//		}
//		else 
//		{
//			cout << "DRAW" << endl;
//		}
//	}
//	return 0;
//}
