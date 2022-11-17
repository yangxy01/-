//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//const int N = 1e6 + 100;
//int q[N];
//int tmp[N];
//
//void merge_sort(int* q, int l, int r)
//{
//	if (l >= r)
//		return;
//	int mid = l + r >> 1;
//	int i = l, j = mid + 1;
//	merge_sort(q, l, mid);
//	merge_sort(q, j, r);
//	int k = l;
//	while (i <= mid && j <= r)
//	{
//		if (q[i] < q[j])
//			tmp[k++] = q[i++];
//		else
//			tmp[k++] = q[j++];
//	}
//	while (i <= mid)
//		tmp[k++] = q[i++];
//	while (j <= r)
//		tmp[k++] = q[j++];
//	for (int i = l; i <= r; i++)
//		q[i] = tmp[i];
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		scanf("%d", &q[i]);
//	merge_sort(q, 0, n - 1);
//	for (int i = 0; i < n; i++)
//		printf("%d ", q[i]);
//	return 0;
//}