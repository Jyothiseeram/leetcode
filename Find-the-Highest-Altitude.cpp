class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> res;
        int left=0;
        int maxa=0;
        for(int i=0;i<gain.size();i++)
        {
           left+=gain[i];
           maxa=max(left,maxa);
        }
        return maxa;
    }
};