//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//const int N = 100010;
//int st[N];
//int top = -1;
//
//int main()
//{
//    int n;
//    cin >> n;
//    int x;
//    while (n--)
//    {
//        cin >> x;
//        while (top != -1 && st[top] >= x)
//        {
//            top--;
//        }
//        if (top != -1)
//            cout << st[top] << " ";
//        else
//            cout << "-1 ";
//        top++;
//        st[top] = x;
//    }
//    return 0;
//}