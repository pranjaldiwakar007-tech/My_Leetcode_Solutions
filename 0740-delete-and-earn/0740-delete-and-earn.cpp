class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        vector<int>sumP(mx+1,0);
        vector<int>dp(mx+1,-1);
        dp[0]=0;
        for(auto &x:nums) sumP[x]+=x;
        dp[1]=sumP[1];
        for(int i=2;i<=mx;i++){
            dp[i]=max(dp[i-1],sumP[i]+dp[i-2]);
        }
        return dp[mx];
    }
};