1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int cnt = 0, temp = 0;
5        for (int i : nums) {
6            if (i == 1)
7                cnt++;
8            else {
9                temp = max(cnt, temp);
10                cnt = 0;
11            }
12        }
13        return max(temp, cnt);
14    }
15};