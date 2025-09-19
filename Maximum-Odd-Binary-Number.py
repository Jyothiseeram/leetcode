class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        cones=s.count('1')
        czeros=s.count('0')
        return '1'*(cones-1)+'0'*czeros+'1'
        