1class Solution {
2public:
3    int countOdds(int low, int high) {
4        int cnt = 0;
5        for (int i = low; i <= high; i++) {
6            if (i % 2 != 0) {
7                cnt++;
8            }
9        }
10        return cnt;
11    }
12};