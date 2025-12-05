1class Solution {
2public:
3    int countPartitions(vector<int>& nums) {
4        int left=0,cnt=0;
5        int totalsum=0,res;
6        for(int x:nums)
7        {
8              totalsum+=x;
9        }
10        for(int i=0;i<nums.size()-1;i++)
11        {
12            left+=nums[i];
13           int right=totalsum-left;
14            res=right-left;
15            if(res%2==0)
16            {
17                cnt++;
18            }
19        }
20        return cnt;
21    }
22};