#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

typedef long long LL;

const int N = 100010;
int q[N], tmp[N];

LL merge_sort(int* q, int l, int r)
{
    if (l >= r)return 0;
    int mid = (l + r) >> 1;
    int i = l, j = mid + 1;
    LL res = merge_sort(q, l, mid) + merge_sort(q, j, r);
    int k = l;
    while (i <= mid && j <= r)
    {
        if (q[i] <= q[j])
        {
            tmp[k++] = q[i++];
        }
        else
        {
            res += mid - i + 1;
            tmp[k++] = q[j++];
        }
    }
    while (i <= mid)
    {
        tmp[k++] = q[i++];
    }
    while (j <= r)
        tmp[k++] = q[j++];
    for (int i = l; i <= r; i++)
        q[i] = tmp[i];
    return res;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)scanf("%d", &q[i]);
    cout << merge_sort(q, 0, n - 1) << endl;
    return 0;
}