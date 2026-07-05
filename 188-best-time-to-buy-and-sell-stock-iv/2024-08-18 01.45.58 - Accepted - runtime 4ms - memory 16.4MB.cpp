class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
     int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2*k+1,0));
        for(int ind=n-1;ind>=0;ind--){
            for(int transno=2*k-1;transno>=0;transno--){
            if(transno%2==0){
       dp[ind][transno]=max(-prices[ind]+dp[ind+1][transno+1],dp[ind+1][transno]);}
        else
        dp[ind][transno]=max(prices[ind]+dp[ind+1][transno+1],dp[ind+1][transno]);
            }
        }
         return dp[0][0];
    }
};