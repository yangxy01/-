#include<iostream>
#include<string.h>
using namespace std;

const int N = 1e5 + 10;
int n, m, hh = 0, tt = -1, q[N], d[N];
int h[N], e[N], ne[N], idx = 0;

void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

int main()
{
    cin >> n >> m;
    memset(&d, -1, sizeof(d));
    memset(&h, -1, sizeof(d));
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        add(a, b);
    }
    q[++tt] = 1;
    d[1] = 0;
    while (hh <= tt)
    {
        int t = q[hh++];
        for (int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (d[j] == -1)
            {
                q[++tt] = j;
                d[j] = d[t] + 1;
            }
        }
    }
    cout << d[n] << endl;

    return 0;
}