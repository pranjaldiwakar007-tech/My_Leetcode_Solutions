class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int cumsum[n];
        for(int i=0;i<n;i++){
            if(i==0) cumsum[i]=nums[i];
            else cumsum[i]=cumsum[i-1]+nums[i];
        }
        int dp[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j+i<n;j++){
                int start=j;
                int end=j+i;
                if(start==end) dp[j][j+i]=nums[j];
                else if(start+1==end) dp[j][j+1]=max(nums[start],nums[end]);
                else{
                    int choice1=nums[start]+(cumsum[end]-cumsum[start+1]+nums[start+1]-dp[start+1][end]);
                    int choice2=nums[end]+(cumsum[end-1]-cumsum[start]+nums[start]-dp[start][end-1]);
                    dp[start][end]=max(choice1,choice2);
                }
            }
        }
        return dp[0][n-1]>=cumsum[n-1]-dp[0][n-1];
    }
};