class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalsum=0;
        int count=0;
        for(int i:nums)
        {
            totalsum+=i;
        }
        int left=0;
        for(int i=0;i<nums.size()-1;i++)
        {   
            left+=nums[i];
            int right=abs(totalsum-left);
            if((left-right)%2==0)
            {
                count++;
            }
           
        }
        return count;
    }
};