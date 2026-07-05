class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(int i=0;i<roads.size();i++){
            int u=roads[i][0];
            int v=roads[i][1];
            int wt=roads[i][2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }

        vector<int> vis(n+1,0);
        vis[1]=1;
        vector<int>dis(n+1,1e9);
        dis[1]=0;
        priority_queue<pair<int,int>>q;
        q.push({0,1});
        int ans=1e9;
        while(!q.empty()){
            int val=q.top().first;
            int node=q.top().second;
            q.pop();
            for(auto it:adj[node]){
                int x=it.first;
                int wt=it.second;
                ans=min(ans,wt);
                if(!vis[x]){
                    vis[x]=1;
                    // if(dis[x]<wt+val){
                    //     dis[x]=wt+val;
                        q.push({dis[x],x});
                    // }
                }
            }
        }
        return ans;
    }
};