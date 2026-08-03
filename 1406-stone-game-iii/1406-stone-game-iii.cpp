class Solution {
public:
    string stoneGameIII(vector<int>& nums) {
        int n=nums.size();
        int dp[3]={nums[n-1],0,0};
        for(int i=n-2;i>=0;i--){
            int res=nums[i]-dp[0];
            res=max(res,nums[i]+nums[i+1]-dp[1]);
            if(i<n-2) res=max(res,nums[i]+nums[i+1]+nums[i+2]-dp[2]);
            dp[2]=dp[1];
            dp[1]=dp[0];
            dp[0]=res;
        }
        if(dp[0]>0) return "Alice";
        else if(dp[0]==0) return "Tie";
        return "Bob";
    }
};