1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> arr;
6        for (int i = 0; i < n; i++) {
7            int cnt = 0;
8            for (int j = 0; j < n; j++) {
9                if (nums[i] > nums[j]) {
10                    cnt++;
11                }
12            }
13            arr.push_back(cnt);
14        }
15        return arr;
16    }
17};