#include<iostream>
#include<string>
using namespace std;

const int N = 100010;
int pa[N];
int ccount[N] = { 0 };

int find(int x)
{
    if (pa[x] != x)
        pa[x] = find(pa[x]);
    return pa[x];
}

int main()
{
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        pa[i] = i;
        ccount[i] = 1;
    }
    string s;
    while (m--)
    {
        cin >> s;
        if (s == "C")
        {
            cin >> x >> y;
            if (find(x) != find(y))
            {
                ccount[find(y)] += ccount[find(x)];
                pa[find(x)] = find(y);
            }
        }
        else if (s == "Q1")
        {
            cin >> x >> y;
            if (find(x) == find(y)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else
        {
            cin >> x;
            cout << ccount[find(x)] << endl;
        }
    }
    return 0;
}