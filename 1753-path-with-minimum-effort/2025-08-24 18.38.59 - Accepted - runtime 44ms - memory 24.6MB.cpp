class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>>q;
        vector<vector<int>>dis(heights.size(),vector<int>(heights[0].size(),1e9));
        q.push({0,{0,0}});
        dis[0][0]=0;
        while(!q.empty()){
            int dif=q.top().first;
            int r=q.top().second.first;
            int c=q.top().second.second;
            if(r==heights.size()-1&&c==heights[0].size()-1) return dif;
            q.pop();
            int dr[4]={-1,0,1,0};
            int dc[4]={0,-1,0,1};
            for(int i=0;i<4;i++){
                int row=r+dr[i];
                int col=c+dc[i];
                if(row>=0&&row<heights.size()&&col>=0&&col<heights[0].size()){
                // dis[row][col]==1e9){
                    int new_dif=max(dif,abs(heights[row][col]-heights[r][c]));
                    if(new_dif<dis[row][col]){
                        dis[row][col]=new_dif;
                        q.push({dis[row][col],{row,col}});
                    }
                }
            }
        }
     return -1;
    }
};