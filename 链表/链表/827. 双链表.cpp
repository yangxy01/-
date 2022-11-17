#include<iostream>
#include<string>
using namespace std;

const int N = 100010;
int e[N], l[N], r[N], idx, head, tail;

void init()//初始化
{
    head = 0;
    tail = 1;
    r[0] = 1;//头节点指向尾节点
    l[1] = 0;//尾节点指向头节点
    idx = 2;
}
void insert(int k, int x)//在下标为k的节点右边插入x
{
    e[idx] = x;
    r[idx] = r[k];
    l[r[k]] = idx;
    r[k] = idx;
    l[idx] = k;
    idx++;
}
void erase(int k)//删除下标为k的节点
{
    r[l[k]] = r[k];//-> ->
    l[r[k]] = l[k];//<- <-
}

int main()
{
    init();
    int m, k, x;
    cin >> m;
    string op;
    while (m--)
    {
        cin >> op;
        if (op == "R")
        {
            cin >> x;
            insert(l[tail], x);
        }
        else if (op == "L")
        {
            cin >> x;
            insert(0, x);
        }
        else if (op == "D")
        {
            cin >> k;
            erase(k + 1);

        }
        else if (op == "IL")
        {
            cin >> k >> x;
            insert(l[k + 1], x);
        }
        else if (op == "IR")
        {
            cin >> k >> x;
            insert(k + 1, x);
        }
    }
    /*int cur = r[head];
    while (cur != tail)
    {
        cout << e[cur] << " ";
        cur = r[cur];
    }*/
    for (int i = r[head]; i != tail; i = r[i])
    {
        cout << e[i] << " ";
    }
    return 0;
}