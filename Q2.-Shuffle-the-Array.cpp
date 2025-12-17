1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        vector<int> arr;
5       for(int i=0;i<n;i++)
6       {
7        arr.push_back(nums[i]);
8        arr.push_back(nums[i+n]);
9       }
10        return arr;
11    }
12};