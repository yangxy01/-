#include<iostream>
#include<algorithm>
using namespace std;

const int N = 100010;
int heap[N];
int sz;

void down(int i)
{
    int min_i = i;
    if (2 * i <= sz && heap[2 * i] < heap[min_i]) 
        min_i = 2 * i;
    if (2 * i + 1 <= sz && heap[2 * i + 1] < heap[min_i]) 
        min_i = 2 * i + 1;
    if (min_i != i)
    {
        swap(heap[min_i], heap[i]);
        down(min_i);
    }
}

void up(int i)
{
    while (i / 2 && heap[i / 2] < heap[i])
    {
        swap(heap[i / 2], heap[i]);
        i /= 2;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    sz = n;
    for (int i = 1; i <= n; i++)
        cin >> heap[i];
    for (int i = sz / 2; i >= 1; i--)
        down(i);
    while (m--)
    {
        cout << heap[1] << " ";
        heap[1] = heap[sz];
        sz--;
        down(1);
    }
    return 0;
}