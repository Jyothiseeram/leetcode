1class Solution:
2    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
3        arr=[]
4        res=set(nums)
5        for i in range(1,len(nums)+1):
6            if i not in res:
7                arr.append(i)
8        return arr                
9            
10        