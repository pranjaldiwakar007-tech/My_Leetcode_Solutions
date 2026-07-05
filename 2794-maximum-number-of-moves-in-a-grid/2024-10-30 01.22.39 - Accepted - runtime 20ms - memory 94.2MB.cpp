class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<pair<int,int>> arr={{0,1},{-1,1},{1,1}}; // three paths we can take
        int ans=0;
        for(int i=0;i<n;i++)
        {
            queue<pair<int,int>> q;
            q.push({i,0});
            while(q.size())
            {
                auto node=q.front();
                q.pop();
                for(auto it: arr)
                {
                    int curl=node.first+it.first;
                    int curr=node.second+it.second;
                    if(curl>=0&&curr>=0&&curl<n&&curr<m&&!vis[curl][curr])
                    {
                        if(grid[node.first][node.second]<grid[curl][curr])
                        {
                            vis[curl][curr]=vis[node.first][node.second]+1;
                            ans=max(ans,vis[curl][curr]);
                            q.push({curl,curr});
                        }
                    }
                }
            }
        }
        return ans;
    }
};