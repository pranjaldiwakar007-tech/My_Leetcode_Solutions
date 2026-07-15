typedef pair<int,pair<int,int>> pi;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int dr[2]={1,0};
        int dc[2]={0,1};
        vector<vector<int>>dis(n,vector<int>(m,1e9));
        dis[0][0]=grid[0][0];
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        pq.push({dis[0][0],{0,0}});
        while(!pq.empty()){
            int val=pq.top().first;
            int r=pq.top().second.first;
            int c=pq.top().second.second;
            pq.pop();
            if(r==n-1 && c==m-1) return dis[r][c];
            for(int i=0;i<2;i++){
                int row=r+dr[i];
                int col=c+dc[i];
                if(row>=0 && row<n && col>=0 && col<m){
                    int path=val+grid[row][col];
                    if(path<dis[row][col]){
                        dis[row][col]=path;
                        pq.push({dis[row][col],{row,col}});
                    }
                }
            }
        }
        return 0;
    }
};