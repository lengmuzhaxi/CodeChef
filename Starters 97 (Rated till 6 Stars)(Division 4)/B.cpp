#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int sum = 0, cnt = 0, a[3] = { 0 }, b[3] = { 0 };
//		for (int i = 0; i < 3; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 0; i < 3; i++)
//		{
//			cin >> b[i];
//		}
//		sort(a, a + 3);
//		sort(b, b + 3);
//		for (int i = 1; i < 3; i++)
//		{
//			sum += a[i];
//			cnt+= b[i];
//		}
//		if (sum > cnt)
//		{
//			cout << "Alice" << endl;
//		}
//		else if (sum==cnt)
//		{
//			cout << "Tie" << endl;
//		}
//		else
//		{
//			cout << "Bob" << endl;
//		}
//	}
//}