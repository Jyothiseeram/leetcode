class Solution {
public:
    int smallestNumber(int n) {
        int cnt=0;
        while(n>0)
        {
           n=n/2;
           cnt++;
        }
        return pow(2,cnt)-1;
    }
};