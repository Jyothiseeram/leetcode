class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> res;
        int totalsum=0;
        for(int i=0;i<nums.size();i++)
        {
            totalsum+=nums[i];
        }
        int left=0;
        for(int i=0;i<nums.size();i++)
        {
            int right=totalsum-nums[i]-left;
            res.push_back(abs(left-right));
            left+=nums[i];
        }
       return res;
    }
};