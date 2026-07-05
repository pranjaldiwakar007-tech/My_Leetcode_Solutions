class Solution {
public:
    const int prime = 1e9 + 7;
    int f(int i,int j,string &s1,string &s2,vector<vector<int>> &dp)
    { 
        int result=0;
        if(i<0) return 0;
        if(j<0) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) 
        return dp[i][j]=f(i-1,j-1,s1,s2,dp)+f(i-1,j,s1,s2,dp);
        else   
        return dp[i][j]=f(i-1,j,s1,s2,dp);
    }
    int numDistinct(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<double>dp(m+1,0);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=m;j>=1;j--){
                if(s1[i-1]==s2[j-1]){
                    dp[j]=dp[j-1]+dp[j];
                }
            }
        }
        return (int)dp[m];
    }
};