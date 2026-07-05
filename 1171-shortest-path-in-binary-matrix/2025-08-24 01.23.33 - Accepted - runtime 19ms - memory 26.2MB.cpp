class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
    queue<pair<int,pair<int,int>>>q;
    int ans=-1;
    vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),1e9));
    if(grid[0][0]==1 || grid[n-1][n-1]==1) return -1;
    vis[0][0]=0;
    q.push({0,{0,0}});
    while(!q.empty()){
        int dis=q.front().first;
        int r=q.front().second.first;
        int c=q.front().second.second;
        q.pop();
        for(int i=-1;i<2;i++){
        for(int j=-1;j<2;j++){
         int row=r+i;
         int col=c+j;
         if(row>=0&& row<grid.size()&&
         col>=0&&col<grid[0].size()&&grid[row][col]==0&&vis[row][col]==1e9){
            q.push({dis+1,{row,col}});
            vis[row][col]=dis+1;
         }
        }
    }
    // if(grid[row][col]==grid[n-1][n-1])return dis;  
    if(r==n-1 && c==n-1)return dis+1;  
    }
    return -1;
    }
};