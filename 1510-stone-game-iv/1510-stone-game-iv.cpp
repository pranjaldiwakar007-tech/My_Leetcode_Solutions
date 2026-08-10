class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<int>dp(n+1);
        for(int i=0;i<=n;i++){
            if(dp[i]==0){
                //i+j*j represents the to go val
                for(int j=1;i+j*j<=n;j++){
                    dp[i+j*j]=true;
                }
                //last check before the val
                if(dp[n]==1) return true;
            }
        }
        return false;
    }
};