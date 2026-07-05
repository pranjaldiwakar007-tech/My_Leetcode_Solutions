class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>& mat,vector<vector<int>>&vis){
        int n=mat.size(),m=mat[0].size();
        vis[r][c]=1;
        for(int i=0;i<4;i++){
        int dr[4]={-1,0,1,0};
        int dc[4]={0,-1,0,1};
        int row=r+dr[i];
        int col=c+dc[i];
        if(row>=0&&row<n&&col>=0&&col<m&&!vis[row][col]
        &&mat[row][col]==1){
            // vis[row][col]=1;
            dfs(row,col,mat,vis);
        }
        }
    }
    int numEnclaves(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(mat[i][0]){
                dfs(i,0,mat,vis);
            }
            if(mat[i][m-1]){
                dfs(i,m-1,mat,vis);
            }
        }
        for(int j=0;j<m;j++){
            if(mat[0][j]){
                dfs(0,j,mat,vis);
            }
            if(mat[n-1][j]){
                dfs(n-1,j,mat,vis);
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&mat[i][j])
                cnt++;
            }
        }
        return cnt;
    }
};