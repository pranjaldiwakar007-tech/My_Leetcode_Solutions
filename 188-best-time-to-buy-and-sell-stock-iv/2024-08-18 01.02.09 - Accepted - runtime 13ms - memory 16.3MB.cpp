class Solution {
public:
    int f(int ind,int transaction,vector<int> &prices,int n,int k, vector<vector<int>> &dp) {
       int profit=0;
         if(ind==n || transaction==2*k) return 0;
         if(dp[ind][transaction]!=-1) return dp[ind][transaction];
        if(transaction%2==0)
        return dp[ind][transaction]=max(-prices[ind]+f(ind+1,transaction+1,prices,n,k,dp),
        f(ind+1,transaction,prices,n,k,dp));
        else
        return dp[ind][transaction]=max(prices[ind]+f(ind+1,transaction+1,prices,n,k,dp),
        f(ind+1,transaction,prices,n,k,dp));
    }
     
    int maxProfit(int k,vector<int>& prices) {
        int n=prices.size();
        vector<vector <int>> dp(n+1,vector<int> (2*k,-1));
        return f(0,0,prices,n,k,dp);
    }
};