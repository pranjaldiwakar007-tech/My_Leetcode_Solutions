class Solution {
public:
    int maxFreeTime(int t, int k, vector<int>& s, vector<int>& e) {
        int n = s.size();
        vector<int> g;
        g.push_back(s[0]);
        for (int i = 1; i < n; i++) {
            g.push_back(s[i] - e[i - 1]);
        }
        g.push_back(t - e[n - 1]);
        int sum = 0;
        for (int i = 0; i < k + 1; i++) {
            sum += g[i];
        }

        int maxF = sum;
        for (int i = k + 1; i < g.size(); i++) {
            sum += g[i] - g[i - (k + 1)];
            maxF = max(maxF, sum);
        }
        return maxF;

    }
};