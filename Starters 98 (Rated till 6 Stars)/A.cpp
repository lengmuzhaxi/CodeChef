#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c >> d;
    if (2 * a + b == 2 * c + d)
    {
        cout << "Equal";
    }
    else if (2 * a + b > 2 * c + d)
    {
        cout << "Messi";
    }
    else
    {
        cout << "Ronaldo";
    }
    return 0;
}