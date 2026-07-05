class Solution {
public:
    int strangePrinter(string s) {
        const int n = ssize(s);
        int dp[n][n];
        for (int i = 0; i < n; i++) dp[i][i] = 1;

        for (int sz = 2; sz <= n; sz++) {
            for (int i = 0; i <= n - sz; i++) {
                int j = i + sz - 1;
                if (s[i] == s[j]) {
                    dp[i][j] = dp[i][j - 1];
                } else {
                    dp[i][j] = INT_MAX;

                    for (int split = i; split < j; split++)
                        dp[i][j] = min(dp[i][j], dp[i][split] + dp[split + 1][j]);
                }
            }
        }

        return dp[0][n - 1];
    }
};