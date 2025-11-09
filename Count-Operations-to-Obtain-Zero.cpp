class Solution {
public:
    int countOperations(int num1, int num2) {
        int cnt=0;
        int n=num1;
        int m=num2;
        while(n>0 && m>0)
        {
            if(n<m)
            {
                m=m-n;
                cnt++;
            }
            else if(n>m)
            {
                n=n-m;
                cnt++;
            }
            else if(n==m)
            {
                n=n-m;
                cnt++;
            }
        }
        return cnt;
    }
};