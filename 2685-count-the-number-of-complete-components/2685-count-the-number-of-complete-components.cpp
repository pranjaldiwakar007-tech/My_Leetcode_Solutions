class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans=0;
        vector<bool> vis(n,false);
        queue<int>q;
        for(int i=0;i<n;i++){
            if(vis[i]) continue;
            vis[i]=true;
            q.push(i);
            int nodes=0,edge=0;
            while(!q.empty()){
                int u=q.front();
                q.pop();
                nodes++;
                edge+=adj[u].size();
                for(int &v:adj[u]){
                    if(!vis[v]){
                        vis[v]=true;
                        q.push(v);
                    }
                }
            }
            edge/=2;
            if(edge==nodes*(nodes-1)/2) ans++;
        }
        return ans;
    }
};