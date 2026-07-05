class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        long long ans = 0;
        vector<vector<int long long>> adj(26, vector<int long long>(26, 1e16));
        for(int i=0;i<original.size();i++) {
            adj[original[i]-'a'][changed[i]-'a'] = min(adj[original[i]-'a']       [changed[i]-'a'], (long long)cost[i]);
        }
        for(int k=0;k<26;k++) {
            for(int i=0;i<26;i++) {
                for(int j=0;j<26;j++) {
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }
        for(int i=0;i<26;i++) {
            for(int j=0;j<26;j++) {
                if(adj[i][j] == 1e16) {
                    adj[i][j] = -1;
                }
            }
        }
        for(int i=0;i<source.length();i++) {
            if(source[i] != target[i]) {
                if(adj[source[i]-'a'][target[i]-'a'] != -1) {
                    ans += adj[source[i]-'a'][target[i]-'a'];
                }
                else {
                    return -1;
                }
            }
        }
        return ans;

    }
};