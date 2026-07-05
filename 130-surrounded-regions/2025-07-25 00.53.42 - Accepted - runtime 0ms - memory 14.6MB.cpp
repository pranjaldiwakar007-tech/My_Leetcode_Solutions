class Solution {
public:
    void dfs(int ro,int co,vector<vector<char>>& mat,vector<vector<int>>&vis){
        int n=mat.size();
        int m=mat[0].size();
        vis[ro][co]=1;
        int r[4]={-1,0,1,0};
        int c[4]={0,-1,0,1};
        for(int i=0;i<4;i++){
        int row=r[i]+ro;
        int col=c[i]+co;
        if(row>=0&&row<n&&col>=0&&col<m&&!vis[row][col]&&mat[row][col]=='O'){
            vis[row][col]=1;
            dfs(row,col,mat,vis);
        }
        }
    }
    void solve(vector<vector<char>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(mat[i][0]=='O'){
                dfs(i,0,mat,vis);
            }
            if(mat[i][m-1]=='O'){
                 dfs(i,m-1,mat,vis);
            }
        }
        for(int j=0;j<m;j++){
            if(mat[0][j]=='O'){
                dfs(0,j,mat,vis);
            }
            if(mat[n-1][j]=='O'){
                 dfs(n-1,j,mat,vis);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0&&mat[i][j]=='O')
                mat[i][j]='X';
            }
        }
    }
};