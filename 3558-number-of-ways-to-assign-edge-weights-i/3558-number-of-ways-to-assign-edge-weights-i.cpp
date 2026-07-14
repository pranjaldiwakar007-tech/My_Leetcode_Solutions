typedef long long ll;
#define MOD 1000000007
class Solution {
public:
    ll powerr(ll a,ll b){
        int ans=1;
        while(b>0){
            if(b&1){
                ans=(ans*a)%MOD;
            }
            a=(a*a)%MOD;
            b=b>>1;
        }
        return ans;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        vector<vector<int>>adj(n+1);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<pair<int,int>>q;
        q.push({1,0});
        vector<bool>vis(n+1,0);
        vis[1]=1;
        int maxi=0;
        while(!q.empty()){
            int node=q.front().first;
            int depth=q.front().second;
            q.pop();
            maxi=max(depth,maxi);
            for(auto &it:adj[node]){
                // int adjNode=it.first;
                // int adjDepth=it.second;
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,depth+1});
                }
            }
        }
        int x=(int)powerr(2,maxi-1);
        return x;
    }
};