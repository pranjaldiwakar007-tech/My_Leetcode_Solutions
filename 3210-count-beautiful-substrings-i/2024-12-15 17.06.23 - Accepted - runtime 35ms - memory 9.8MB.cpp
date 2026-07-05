class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int ans=0;
        for(int z=0;z<s.size();z++){
            int cnt1=0,cnt2=0;
            for(int j=z;j<s.size();j++){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') cnt1++;
            else cnt2++;
            if((cnt1==cnt2)&& (cnt1*cnt2)%k==0) ans++;
            }
        }
        return ans;
    }
};