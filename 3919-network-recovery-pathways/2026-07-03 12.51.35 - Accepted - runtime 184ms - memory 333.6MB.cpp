class Solution {
public:
    bool canReach(int mid,long long k,vector<bool>& online,
     vector<int>&topo,vector<vector<pair<int,int>>>&adj){
        int n=online.size();
        vector<long long>dis(n,LLONG_MAX);
        dis[0]=0;
        for(int u:topo){
            if(dis[u]==LLONG_MAX) continue;
            for(auto it:adj[u]){
                int v=it.first;
                int w=it.second;
                if(w<mid) continue;
                if(v!=n-1 && !online[v]) continue;
                dis[v]=min(dis[v],dis[u]+w);
            }
        }
        if(dis[n-1]<=k) return true;
        return false;
    }

    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        int n=online.size();
        vector<int>indegree(n,0);
        int maxi=0;
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            // if(online[u] && online[v])
            adj[u].push_back({v,wt});
            indegree[v]++;
            maxi=max(maxi,wt);
        }
        vector<int>topo;
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int u=q.front();
            q.pop();
            topo.push_back(u);
            for(auto it:adj[u]){
                int v=it.first;
                int w=it.second;
                indegree[v]--;
                if(indegree[v]==0) q.push(v);
            }
        }

        // binary search
        int low=0;
        int high=maxi;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canReach(mid,k,online,topo,adj)){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};