class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,10001);
        dp[n-1]=0;
        for(int i=n-1;i>=0;i--)
        {
          for(int j=nums[i];j>=1;j--)
          {
            if(i+j<=n-1)dp[i]=min(dp[i],1+dp[i+j]);
          } 
        }
       return dp[0]; 
    }
};