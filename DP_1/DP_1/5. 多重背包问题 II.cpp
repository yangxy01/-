#include<iostream>
using namespace std;

const int N = 12010, M = 2010;

int n, m;
int v[N], w[N]; //��һö�������N*logS
int f[M]; // ���<M

int main()
{
    cin >> n >> m;
    int cnt = 0; //��������
    for (int i = 1; i <= n; i++)
    {
        int a, b, s;
        cin >> a >> b >> s;
        int k = 1; // �������ĸ���
        while (k <= s)
        {
            cnt++; //���������
            v[cnt] = a * k; //�������
            w[cnt] = b * k; // �����ֵ
            s -= k; // sҪ��С
            k *= 2; // �����ĸ�������
        }
        //ʣ���һ��
        if (s > 0)
        {
            cnt++;
            v[cnt] = a * s;
            w[cnt] = b * s;
        }
    }

    n = cnt; //ö�ٴ�����ʽ�ɸ�����������
    for (int i = 1; i <= n; i++)
        cout << v[i] << " " << w[i] << endl;

    ////01����һά�Ż�
    //for (int i = 1; i <= n; i++)
    //    for (int j = m; j >= v[i]; j--)
    //        f[j] = max(f[j], f[j - v[i]] + w[i]);

    //cout << f[m] << endl;
    return 0;
}

