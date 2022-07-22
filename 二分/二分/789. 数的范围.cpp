#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<stdio.h>
using namespace std;

const int N = 1e6 + 100;
int m, n;
int q[N];

int main()
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		scanf("%d", &q[i]);
	while (n--)
	{
		int x;
		cin >> x;
		int l = 0, r = m - 1;
		while (l < r)
		{
			int mid = l + r >> 1;
			if (q[mid] >= x)
				r = mid;
			else
				l = mid + 1;
		}
		if (q[l] != x)
		{
			cout << "-1 -1" << endl;
		}
		else
		{
			cout << l << " ";
			int l = 0, r = m - 1;
			while (l < r)
			{
				int mid = l + r + 1 >> 1;
				if (q[mid] <= x)
					l = mid;
				else
					r = mid - 1;
			}
			cout << r << endl;
		}
		
	}
	return 0;
}