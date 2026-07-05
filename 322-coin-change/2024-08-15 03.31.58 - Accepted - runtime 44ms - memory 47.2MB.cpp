class Solution {
public:
    int coinChange(vector<int>& arr, int T) {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int> (T+1,0));
        for(int i=0;i<=T;i++) {
        if(i%arr[0]==0){
         dp[0][i]= i / arr[0]; }
         else dp[0][i]=1e9;
        }
        for(int ind=1;ind<n;ind++)
        {
            for(int j=0;j<=T;j++)
            {
                int notTaken = 0 + dp[ ind - 1][j];
                int taken = INT_MAX;
                if(arr[ind] <= j)
                taken = 1 + dp[ind][ j - arr[ind]];
                dp[ind][j] = min(notTaken, taken);
            }
        }
        int ans=dp[n-1][T];
        if(ans >= 1e9)
        return -1;
        return ans;

    }
};