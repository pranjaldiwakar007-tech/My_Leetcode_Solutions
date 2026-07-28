class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int l=0,r=0;
        unordered_map<string,int>mpp;
        for(;r<s.size();r++){
            if(r-l+1==10){
                mpp[s.substr(l,10)]++;
                l++;
            }
        }
        vector<string>res;
        for(auto &it:mpp){
            string ans=it.first;
            int cnt=it.second;
            if(cnt>1) res.push_back(ans);
        }
        return res;
    }
};