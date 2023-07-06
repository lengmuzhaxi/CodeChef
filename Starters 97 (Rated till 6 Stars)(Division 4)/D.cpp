#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0,j=0,a=0,c=0;
		cin >> n;
		string s;
		cin >> s;
		for (int i = 0; i < n; i++)
		{
			int b = 0;
			if (s[i] == ':')
			{
				for (int j = i + 1; j < n; ++j)
				{
					if (s[j] == ')')
					{
						b++;
						continue;
					}
					else if (s[j] == '(')
					{
						break;
					}
					else if (s[j] == ':' && b > 0)
					{
						a = j++;
						c++;
						break;
					}
					else
					{
						break;
					}
				}
			}
		}
		cout << c << endl;
	}
}