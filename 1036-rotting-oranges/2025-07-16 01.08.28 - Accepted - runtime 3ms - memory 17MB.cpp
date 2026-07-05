class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else if(grid[i][j]==1){
                    vis[i][j]=1;
                }
            }
        }
        int maxt=0;
        while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second; 
        maxt=max(maxt,t);
        q.pop();
        int dc[4]={-1,0,1,0};
        int dr[4]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int row=r+dr[i];
            int col=c+dc[i];
            if(row>=0&&row<grid.size()&&col>=0&&col<grid[0].size()&&vis[row][col]!=2 &&vis[row][col]==1){
                q.push({{row,col},t+1});
                vis[row][col]=2;
            }
        }
        }
        for(int i=0;i<vis.size();i++){
            for(int j=0;j<vis[0].size();j++){
                if(vis[i][j]!=2 && vis[i][j]==1) return -1;
            }
        }
        return maxt;
    }
    // int bfs(int r,int c,)
};