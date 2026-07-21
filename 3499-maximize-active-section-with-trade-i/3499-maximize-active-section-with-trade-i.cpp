class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int zero=0,ones=0;
        int curr=0;
        int prev=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') curr++;
            else{
                ones++;
            if(curr>0){
                // if(s[i]=='1') one++;
                zero=max(zero,curr+prev);
                prev=curr;
                }
            curr=0;
            }
        }
        if(curr>0) zero=max(zero,curr+prev);
        return ones+zero;
    }
};