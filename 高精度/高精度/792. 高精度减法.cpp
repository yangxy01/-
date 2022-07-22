#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool cmp(vector<int>& A, vector<int>& B)
{
	if (A.size() != B.size())
		return A.size() > B.size();
	for (int i = A.size()-1; i >= 0; i--)
	{
		if (A[i] != B[i])
			return A[i] > B[i];
	}
	return true;
}

vector<int> sub(vector<int>& A, vector<int>& B)
{
	vector<int> C;
	int t = 0;
	for (int i = 0; i < A.size(); i++)
	{
		int res = A[i] - t;
		if (i < B.size())
			res -= B[i];
		C.push_back((res + 10) % 10);
		t = res < 0 ? 1 : 0;//t位是否被低位借1
	}
	while (C.size() > 1 && C.back() == 0)//去掉前导0
		C.pop_back();
	return C;
}

int main()
{
	vector<int> A;
	vector<int> B;
	string a, b;
	cin >> a >> b;
	for (int i = a.size() - 1; i >= 0; i--)
		A.push_back(a[i] - '0');
	for (int i = b.size() - 1; i >= 0; i--)
		B.push_back(b[i] - '0');
	if (cmp(A, B))
	{
		auto C = sub(A, B);
		for (int i = C.size() - 1; i >= 0; i--)
			cout << C[i];
	}
	else
	{
		auto C = sub(B, A);
		cout << "-";
		for (int i = C.size() - 1; i >= 0; i--)
			cout << C[i];
	}
	cout << endl;
	return 0;
}