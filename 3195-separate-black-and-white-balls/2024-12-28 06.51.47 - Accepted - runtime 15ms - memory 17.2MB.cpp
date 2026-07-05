class Solution {
public:
    long long minimumSteps(string s) {
        long long b=0,sum=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='0') b++;
            else sum+=b;
        }
        return sum;
    }
};