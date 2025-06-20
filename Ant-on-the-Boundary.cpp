class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int totalsum=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            totalsum+=nums[i];
            if(totalsum==0) ++count;
        }
       return count;
    }
};
