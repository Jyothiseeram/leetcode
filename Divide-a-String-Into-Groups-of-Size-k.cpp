class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.size();
        vector<string> res;
        for(int i=0;i<n;i+=k)
        {
         string sub=s.substr(i,k);
        if(sub.size()<k)
        {
          sub.append(k - sub.size(), fill);
          }
          res.push_back(sub);
        }
        return res;
    }
};