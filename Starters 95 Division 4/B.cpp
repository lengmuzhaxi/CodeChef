#define _CRT_SECURE_NO_WARNINGS
#include <iostream>//(ͬdiv3.a)
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		cin >> n;
		if (n <= 3)
		{
			cout << "BRONZE" << endl;
		}
		else if (n > 3 && n <= 6)
		{
			cout << "SILVER" << endl;
		}
		else
		{
			cout << "GOLD" << endl;
		}
	}
	return 0;
}
