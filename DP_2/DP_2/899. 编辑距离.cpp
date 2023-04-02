//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//
//const int N = 1010;
//int d[N][N];
//char str[N][15];
//
//int get(char a[], char b[])
//{
//    int la = strlen(a + 1);
//    int lb = strlen(b + 1);
//    // printf("%d %d", la, lb);
//    for (int i = 1; i <= la; i++)
//    {
//        for (int j = 1; j <= lb; j++)
//        {
//            if (a[i] == b[j])
//                d[i][j] = d[i - 1][j - 1];
//            else
//            {
//                d[i][j] = min(d[i][j - 1], d[i - 1][j]);
//                d[i][j] = min(d[i - 1][j - 1], d[i][j]);
//                d[i][j] += 1;
//                //  printf("%d ", d[i][j]);
//            }
//        }
//        printf("\n");
//    }
//    return d[la][lb];
//}
//
//int main()
//{
//    int n, m, g;
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%s", str[i] + 1);
//        printf("%s\n", str[i] + 1);
//    }
//    for (int i = 0; i < N; i++)
//    {
//        d[0][i] = i;
//        d[i][0] = i;
//    }
//    for (int k = 0; k < m; k++)
//    {
//        int res = 0;
//        char s[15];
//        scanf("%s%d", s + 1, &g);
//        printf("%s\n ", s + 1);
//        int num = get(str[k], s);
//        if (num <= g)
//            res++;
//        // printf("%d\n", res);
//    }
//    return 0;
//}