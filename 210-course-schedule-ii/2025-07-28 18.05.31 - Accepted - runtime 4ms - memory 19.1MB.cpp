class Solution {
public:
    bool dfs(int node,vector<int>&vis,vector<int>&pathvis,vector<int> &temp,
    vector<vector<int>>& grid){
        vis[node]=1;
        pathvis[node]=1;
        // temp.push_back(node);
            for(auto it:grid[node]){
            if(!vis[it]){
                if(dfs(it,vis,pathvis,temp,grid))return true;
            }
            else if(pathvis[it]) return true;
        }
        temp.push_back(node);
        pathvis[node]=0;
        return false;
    }
    vector<int> findOrder(int v, vector<vector<int>>& prerequisites) {
        vector<vector<int>>grid(v);
        for(auto it:prerequisites){
        grid[it[1]].push_back(it[0]); // edge from it[1] -> it[0]
}

        vector<int>vis(v,0);
        vector<int> temp;   
        vector<int>pathvis(v,0);
      for(int i=0;i<v;i++){
        // for(int j=0;j<grid[0].size();j++){
            if(!vis[i]){
             if(dfs(i,vis,pathvis,temp,grid)) return {};
            }
        }  
        reverse(temp.begin(),temp.end());
        return temp;
    }
};