#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

const int N = 300010;
int a[N], s[N];

typedef pair<int, int> PII;

int project(int x, vector<int>& coord)
{
    int l = 0, r = coord.size() - 1;
    while (l < r)
    {
        int mid = (l + r) >> 1;
        if (coord[mid] >= x)
            r = mid;
        else
            l = mid + 1;
    }
    return l + 1;//映射到1,2...n
}

int main()
{
    int n, m;
    cin >> n >> m;
    int x, c, l, r, y;
    vector<PII> insert;//插入操作的对
    vector<PII> inter;//区间对
    vector<int> coord;//第一次映射
    for (int i = 0; i < n; i++)
    {
        cin >> x >> c;
        insert.push_back({ x,c });
        coord.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> l >> r;
        inter.push_back({ l,r });
        coord.push_back(l);
        coord.push_back(r);
    }
    //排序
    sort(coord.begin(), coord.end());
    //去重
    coord.erase(unique(coord.begin(), coord.end()), coord.end());
    for (auto& in : insert)
    {
        x = in.first;
        y = project(x, coord);
        a[y] += in.second;
    }
    for (int i = 1; i <= coord.size(); i++)
        s[i] = s[i - 1] + a[i];
    for (auto& in : inter)
    {
        l = project(in.first, coord);
        r = project(in.second, coord);
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}