//#include<iostream>
//using namespace std;
//
//const int N = 100010, M = 1000010;
//char s[M], p[N];
//int ne[N];
//
//int main()
//{
//    //n是s的长度，m是p的长度
//    int n, m;
//    cin >> m >> p + 1 >> n >> s + 1;
//
//    //1.求next数组
//    for (int i = 2, j = 0; i <= m; i++)
//    {
//        while (j && p[i] != p[j + 1])
//            j = ne[j];
//        if (p[i] == p[j + 1])
//            j++;
//        ne[i] = j;
//    }
//
//    //2.匹配
//    for (int i = 1, j = 0; i <= n; i++)
//    {
//        if (s[i] == p[j + 1])
//        {
//            j++;
//            if (j == m)
//            {
//                cout << i - j << " ";
//                j = ne[j];
//            }
//        }
//        else
//        {
//            while (j && s[i] != p[j + 1])
//                j = ne[j];
//            if (s[i] == p[j + 1])
//                j++;
//        }
//    }
//    return 0;
//}