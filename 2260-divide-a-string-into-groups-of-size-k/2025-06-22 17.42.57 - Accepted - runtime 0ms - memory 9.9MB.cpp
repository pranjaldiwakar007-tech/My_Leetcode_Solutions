class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> temp;
        for(int i=0;i<s.size();i+=k){
         string ans=s.substr(i,k);
        if(ans.size()<k){
                ans+=string(k-ans.size(),fill);
            }
            temp.push_back(ans);
        }
    return temp;
    }
};