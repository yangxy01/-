#include<iostream>
using namespace std;

const int N = 100010;
int e[N], ne[N], idx = 0, head = -1;

void init()
{
    head = -1;
    idx = 0;
}
void push_front(int x)
{
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}
void insert(int k, int x)//下标为k的位置后插一个元素
{
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx++;
}
void erase(int k)//删除下标为k的节点的后一个节点
{
    ne[k] = ne[ne[k]];
}

int main()
{
    int M;
    cin >> M;
    char op;
    init();
    while (M--)
    {
        cin >> op;
        if (op == 'H')
        {
            int x;
            cin >> x;
            push_front(x);
        }
        else if (op == 'D')
        {
            int k;
            cin >> k;
            if (k == 0)
            {
                head = ne[head];
            }
            else
                erase(k - 1);
        }
        else
        {
            int k, x;
            cin >> k >> x;
            insert(k - 1, x);
        }
    }
    int p = head;
    while (p != -1)
    {
        cout << e[p] << " ";
        p = ne[p];
    }
    return 0;
}