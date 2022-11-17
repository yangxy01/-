#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> add(vector<int>& A, vector<int>& B)
{
	vector<int> C;
	int i = 0, j = 0, t = 0;
	while (i < A.size() || j < B.size())
	{
		if (i < A.size())	t += A[i];
		if (j < B.size())	t += B[j];
		C.push_back(t % 10);
		t /= 10;
		i++, j++;
	}
	if (t)
		C.push_back(t);
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
	auto C = add(A, B);
	for (int i = C.size() - 1; i >= 0; i--)
		cout << C[i];
	cout << endl;
	return 0;
}