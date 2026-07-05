class Solution {
public:
int f(int i,int jump,vector<int>&nums,vector<int>&dp){
    if(i>=nums.size()-1) return 0;
    if(dp[i]!=10001) return dp[i];
    for(int j=1;j<=nums[i];j++)
    jump=min(jump,1+f(i+j,jump+1,nums,dp));
    return dp[i]=jump;
}
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,10001);
        return f(0,10001,nums,dp);
    }
};