//#define _CRT_SECURE_NO_WARNINGS
// 
//
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int n;
//int q[N];
//
////void quick_sort(int q[], int l, int r)
////{
////    if (l >= r) //只有一个数或没有数，返回
////        return;
////
////    int x = q[l];
////    int i = l - 1, j = r + 1;
////    while (i < j)
////    {
////        do 
////            i++; 
////        while (q[i] < x);
////        do 
////            j--; 
////        while (q[j] > x);
////
////        if (i < j)//如果两指针还没相遇，则交换
////            swap(q[i], q[j]);
////    }
////    quick_sort(q, l, j);
////    quick_sort(q, j + 1, r);
////}
//
//void quick_sort(int q[], int l, int r)
//{
//    if (l >= r) return;
//
//    int i = l - 1, j = r + 1, x = q[(l + r) >> 1];
//    while (i < j)
//    {
//        do
//            i++;
//        while (q[i] < x);
//        do
//            j--;
//        while (q[j] > x);
//
//        if (i < j) swap(q[i], q[j]);
//    }
//    quick_sort(q, l, j), quick_sort(q, j + 1, r);
//}
//
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &q[i]);
//    quick_sort(q, 0, n - 1);
//    for (int i = 0; i < n; i++)
//        printf("%d ", q[i]);
//
//    return 0;
//}