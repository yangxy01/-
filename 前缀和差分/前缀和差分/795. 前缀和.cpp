//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//using namespace std;
//
//const long N = 100010;
//int q[N],s[N];
//int main()
//{
//	int n, m, l, r;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &q[i]);
//		s[i] = s[i - 1] + q[i];
//	}
//	while (m--)
//	{
//		cin >> l >> r;
//		int sum = s[r] - s[l - 1];
//		cout << sum << endl;
//	}
//	return 0;
//}