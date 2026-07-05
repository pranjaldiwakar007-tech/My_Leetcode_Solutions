class Solution {
public:
    int countHomogenous(string s) {
        int mod=1000000000+7;
        int len=1;
        int res=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) {
                len++;
            }
            else{
                len=1;
            }
        res=(res+len)%mod;
        }
        return res;
    }
};