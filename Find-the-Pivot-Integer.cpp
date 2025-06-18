class Solution {
public:
    int pivotInteger(int n) {
        int totalsum=0;
        for(int i=1;i<=n;i++)
        {
            totalsum+=i;
        }
        int left=0;
        for(int i=1;i<=n;i++)
        {
            int right=totalsum-left-i;
            if(left==right)
            {
                return i;
            }
            left+=i;
        }
        
        return -1;
    }
};