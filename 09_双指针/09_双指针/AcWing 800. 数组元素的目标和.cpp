#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, m, x, y;
    cin >> n >> m >> x;
    vector<int> A, B;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        A.push_back(y);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> y;
        B.push_back(y);
    }
    int i = 0, j = m - 1;
    while (A[i] + B[j] != x)
    {
        if (B[j] >= x)
            j--;
        else if (A[i] + B[j] > x)
            j--;
        else
            i++;
    }
    cout << i << " " << j << endl;
    return 0;
}