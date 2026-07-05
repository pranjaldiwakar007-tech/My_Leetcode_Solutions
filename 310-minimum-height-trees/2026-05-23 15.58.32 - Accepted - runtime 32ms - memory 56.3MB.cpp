class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        // int u=edges.length();
        // int v=edges[0].leength;
        if(n==1) return {0};
        vector<vector<int>>adj(n);
        vector<int>indegree(n,0);
        vector<int>ans;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            indegree[u]++;
            indegree[v]++;
        }
    queue<int>q;
    for(int i=0;i<n;i++){
        if(indegree[i]==1) q.push(i);
    }
    int nodes=n;
    while(nodes>2){
        int size=q.size();
        nodes-=size;
        for(int i=0;i<size;i++){
        int m=q.front();
        q.pop();
        for(auto it:adj[m]){
            indegree[it]--;
            if(indegree[it]==1) q.push(it);
        }
        }
    }
     while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
    return ans;
    }
};