class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int cnt=0;
        int l=0,r=0;
        for(;r<n;r++){
            if(r-l+1==3){
                if(r>0 && s[r]!=s[r-1] && s[r]!=s[l] && s[l] && 
                s[r-1]!= s[l]) cnt++;
                l++;
            }
        }
        return cnt;
    }
};