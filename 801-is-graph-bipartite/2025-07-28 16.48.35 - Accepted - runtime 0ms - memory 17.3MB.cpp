class Solution {
public:
    bool dfs(int node,int col,vector<int>&color,vector<vector<int>>& adj){
        color[node]=col;
        for(auto it:adj[node]){
            if(color[it]==-1){
         if(!dfs(it,!col,color,adj))return false;       
            }
            else if(color[it]==col) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
        // vector<vector<int>>adj(n);
        // for(int i=0;i<grid.size();i++){
        //     for(int j=0;j<grid[0].size();j++){
        //     //    adj[i].push_back(j);
        //     //    adj[j].push_back(i);
        //     adj[i].push_back(grid[i][j]);
        //     }
        // }
    //     int color[n];
    //    for(int i=0;i<grid.size();i++){
    //     color[i]=-1;
    //    } 
    vector<int>color(n,-1);
       for(int i=0;i<n;i++){
        if(color[i]==-1){
            if(!dfs(i,0,color,adj)) return false;
        }
       }
       return true;
    }
};