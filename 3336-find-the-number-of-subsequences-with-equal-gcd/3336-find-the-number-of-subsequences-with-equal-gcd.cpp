#define MOD 1000000007
class Solution {
public:
    int n;
    int dp[201][201][201];
    int solve(int idx,int g1,int g2,vector<int>&nums){
        if(idx==n){
            if(g1!=0 && g1==g2) return true;
            return false;
        }
        int &ans=dp[idx][g1][g2];
        if(ans!=-1) return ans;
        ans=0;
        ans=solve(idx+1,g1,g2,nums);
        int n1=(g1==0)?nums[idx]:gcd(g1,nums[idx]);
        ans=(ans+solve(idx+1,n1,g2,nums))%MOD;
        int n2=(g2==0)?nums[idx]:gcd(g2,nums[idx]);
        ans=(ans+solve(idx+1,g1,n2,nums))%MOD;
        return ans;
    }
    int subsequencePairCount(vector<int>& nums) {
        n=nums.size();
        memset(dp,-1,sizeof(dp));
        int x=solve(0,0,0,nums);
        return x;
    }
};