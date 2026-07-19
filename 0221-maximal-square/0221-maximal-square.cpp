class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxlen=0;
        vector<int>dp(m,0);
        for(int r=0;r<n;r++){
            int prev=0;
            for(int c=0;c<m;c++){
                int temp=dp[c];
                if(!r || !c || matrix[r][c]=='0') dp[c]=matrix[r][c]-'0';
                else{
                    dp[c]=1+min(prev,min(dp[c],dp[c-1]));
                }
                maxlen=max(maxlen,dp[c]);
                prev=temp;
            }
        }
        return maxlen*maxlen;
    }
};