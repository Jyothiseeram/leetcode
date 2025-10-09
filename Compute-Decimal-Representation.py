class Solution:
    def decimalRepresentation(self, n: int) -> List[int]:
        s = str(n)
        length = len(s)
        res = [int(s[i]) * pow(10, length - i - 1) for i in range(length) if s[i] != '0']
        return res

