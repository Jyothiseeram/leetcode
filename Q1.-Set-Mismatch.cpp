1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        int n = nums.size();
5        int expected_sum = n * (n + 1) / 2;
6        int arr_sum = accumulate(nums.begin(), nums.end(), 0);
7        set<int> res(nums.begin(), nums.end());
8        int unique_sum = accumulate(res.begin(), res.end(), 0);
9        int ele = expected_sum - unique_sum;
10        int dup = arr_sum - unique_sum;
11        return {dup, ele};
12    }
13};