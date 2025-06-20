class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int left = 0;
        for (int i = 0; i < nums.size(); i++) {
            int right = left + nums[i];
            res.push_back(right);
            left += nums[i];
        }
        return res;
    }
};