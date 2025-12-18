1class Solution {
2public:
3    vector<string> buildArray(vector<int>& target, int n) {
4        vector<string> stk;
5        int temp = 1;
6        for (int i = 0; i < target.size(); i++) {
7            while (temp < target[i]) {
8                stk.push_back("Push");
9                stk.push_back("Pop");
10                temp++;
11            }
12            stk.push_back("Push");
13            temp++;
14        }
15        return stk;
16    }
17};