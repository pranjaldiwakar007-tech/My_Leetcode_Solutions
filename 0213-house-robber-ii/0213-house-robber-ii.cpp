class Solution {
public:
    int n;
    int solve(int ind,vector<int>& nums,vector<int>& dp){
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int pick=nums[ind]+solve(ind-2,nums,dp);
        int not_pick=0+solve(ind-1,nums,dp);
        return dp[ind]=max(pick,not_pick);
    }
    int rob(vector<int>& nums) {
        n=nums.size();
        vector<int>dp1(n-1,-1);
        vector<int>dp2(n-1,-1);
        if(n==1) return nums[0];
        vector<int>nums1(nums.begin(),nums.end()-1);
        vector<int>nums2(nums.begin()+1,nums.end());
        int ans1=solve(n-2,nums1,dp1);
        int ans2=solve(n-2,nums2,dp2);
        return max(ans1,ans2);
    }
};