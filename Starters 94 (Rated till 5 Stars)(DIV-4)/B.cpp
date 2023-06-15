#define _CRT_SECURE_NO_WARNINGS
#include <iostream>//ͬ(div3.a)
using namespace std;
typedef long long ll;
int main() 
{
    ll t = 0, n = 0, m = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << m / 2 + 1 << endl;
    }
    return 0;
}
