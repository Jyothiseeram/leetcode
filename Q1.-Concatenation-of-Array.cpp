1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        nums.insert(nums.end(),nums.begin(),nums.end());
5        return nums;
6    }
7};