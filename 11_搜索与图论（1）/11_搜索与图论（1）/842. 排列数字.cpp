//#include<iostream>
//using namespace std;
//
//int ch[10];
//bool status[10];
//int n;
//
//void dfs(int num)
//{
//    if (num == n)
//    {
//        for (int i = 0; i < n; i++)
//            cout << ch[i] << " ";
//        cout << endl;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (status[i] == false)
//        {
//            ch[num] = i;
//            status[i] = true;
//            dfs(num + 1);
//            status[i] = false;
//        }
//    }
//}
//
//int main()
//{
//    cin >> n;
//    dfs(0);
//    return 0;
//}