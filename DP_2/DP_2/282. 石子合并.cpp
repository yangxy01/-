#include<iostream>
#include<algorithm>
using namespace std;

const int N = 310, INF = 0x3f3f3f3f;
int s[N];
int d[N][N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        s[i] += s[i - 1];
    }
    for (int len = 2; len <= n; len++)
    {
        for (int i = 1; i <= n - len + 1; i++)
        {
            int j = i + len - 1;
            d[i][j] = INF;//记得初始化为最大值
            for (int k = i; k <= j - 1; k++)
            {
                d[i][j] = max(d[i][j], d[i][k] + d[k + 1][j] + s[j] - s[i - 1]);
            }
        }
    }
    cout << d[1][n] << endl;
    return 0;
}