//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//    int largestRectangleArea(vector<int>& heights) 
//    {
//        heights.push_back(0);
//        stack<int> st;
//        st.push(-1);
//        int maxArea = 0, h;
//        for (int i = 0; i < heights.size(); i++)
//        {
//            while (st.top() >= 0 && heights[st.top()] >= heights[i])
//            {
//                h = heights[st.top()];
//                st.pop();
//                maxArea = max(maxArea, (i - st.top() - 1) * h);
//                //cout << st.top() << " " << i << " " << h << " " << maxArea << endl;
//            }
//            st.push(i);
//        }
//        return maxArea;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> heights;
//    heights.push_back(2);
//    heights.push_back(1);
//    heights.push_back(5);
//    heights.push_back(6);
//    heights.push_back(2);
//    heights.push_back(3);
//    cout << s.largestRectangleArea(heights) << endl;;
//	return 0;
//}