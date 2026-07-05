class Solution {
public:
    long long minimumSteps(string s) {
        long long b=0,sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') b++;
            else sum+=b;
        }
        return sum;
    }
};