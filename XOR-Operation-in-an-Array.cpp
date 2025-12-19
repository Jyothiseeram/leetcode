1class Solution {
2public:
3    int xorOperation(int n, int start) {
4        vector<int> res;
5        int sum=0;
6        res.push_back(start);
7        int temp=start;
8        while(n>1)
9        {
10            temp+=2;
11            res.push_back(temp);
12            n--;
13        }
14        for(int x:res)
15        {
16            sum^=x;
17        }
18
19        return sum;
20    }
21
22};