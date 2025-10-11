class Solution:
    def minSteps(self, s: str, t: str) -> int:
        a=Counter(s)
        b=Counter(t)
        cnt=0
        for i in a:
            if a[i]>b.get(i,0):
                cnt+=a[i]-b.get(i,0)
        return cnt        
        