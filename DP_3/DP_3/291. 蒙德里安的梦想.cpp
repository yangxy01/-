#include<iostream>
using namespace std;

const int N = 3, M = 1 << N;
int d[N][M], st[M];

int main()
{
    int n, m;
    for (int i = 0; i < M; i++)//Ԥ����st
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
    //     for(int i=1;i<=m;i++)//����m��
    //     {
    //         for(int j=0;j<1<<n;j++)//��ǰ�е�ѡ����2^n�η���
    //         {
    //             for(int k=0;k<1<<n;k++)//�鿴��һ�е�ѡ���Ƿ���ת��
    //             {
    //                 if(j&&k==0&&st[j|k]==1)//������������
    //                 {
    //                     d[i][j]+=d[i-1][k];
    //                 }
    //             }
    //         }
    //     }
    // }
    return 0;
}