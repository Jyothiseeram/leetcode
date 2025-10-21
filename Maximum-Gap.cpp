class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = 0;
        if (n < 2) {
            return 0;
        }
        for (int i = 0; i < n - 1; i++) {
            res = max(res, abs(nums[i] - nums[i + 1]));
        }
        return res;
    }
};