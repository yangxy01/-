//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//const int N = 1000010;
//int deque[N], a[N];//�ֱ�Ϊ˫�˶��к�ԭ���飬���д����ԭ������±�
//
//int main()
//{
//    int n, k;
//    scanf("%d%d", &n, &k);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    int front = 0, back = -1;
//    for (int i = 0; i < n; i++)
//    {
//        if (front <= back && deque[front] < i - k + 1)//���в�Ϊ���Ҷ�ͷԪ�ز��ڻ���������
//            front++;//�൱�ڶ��׳���
//        while (front <= back && a[deque[back]] >= a[i])
//            back--;
//        back++;
//        deque[back] = i;
//        if (i >= k - 1)
//            printf("%d ", a[deque[front]]);
//    }
//    cout << endl;
//    front = 0, back = -1;
//    for (int i = 0; i < n; i++)
//    {
//        if (front <= back && deque[front] < i - k + 1)//���в�Ϊ���Ҷ�ͷԪ�ز��ڻ���������
//            front++;//�൱�ڶ��׳���
//        while (front <= back && a[deque[back]] <= a[i])
//            back--;
//        back++;
//        deque[back] = i;
//        if (i >= k - 1)
//            printf("%d ", a[deque[front]]);
//    }
//    cout << endl;
//    return 0;
//}