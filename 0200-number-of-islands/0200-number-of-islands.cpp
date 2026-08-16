class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int dr[4]={-1,0,1,0};
        int dc[4]={0,1,0,-1};
        queue<pair<int,pair<int,int>>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]){
                if(grid[i][j]=='1'){
                    cnt++;
                    vis[i][j]=1;
                    q.push({i,{j,0}});
                    while(!q.empty()){
                        int r=q.front().first;
                        int c=q.front().second.first;
                        int cnt=q.front().second.second;
                        q.pop();
                        // if(grid[n-1][m-1]) return cnt;
                        for(int i=0;i<4;i++){
                            int row=r+dr[i];
                            int col=c+dc[i];
                            if(row>=0 && row<n && col>=0 && col<m
                            && !vis[row][col] && grid[row][col]=='1'){
                                vis[row][col]=1;
                                q.push({row,{col,cnt+1}});
                            }
                        }
                    }
                }
            }
        }
    }
    return cnt;
    }
};