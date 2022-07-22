//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//int S[N], A[N];
//
//void insert(int l, int r, int c)
//{
//	A[l] += c;
//	A[r + 1] -= c;
//}
//
//int main()
//{
//	int n, m, l, r, c;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)//生成题目所给的S和对应的A
//	{
//		scanf("%d", &c);
//		insert(i, i, c);
//	}
//	while (m--)//将对S的操作转移到A
//	{
//		scanf("%d%d%d", &l, &r, &c);
//		insert(l, r, c);
//	}
//	int tmp = 0;
//	for (int i = 1; i <= n; i++)//求A的前缀和
//	{
//		tmp += A[i];
//		printf("%d ", tmp);
//	}
//	cout << endl;
//	return 0;
//}