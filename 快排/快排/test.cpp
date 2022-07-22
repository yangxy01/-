#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

const int N = 1e6+100;
int q[N];

void qs(int* q, int l, int r)
{
	if (l >= r)
		return;
	int x = q[l + r >> 1];
	int i = l - 1, j = r + 1;
	while (i < j)
	{
		do
			i++;
		while (q[i] < x);
		do
			j--;
		while (q[j] > x);
		if (i < j)
			swap(q[i], q[j]);
	}
	qs(q, l, j);
	qs(q, j + 1, r);
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &q[i]);
	qs(q, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d ", q[i]);

	return 0;
}