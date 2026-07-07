class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return n;
        string s=to_string(n);
        string ans="";
        long long sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0') {ans+=s[i];
            sum+=s[i]-'0';}
        }
        sum*=stoll(ans);
        return sum;
    }
};