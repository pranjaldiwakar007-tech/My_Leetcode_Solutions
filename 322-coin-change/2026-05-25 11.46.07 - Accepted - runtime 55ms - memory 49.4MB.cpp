class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        for(int i=0;i<n;i++){
            dp[i][0]=0;
        }
        // for(int i=0;i<=amount;i++){
        //     dp[0][i]=1e9;
        // }
       int ans=minel(coins,n-1,amount,dp);
       if(ans==1e9) return -1;
       return ans;
    }
    int minel(vector<int>& coins,int index,int amount,vector<vector<int>>&dp){
        if(dp[index][amount]!=-1) return dp[index][amount];
        if(index==0){
            if(amount%coins[0]==0) return amount/coins[0];
            else return 1e9;
        }
        int not_take=0+minel(coins,index-1,amount,dp);
        int take=1e9;
        if(coins[index]<=amount){
            take=1+minel(coins,index,amount-coins[index],dp);
        }
        dp[index][amount]=min(take,not_take);
        return dp[index][amount];
    }
};