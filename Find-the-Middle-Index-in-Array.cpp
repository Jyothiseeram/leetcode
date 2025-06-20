class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       int totalsum=0;
       for(int i=0;i<nums.size();i++)
       {
        totalsum+=nums[i];
       }
        int left=0;
        for(int i=0;i<nums.size();i++)
        {
            int right=totalsum-nums[i]-left;
            if(left==right)
            {
                return i;
            }
            left+=nums[i];
        }
           return -1;
    }
};