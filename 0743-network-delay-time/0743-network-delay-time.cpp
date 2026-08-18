class Solution {
public:
    int networkDelayTime(vector<vector<int>>& edges, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        // vector<int>vis(n,0);
        vector<int>dis(n+1,1e9);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int w=edges[i][2];
            adj[u].push_back({v,w});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        dis[k]=0;
        pq.push({0,k});
        while(!pq.empty()){
            int wt=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            // if(node==n-1) return dis[node];
            for(auto &it:adj[node]){
                int newNode=it.first;
                int newWt=it.second;
                // if(!vis[newNode]){
                //     vis[newNode]=1;
                    if(dis[newNode]>dis[node]+newWt){
                        dis[newNode]=dis[node]+newWt;
                        pq.push({dis[newNode],newNode});
                    // }
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(dis[i]==1e9){
                return -1;
            }
            ans=max(ans,dis[i]);
        }
        return ans;
    }
};