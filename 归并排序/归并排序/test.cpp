//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//const int N = 1e6 + 10;
//int q[N], tmp[N];
//
//void merge_sort(int* q, int l, int r)
//{
//    if (l >= r)return;
//    int mid = (l + r) >> 1;
//    int i = l, j = mid + 1;
//    merge_sort(q, i, mid);
//    merge_sort(q, j, r);
//    int k = l;
//    while (i <= mid && j <= r)
//    {
//        if (q[i] < q[j])tmp[k++] = q[i++];
//        else
//            tmp[k++] = q[j++];
//    }
//    while (i <= mid)tmp[k++] = q[i++];
//    while (j <= r)tmp[k++] = q[j++];
//    for (int k = l; k <= r; k++)
//        q[k++] = tmp[k++];
//}
//
//int main()
//{
//    int n;
//    for (int i = 0; i < n; i++)scanf("%d", &q[i]);
//    merge_sort(q, 0, n - 1);
//    for (int i = 0; i < n; i++)printf("%d ", q[i]);
//    return 0;
//}