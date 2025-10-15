class Solution:
    def countSubstrings(self, s: str) -> int:
        cnt=0
        res=""
        for i in range(len(s)):
            for j in range(i,len(s)):
                res=s[i:j+1]
                if res==res[::-1]:
                    cnt+=1
        return cnt
        