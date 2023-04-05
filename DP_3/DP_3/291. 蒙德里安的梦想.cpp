#include<iostream>
using namespace std;

const int N = 3, M = 1 << N;
int d[N][M], st[M];

int main()
{
    int n, m;
    for (int i = 0; i < M; i++)//预处理st
    {
        int cnt = 0;
        for (int j = 0; j < N; j++)
        {
            if ((i >> j & 1) == 0)
                cnt++;
            else
            {
                if (cnt & 1)
                {
                    st[i] = 1;
                    break;
                }
                cnt = 0;
            }
        }
        if (cnt & 1)
            st[i] = 1;
        cout << st[i] << endl;
    }

    // while(cin>>n>>m, n||m)
    // {
    //     for(int i=1;i<=m;i++)//处理m列
    //     {
    //         for(int j=0;j<1<<n;j++)//当前行的选法有2^n次方种
    //         {
    //             for(int k=0;k<1<<n;k++)//查看上一行的选法是否能转移
    //             {
    //                 if(j&&k==0&&st[j|k]==1)//满足两个条件
    //                 {
    //                     d[i][j]+=d[i-1][k];
    //                 }
    //             }
    //         }
    //     }
    // }
    return 0;
}