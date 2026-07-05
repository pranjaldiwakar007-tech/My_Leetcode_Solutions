class Solution {
    private:
    void dodfs(int i,int vis[200],vector<int> adj[])
    {
         vis[i]=1;
        for(auto it: adj[i])
        {
            if(!vis[it])
            {
                dodfs(it,vis,adj);
            }
        }

    }
    public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(),cnt=0;
        vector<int> adj[n];
        int vis[200]={0};
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        {
            if(isConnected[i][j]==1 && j!=i)
            {
            adj[i].push_back(j);
            adj[j].push_back(i);
            }
        }
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                cnt++;
                dodfs(i,vis,adj);
            }
        }
      return cnt;  
    }

};