//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//const int N = 1010;
//int a[N], d[N], INF = 0x3f3f3f3f;
//
//int main()
//{
//    int n;
//    cin >> n;
//    a[0] = -INF;
//    d[0] = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        d[i] = 1;
//        for (int j = i - 1; j >= 0; j--)
//        {
//            if (a[i] > a[j])
//            {
//                d[i] = max(d[i], d[j] + 1);
//            }
//        }
//    }
//    int res = -INF;
//    for (int i = 1; i <= n; i++)
//        res = max(res, d[i]);
//    cout << res << endl;
//}