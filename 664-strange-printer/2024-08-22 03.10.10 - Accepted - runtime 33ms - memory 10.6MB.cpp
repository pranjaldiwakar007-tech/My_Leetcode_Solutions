class Solution {
public:
    int strangePrinter(string s) {
        s = removeDuplicates(s);
        int n = s.length();
        vector<vector<int > > dp(n,vector<int> (n,0));
         for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }

         for (int length = 2; length <= n; length++) {
            for (int start = 0; start + length - 1 < n; start++) {
                int end = start + length - 1;
                dp[start][end] = length;
                for (int split = 0; split < length - 1; split++) {
                    int totalTurns = dp[start][start + split] +
                                     dp[start + split + 1][end];
                    if (s[start + split] == s[end]) {
                        totalTurns--;
                    }

                    dp[start][end] =
                        min(dp[start][end], totalTurns);
                }
            }
        }
        return dp[0][n - 1];
    }
private:
    string removeDuplicates(string& s) {
        string uniqueChars;
        int i = 0;
        while (i < s.length()) {
            char currentChar = s[i];
            uniqueChars += currentChar;
            while (i < s.length() && s[i] == currentChar) {
                i++;
            }
        }
        return uniqueChars;
    }
};