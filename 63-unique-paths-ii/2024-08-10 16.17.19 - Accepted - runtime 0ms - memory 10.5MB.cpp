class Solution {
    int solve(vector<vector<int>>& obstacleGrid,int i,int j,vector<vector<int>> &dp)
    {
        if(i>=0 and j>=0 and obstacleGrid[i][j]==1) 
        {
            return 0;
        }
        if(i<0 or j<0) 
        {
            return 0;
        }
        if(i==0 and j==0) 
        {
            return 1;
        }
        if(dp[i][j]!=-1)
        return dp[i][j];
        int t=solve(obstacleGrid,i-1,j,dp);
        int l=solve(obstacleGrid,i,j-1,dp);
        return dp[i][j]=t+l;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1)); 
        return solve(obstacleGrid,n-1,m-1,dp); 
    }

};