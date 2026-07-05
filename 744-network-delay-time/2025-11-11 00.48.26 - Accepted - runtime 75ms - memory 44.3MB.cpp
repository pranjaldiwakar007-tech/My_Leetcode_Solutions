class Solution {
public:
    int networkDelayTime(vector<vector<int>>& grid, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);

        for(int i=0;i<grid.size();i++){
                int u=grid[i][0];
                int v=grid[i][1];
                int wt=grid[i][2];
                adj[u].push_back({v,wt});
        }
        vector<int>dis(n+1,1e9);
        dis[k]=0;
        dis[0]=-1;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        q.push({0,k});
        while(!q.empty()){
            int node=q.top().second;
            int w=q.top().first;
            q.pop();
            for(auto it:adj[node]){
                int adjNode=it.first;
                int www=it.second;
                if(dis[adjNode]>www+dis[node]){
                    dis[adjNode]=www+dis[node];
                    q.push({dis[adjNode],adjNode});
                }
            }
        }
        int x=*max_element(dis.begin(),dis.end());
        if(x==1e9)return -1;
        return x;
    }
};