class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        double n=equations.size();
        int idx=0;
        vector<double>res;
        unordered_map<string,int>mpp;
        for(auto &eq:equations){
            string u=eq[0];
            string v=eq[1];
            if(mpp.find(u)==mpp.end()) mpp[u]=idx++;
            if(mpp.find(v)==mpp.end()) mpp[v]=idx++;
        }
        vector<vector<pair<int,double>>>adj(idx);
        for(int i=0;i<equations.size();i++){
            int u=mpp[equations[i][0]];
            int v=mpp[equations[i][1]];
            double w=values[i];
            adj[u].push_back({v,w});
            adj[v].push_back({u,1.0/w});
        }
        for(auto &query:queries){
            double ans=-1.0;
            string s=query[0];
            string d=query[1];
            if(mpp.find(s)==mpp.end() || mpp.find(d)==mpp.end()){
            res.push_back(-1.0);
            continue;
        }
        vector<int>vis(idx,0);
        dfs(mpp[s],mpp[d],vis,adj,ans,1.0);
        res.push_back(ans);
        }
        return res;
    }
    bool dfs(int node,int des,vector<int>&vis,vector<vector<pair<int,double>>>&adj,double &ans,double product){
        if(vis[node]==1) return false;
        vis[node]=1;
        if(node==des){
            ans=product;    
            return true;
        }
        for(auto &it:adj[node]){
           if(dfs(it.first,des,vis,adj,ans,it.second*product))
           return true;
        }
        return false;
    }
};