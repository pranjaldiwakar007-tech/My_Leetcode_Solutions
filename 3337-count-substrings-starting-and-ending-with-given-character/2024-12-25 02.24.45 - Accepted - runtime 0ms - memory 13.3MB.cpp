class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long cnt=0;
        long long sum=0;
        for(int i=0;i<=s.size();i++){
            if(c==s[i]){
                sum+=cnt+1;
                cnt++;
            }
        }
        return sum;
    }
};