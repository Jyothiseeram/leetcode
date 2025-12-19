1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        if(k<=1) return 0;
5        int cnt = 0;
6        for (int i = 0; i < nums.size(); i++) {
7            long long mtp = 1;
8            for (int j = i; j < nums.size(); j++) {
9                mtp *= nums[j];
10                if (mtp < k) {
11                    cnt++;
12                }
13                else{
14                    break;
15                }
16            }
17        }
18        return cnt;
19    }
20};