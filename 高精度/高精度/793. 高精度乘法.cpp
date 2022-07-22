//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//vector<int> mul(vector<int>& A, int b)
//{
//	vector<int> C;
//	int t = 0;
//	for (int i = 0; i < A.size(); i++)
//	{
//		t = A[i] * b + t;
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	while (t)//处理剩余进位
//	{
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	while (C.size() > 1 && C.back() == 0) // 去前导0
//		C.pop_back();
//	return C;
//}
//
//int main()
//{
//	string s;
//	int b;
//	cin >> s >> b;
//	vector<int> A;
//	for (int i = s.length() - 1; i >= 0; i--)
//		A.push_back(s[i] - '0');
//	auto C = mul(A, b);
//	for (int i = C.size() - 1; i >= 0; i--)
//		cout << C[i];
//	cout << endl;
//	return 0;
//}