
class Solution:
    def removeAnagrams(self, words: List[str]) -> List[str]:
        res=[words[0]]
        for c in words[1:]:
            if Counter(c)!=Counter(res[-1]):
                res.append(c)
        return res        