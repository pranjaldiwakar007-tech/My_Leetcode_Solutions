class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mpp;
        int n=s.size();
        int l=0,r=0,ans=0;
        while(r<n){
            mpp[s[r]]++;
            while(mpp.size()==3){
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                ans+=n-r;
                l++;
            }
        r++;
        }
        return ans;
    }
};