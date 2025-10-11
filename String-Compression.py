class Solution:
    def compress(self, chars: List[str]) -> int:
        left=0
        right=0
        while left<len(chars):
            char=chars[left]
            count=0
            while left<len(chars) and chars[left]==char:
                left+=1
                count+=1
            chars[right]=char
            right+=1
            if count > 1:
                for c in str(count):
                    chars[right] = c
                    right += 1

        return right

       