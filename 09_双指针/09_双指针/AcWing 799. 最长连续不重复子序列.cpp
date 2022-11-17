//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//const int N = 100010;
//int a[N], count[N];
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    int maxLen = 0;
//    for (int i = 0, j = 0; i < n; i++)
//    {
//        count[a[i]]++;
//        while (j <= i && count[a[i]] > 1)
//        {
//            count[a[j++]]--;
//        }
//        maxLen = max(maxLen, i - j + 1);
//    }
//    cout << maxLen << endl;
//    return 0;
//}