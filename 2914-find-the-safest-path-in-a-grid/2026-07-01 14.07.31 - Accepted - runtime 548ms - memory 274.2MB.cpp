class Solution {
public:
// checking part
    bool canReach(int safe,vector<vector<int>>&grid,int n,vector<vector<int>> &dis){
        // int n=grid.size();
     vector<vector<int>> vis(n,vector<int>(n,0));
        int dr[4]={-1,0,1,0};
        queue<pair<int,int>>q;
        int dc[4]={0,-1,0,1};
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(grid[i][j]==1) {vis[i][j]=1;
        //         q.push({i,j});} 
        //     }
        // }
        q.push({0,0});
        vis[0][0]=1;
        if(dis[0][0]<safe) return false;
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            if(r==n-1 && c==n-1) return true;
            for(int i=0;i<4;i++){
                int row=dr[i]+r;
                int col=dc[i]+c;
                if(row>=0 && row<n && col>=0 && col<n && dis[row][col]>=safe && !vis[row][col]){
                    vis[row][col]=1;
                    // dis[row][col]=1+dis[r][c];
                    q.push({row,col});
                }
            }
        }
        return false;
    }
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> dis(n,vector<int>(n,INT_MAX));
        int dr[4]={-1,0,1,0};
        queue<pair<int,int>>q;
        int dc[4]={0,-1,0,1};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) {dis[i][j]=0;
                q.push({i,j});} 
            }
        }
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int row=dr[i]+r;
                int col=dc[i]+c;
                if(row>=0 && row<n && col>=0 && col<n && dis[row][col]==INT_MAX){
                    dis[row][col]=1+dis[r][c];
                    q.push({row,col});
                }
            }
        }

        // now the search part
        int low=0;
        int high=2*n;
        int ans=0;
        while(low<=high){
            int mid=high+(low-high)/2;
            if(canReach(mid,grid,n,dis)){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};