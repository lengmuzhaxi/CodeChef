#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--) 
//    {
//        int n;
//        cin >> n;
//        int p = 0, q = 0, r = 0, pqr = 0;
//        vector<string>a(n);
//        for (int i = 0; i < n; i++)
//        {
//            cin >> a[i];
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (a[i] == "A")
//            {
//                p++;
//            }
//            else if (a[i] == "B")
//            { 
//                q++; 
//            }
//            else if (a[i] == "AB")
//            {
//                r++;
//            }
//            else
//            {
//                pqr++;
//            }
//        }
//        int count = max(p, q);
//        count += r;
//        count += pqr;
//        cout << count << endl;
//    }
//    return 0;
//}