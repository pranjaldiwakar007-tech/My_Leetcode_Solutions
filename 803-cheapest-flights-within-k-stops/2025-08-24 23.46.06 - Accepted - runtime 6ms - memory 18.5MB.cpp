class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> ans(n,1e9);
        vector<vector<pair<int,int>>>adj(n);
        // vector<pair<int,int>>adj[n];
        queue<pair<int,pair<int,int>>>q;
        for(auto it:flights){
            adj[it[0]].push_back({it[1],it[2]});
        }
        ans[src]=0;
        q.push({0,{src,0}});
        while(!q.empty()){
            int stop=q.front().first;
            int node=q.front().second.first;
            int dis=q.front().second.second;
            q.pop();
            if(stop>k) continue;  
            for(auto iter:adj[node]){
                int adjNode=iter.first;
                int wg=iter.second;
                if(wg+dis<ans[adjNode]&& stop<=k){
                    ans[adjNode]=wg+dis;
                    q.push({stop+1,{adjNode,wg+dis}});
                }
            }

        }
     if(ans[dst]==1e9) return -1;
     return ans[dst];
    }
};