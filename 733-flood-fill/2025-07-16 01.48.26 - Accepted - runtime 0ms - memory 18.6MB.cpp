class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        int oc=grid[sr][sc];
        if(oc==color) return grid;// when given mat is already colored
        vis[sr][sc]=color;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            int dr[4]={-1,0,1,0};
            int dc[4]={0,-1,0,1};
            for(int i=0;i<4;i++){
                int row=r+dr[i];
                int col=c+dc[i];
                if(row<grid.size()&&row>=0&&col>=0&&col<grid[0].size()&& vis[row][col]!=color && grid[row][col]==oc){
                    q.push({row,col});
                    vis[row][col]=color;
                }
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(vis[i][j]==color) grid[i][j]=vis[i][j];
            }
        }
        return grid;
    }
};