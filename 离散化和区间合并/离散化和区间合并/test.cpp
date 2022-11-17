#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long LL;
const int N = 300010;
int a[N], s[N];

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
    return r + 1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> coord;
    vector<pair<LL, LL>> add;
    vector<pair<LL, LL>> ranges;
    int x, c, l, r;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> c;
        add.push_back({ x,c });
        coord.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        ranges.push_back({ l,r });
        coord.push_back(l);
        coord.push_back(r);
    }
    sort(coord.begin(), coord.end());
    coord.erase(unique(coord.begin(), coord.end()), coord.end());

    for (auto& item : add)
    {
        int y = project(item.first, coord);
        a[y] += item.second;
    }
    for (int i = 1; i <= coord.size(); i++)
    {
        s[i] = s[i - 1] + a[i];
    }
    for (auto& item : ranges)
    {
        l = project(item.first, coord);
        r = project(item.second, coord);
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}