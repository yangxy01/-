//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
////参数： 被除数 除数 余数
//vector<int> div(vector<int>& A, int b, int& r)
//{
//	vector<int> C;
//	r = 0;
//	for (int i = A.size() - 1; i >= 0; i--)
//	{
//		r = r * 10 + A[i];
//		C.push_back(r / b);
//		r %= b;
//	}
//	reverse(C.begin(), C.end());
//	while (C.size() > 1 && C.back() == 0) // 去前导0
//		C.pop_back();
//	return C;
//}
//
//int main()
//{
//	string s;
//	int b,r;
//	cin >> s >> b;
//	vector<int> A;
//	for (int i = s.length() - 1; i >= 0; i--)
//		A.push_back(s[i] - '0');
//	auto C = div(A, b, r);
//	for (int i = C.size() - 1; i >= 0; i--)
//		cout << C[i];
//	cout << endl;
//	cout << r << endl;
//	return 0;
//}