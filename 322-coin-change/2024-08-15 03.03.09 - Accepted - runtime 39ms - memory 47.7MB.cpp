class Solution {
public:
int minimumElementsUtil(vector<int>& arr, int ind, int T, vector<vector<int>>& dp){

    if(ind == 0){

        if(T % arr[0] == 0)
            return T / arr[0]; // If yes, return the quotient as the answer
        else
            return 1e9; // Otherwise, return a very large value to indicate it's not possible
    }
    
    // If the result for this index and target sum is already calculated, return it
    if(dp[ind][T] != -1)
        return dp[ind][T];
        
    // Calculate the minimum elements needed without taking the current element
    int notTaken = 0 + minimumElementsUtil(arr, ind - 1, T, dp);
    
    // Calculate the minimum elements needed by taking the current element
    int taken = 1e9; // Initialize 'taken' to a very large value
    if(arr[ind] <= T)
        taken = 1 + minimumElementsUtil(arr, ind, T - arr[ind], dp);
        
    // Store the minimum of 'notTaken' and 'taken' in the DP array and return it
    return dp[ind][T] = min(notTaken, taken);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int> (amount+1,-1));
        int ans=minimumElementsUtil(coins,n-1,amount,dp);
        if(ans >= 1e9)
        return -1;
        return ans;
    }
};