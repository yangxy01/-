#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> mul(vector<int>& A, int b)
{
    vector<int> C;
    int k = 0;
    for (int i = 0; i < A.size(); i++)
    {
        k += A[i] * b;
        C.push_back(k % 10);
        k /= 10;
    }
    while (k)
    {
        C.push_back(k % 10);
        k /= 10;
    }
    while (C.size() > 1 && C.back() == 0)C.pop_back();
    return C;
}

int main()
{
    string a;
    int b;
    cin >> a >> b;
    vector<int> A;
    for (int i = a.length() - 1; i >= 0; i--)
        A.push_back(a[i] - '0');
    auto C = mul(A, b);
    for (int i = C.size() - 1; i >= 0; i--)
        cout << C[i];
    return 0;
}