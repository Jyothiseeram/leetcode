1class Solution:
2    def findErrorNums(self, nums: List[int]) -> List[int]:
3        arr=[]
4        counts=Counter(nums)
5        res=set(nums)
6        n=len(nums)
7        for i in range(1,n+1):
8            if counts[i]>1:
9                dup=i
10            if i not in res:
11                miss=i
12
13        return [dup,miss]        
14
15
16
17    
18
19            