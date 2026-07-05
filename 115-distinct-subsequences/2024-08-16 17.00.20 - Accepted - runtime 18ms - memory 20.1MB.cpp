class Solution {
public:
const int mod = 1e9 + 7;
     int numDistinct(string s, string t) {
        int n=s.size(), m=t.size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,0));
        for(int i=0;i<=n;++i) dp[i][m]=1;
        for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            int res=0;
                if(s[i]==t[j]){
                    res+=dp[i+1][j+1]%mod;
                }
                res+=dp[i+1][j]%mod;
                dp[i][j]=res;
            }
        }
        return (int)dp[0][0];
    }
};