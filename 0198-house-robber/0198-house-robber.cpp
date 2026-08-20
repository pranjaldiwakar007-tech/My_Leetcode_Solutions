class Solution {
public:
    int n;
    // int solve(int ind,vector<int>& nums,vector<int>& dp){
    //     if(ind==0) return nums[ind];
    //     if(ind<0) return 0;
    //     if(dp[ind]!=-1) return dp[ind];
    //     int pick=nums[ind]+solve(ind-2,nums,dp);
    //     int not_pick=0+solve(ind-1,nums,dp);
    //     return dp[ind]=max(pick,not_pick);
    // }
    int rob(vector<int>& nums) {
        n=nums.size();
        vector<int>dp(n,-1);
       if(n==0) return 0;
        // if(ind<0) return 0;
        dp[0]=nums[0];
        // if(dp[ind]!=-1) return dp[ind];
        // int pick=nums[ind]+solve(ind-2,nums,dp);
        // int not_pick=0+solve(ind-1,nums,dp);
        // return dp[ind]=max(pick,not_pick);
        for(int i=1;i<n;i++){
            int pick=nums[1];
            if(i>1) 
            pick=nums[i]+dp[i-2];
            int not_pick=0+dp[i-1];
            dp[i]=max(pick,not_pick);
        }
        return dp[n-1];
    }
};