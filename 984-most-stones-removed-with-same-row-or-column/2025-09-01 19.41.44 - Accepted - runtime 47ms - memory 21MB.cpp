class Solution {
public:
void dfs(int node,vector<int>&vis,vector<vector<int>>&adj){
vis[node]=1;
for(auto it:adj[node]){
    if(!vis[it]){
       dfs(it,vis,adj);
    }
}
}
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<vector<int>>adj(n);
        int cnt=0;
        vector<int>vis(stones.size(),0);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(stones[i][0]==stones[j][0]|| stones[i][1]==stones[j][1]){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        for(int i=0;i<stones.size();i++){
            if(!vis[i]){cnt++;dfs(i,vis,adj);}
        }
return n-cnt;
    }
};