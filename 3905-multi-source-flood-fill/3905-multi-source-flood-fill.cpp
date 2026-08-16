    class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        queue<pair<int,pair<int,int>>>pq;
        vector<vector<int>>vis(n,vector<int>(m,0));
        // vector<vector<int>>dis(n,vector<int>(m,1e9));
        vector<vector<int>>grid(n,vector<int>(m,0));
        sort(sources.begin(),sources.end(),
             [](vector<int>& a,vector<int>& b){
                 return a[2]>b[2];
             });
        for(auto &s:sources){
                int r=s[0];
                int c=s[1];
                int col=s[2];
                // if(sources[i][0]!=0){
                    pq.push({col,{r,c}});
                    vis[r][c]=1;
                    grid[r][c]=col;
                }
                // grid[i][j]=sources[i][j];
                // pq.push({-0,{i,j}});
        int dr[4]={-1,0,1,0};
        int dc[4]={0,-1,0,1};
        while(!pq.empty()){
            int color=pq.front().first;
            int r=pq.front().second.first;
            int c=pq.front().second.second;
            pq.pop();
            // if(vis[r][c]) continue;
            // vis[r][c]=1;
            // int color=grid[r][c];
            for(int i=0;i<4;i++){
                int row=r+dr[i];
                int col=c+dc[i];
                if(row>=0 && row<n && col>=0 && col<m && 
                !vis[row][col]){
                    // int newDist=d+1;
                    // if(grid[row][col]==0 || grid[row][col]>color){
                    vis[row][col]=1;
                    // if(newDist>dis[row][col]){
                    //     dis[row][col]=newDist;
                    // }
                    grid[row][col]=color;
                    pq.push({color,{row,col}});
                // }
            }
        }
    }
        return grid;
    }
};