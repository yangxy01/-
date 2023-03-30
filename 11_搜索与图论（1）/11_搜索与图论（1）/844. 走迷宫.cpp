//#include<iostream>
//#include<utility>
//#include<queue>
//using namespace std;
//
//const int N = 110;
//int g[N][N], record[N][N];
//int dx[] = { 1, -1, 0, 0 }, dy[] = { 0, 0, 1, -1 };
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            cin >> g[i][j];
//    queue<pair<int, int>> que;
//    que.push({ 0, 0 });
//    record[0][0] = 1;
//    while (que.size())
//    {
//        auto h = que.front();
//        que.pop();
//        for (int i = 0; i < 4; i++)
//        {
//            int x = h.first + dx[i];
//            int y = h.second + dy[i];
//            if (x < n && x >= 0 && y < m && y >= 0 && g[x][y] == 0 && record[x][y] == 0)
//            {
//                record[x][y] = record[h.first][h.second] + 1;
//                que.push({ x,y });
//            }
//        }
//    }
//    //cout << endl;
//    //for (int i = 0; i < n; i++)
//    //{
//    //    for (int j = 0; j < m; j++)
//    //        cout << record[i][j] << " ";
//    //    cout << endl;
//    //}
//    cout << record[n - 1][m - 1]-1 << endl;
//    return 0;
//}