#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

const int N = 1010;
int S[N][N], A[N][N];

void insert(int x1, int y1, int x2, int y2, int c)
{
	A[x1][y1] += c;
	A[x2+1][y1] -= c;
	A[x1][y2+1] -= c;
	A[x2+1][y2+1] += c;
}

int main()
{
	int n, m, q, c, x1, y1, x2, y2;
	cin >> n >> m >> q;
	for (int i = 1; i <= n; i++)//1.生成题目所给的S和对应的A
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%d", &c);
			insert(i, j, i, j, c);
		}
	}
	while (q--)//2.将对S的操作转移到A
	{
		scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &c);
		insert(x1, y1, x2, y2, c);
	}
	for (int i = 1; i <= n; i++)//3.求A的前缀和
	{
		for (int j = 1; j <= m; j++)
		{
			S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + A[i][j];
			printf("%d ", S[i][j]);
		}
		cout << endl;
	}
	return 0;
}