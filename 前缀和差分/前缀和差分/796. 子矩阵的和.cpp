//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//using namespace std;
//
//const long N = 1010;
//int q[N][N], s[N][N];
//int main()
//{
//	int n, m, que;
//	cin >> n >> m>> que;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			scanf("%d", &q[i][j]);
//			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + q[i][j];
//		}
//	}
//	int x1, x2, y1, y2;
//	while (que--)
//	{
//		cin >> x1 >> y1 >> x2 >> y2;
//		int sum = s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1];
//		cout << sum << endl;
//	}
//	return 0;
//}