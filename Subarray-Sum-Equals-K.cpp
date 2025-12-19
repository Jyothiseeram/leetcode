1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int cnt = 0;
5        for (int i = 0; i < nums.size(); i++) {
6            int sum = 0;
7            for (int j = i; j < nums.size(); j++) {
8                sum += nums[j];
9                if (sum == k) {
10                    cnt++;
11                }
12            }
13        }
14        return cnt;
15    }
16};