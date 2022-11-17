//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//typedef pair<int, int> PII;
//
//vector<PII> merge(vector<PII>& intervals)
//{
//	vector<PII> res;
//	if (intervals.empty())
//		return res;
//	int st = intervals.front().first;
//	int end = intervals.front().second;
//	for (auto& x : intervals)
//	{
//		if (x.first > end)
//		{
//			res.push_back({ st,end });
//			st = x.first;
//			end = x.second;
//		}
//		else
//		{
//			if (x.second > end)
//				end = x.second;
//		}
//	}
//	res.push_back({ st,end });
//	return res;
//}
//
//int main()
//{
//	int n,l,r;
//	cin >> n;
//	vector<PII> intervals;
//	while (n--)
//	{
//		cin >> l >> r;
//		intervals.push_back({ l,r });
//	}
//	sort(intervals.begin(), intervals.end());
//	auto new_intvervals = merge(intervals);
//	cout << new_intvervals.size();
//	return 0;
//}