typedef long long ll; 
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        int mod=1e9+7;
priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>>q;
        vector<vector<pair<int,int>>>adj(n);
        vector<int> ways(n,0);
        vector<ll> dis(n,1e18);
        for(int i=0;i<roads.size();i++){
            int u=roads[i][0];
            int v=roads[i][1];
            int w=roads[i][2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        int src=0;
        dis[0]=0;
        ways[0]=1;
        q.push({0,0});
        while(!q.empty()){
            ll len=q.top().first;
            int node=q.top().second;
            q.pop();
            for(auto it:adj[node]){
                 int adjNode=it.first;
                 ll wt=it.second;
                 if(len+wt<dis[adjNode]){
                    dis[adjNode]=len+wt;
                    ways[adjNode]=ways[node]; //didnt thought that
                    q.push({dis[adjNode],adjNode});
                }
                   else if(len+wt==dis[adjNode]){
                        ways[adjNode]=(ways[adjNode]+ways[node])%mod;
                }
            }
        }
        return ways[n-1]%mod;
    }
};