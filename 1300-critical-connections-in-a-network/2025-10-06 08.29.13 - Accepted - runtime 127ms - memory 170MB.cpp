class Solution {
    int timer=1;
public:
    void dfs(int node,int parent,vector<int>&low,vector<int>&cur,vector<vector<int>>&adj,vector<int>&vis
    ,vector<vector<int>>&bridges){
        vis[node]=1;
        low[node]=timer;
        cur[node]=timer;
        timer++;
        for(auto it:adj[node]){
            if(it==parent) continue;
            if(!vis[it]){
               dfs(it,node,low,cur,adj,vis,bridges);
               low[node]=min(low[it],low[node]);
               if(low[it]>cur[node]){
                bridges.push_back({it,node});
               }
            }
            else    low[node]=min(low[it],low[node]);
        }
    }
    vector<vector<int>> criticalConnections(int n,vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);
        vector<int>cur(n);
         vector<int>low(n);
        // for(int i=0;i<n;i++){
        //     parent[i]=i;
        //     low[i]=i;
        // }
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<vector<int>>bridges;
        dfs(0,-1,low,cur,adj,vis,bridges);
        return bridges;
    }
};