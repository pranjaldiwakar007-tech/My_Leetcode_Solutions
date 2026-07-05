class Solution {
public:
    string shortestPalindrome(string s) {
        string t = s;
        reverse(t.begin(), t.end());
        string res = t;
        t = s + '#' + t;
        int n = t.size();
        vector<int> lps(n, 0);
        int length = 0,i=1;
        while (i < n) {
            if (t[i] == t[length]) {
                lps[i] = ++length;
                i++;
            } else {
                if (length != 0) {
                    length = lps[length - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return res.substr(0, s.size() - lps[n - 1]) + s;
    }
};