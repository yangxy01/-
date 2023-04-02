#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
const int N = 1e6 + 10;
int a[N], q[N];

int main()
{
    int n, x, l, r, mid, len = 1;
    scanf("%d", &n);
    q[0] = -2e9;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        l = 0, r = len - 1;
        while (l < r)
        {
            mid = l + r + 1 >> 1;
            if (q[mid] < x) l = mid;
            else r = mid - 1;
        }
        q[l + 1] = x;
        /*for (int j = 0; j < n; j++)
            printf("%d ", q[j]);*/
        if (l == len-1)len++;
        printf("\n");
    }
    printf("%d\n", len-1);
    return 0;
}