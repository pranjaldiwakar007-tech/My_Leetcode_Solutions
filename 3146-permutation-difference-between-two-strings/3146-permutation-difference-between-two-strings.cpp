class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>mpp;
        int cnt=0;
        for(int i=0;i<t.size();i++){
            mpp[t[i]]=i;
        }
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(mpp.find(ch)!=mpp.end()){
                cnt+=abs(i-mpp[ch]);
            }
        }
        return cnt;
    }
};