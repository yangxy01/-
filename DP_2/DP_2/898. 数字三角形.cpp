//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//const int INF = 0x3f3f3f3f, N = 510;
//int a[N][N], d[N][N];
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//        for (int j = 0; j <= i + 1; j++)
//        {
//            if (1 <= j && j<= i)
//                cin >> a[i][j];
//            d[i][j] = -INF;
//        }
//    d[1][1] = a[1][1];
//    for (int i = 2; i <= n; i++)
//        for (int j = 1; j <= i; j++)
//        {
//            d[i][j] = max(d[i - 1][j - 1] + a[i][j], d[i - 1][j] + a[i][j]);
//        }
//    int res = -INF;
//    for (int i = 1; i <= n; i++)
//        res = max(res, d[n][i]);
//    cout << res << endl;
//    return 0;
//}