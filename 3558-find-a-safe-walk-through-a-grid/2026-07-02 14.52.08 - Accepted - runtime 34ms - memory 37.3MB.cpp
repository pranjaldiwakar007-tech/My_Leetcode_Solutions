class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        if(health-grid[0][0]<=0) return false;
        int n=grid.size();
        int m=grid[0].size();
        int dr[4]={-1,0,1,0};
        int dc[4]={0,-1,0,1};
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>best(n,vector<int>(m,-1));
        q.push({{0,0},health-grid[0][0]});
        best[0][0]=health-grid[0][0];
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int curHealth=q.front().second;
            if(r==n-1 && c==m-1) return true;
            q.pop();
            for(int i=0;i<4;i++){
                int row=r+dr[i];
                int col=c+dc[i];
                if(row>=0 && row<n && col>=0 && col<m){
                    int newHealth=curHealth-grid[row][col];
                    if(newHealth<=0) continue;
                    if(newHealth>best[row][col]){
                        best[row][col]=newHealth;
                        q.push({{row,col},newHealth});
                    }
                }
            }
        }
        return false;
    }
};