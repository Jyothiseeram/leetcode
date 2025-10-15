class Solution:
    def longestPalindrome(self, s: str) -> str:
        seq=""
        for i in range(len(s)):
            for j in range(i,len(s)):
                res=s[i:j+1]
                if res==res[::-1]:
                    if len(res)>len(seq):
                        seq=res
        return seq                
                    
                    
                
        