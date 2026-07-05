class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<vector<int>> ans(n, vector<int>(m, 0));
        queue<pair<pair<int,int>,int>>q;
     for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j]==0){
                q.push({{i,j},0});
                vis[i][j]=1;
            }
        }
     }
       while(!q.empty()){
        int f=q.front().first.first;
        int s=q.front().first.second;
        int dis=q.front().second;
        q.pop();
        ans[f][s]=dis;
        int r[4]={-1,0,1,0};
        int c[4]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int row=r[i]+f;
            int col=c[i]+s;
           if(row>=0&& row<mat.size()&&col>=0&&col<mat[0].size()&&!vis[row][col]){
            vis[row][col]=1;
            // dis++;
            q.push({{row,col},dis+1});
            // ans[row][col]=dis+1;
           }
        }
       }
       return ans;
    }
};