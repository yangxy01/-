//#include<iostream>
//using namespace std;
//
//const int N = 1010;
//int d[N][N], V[N], W[N];
//
//int main()
//{
//    int n, v;
//    cin >> n >> v;
//    for (int i = 1; i <= n; i++)
//        cin >> V[i] >> W[i];
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= v; j++)
//        {
//            d[i][j] = d[i - 1][j];
//            if (j - V[i] >= 0 && d[i - 1][j - V[i]] + W[i] > d[i][j])
//                d[i][j] = d[i - 1][j - V[i]] + W[i];
//        }
//    }
//    cout << d[n][v] << endl;
//    return 0;
//}