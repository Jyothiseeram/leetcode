class Solution:
    def alternatingSum(self, nums: List[int]) -> int:
        sum1=0
        sum2=0
        for i in range(0,len(nums),2):
            sum1+=nums[i]
        for i in range(1,len(nums),2):
            sum2+=nums[i]  
        return sum1-sum2      

        