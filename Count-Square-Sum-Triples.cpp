1class Solution {
2public:
3    int countTriples(int n) {
4        int cnt = 0;
5        for (int i = 1; i <= n; i++) {
6            for (int j = 1; j <= n; j++) {
7                int csqr = j * j + i * i;
8                int c = sqrt(csqr);
9                if (c * c == csqr && c <= n) {
10                    cnt++;
11                }
12            }
13        }
14        return cnt;
15    }
16};