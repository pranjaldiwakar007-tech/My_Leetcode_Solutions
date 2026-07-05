class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0;
        int r=grid.size(),c=grid[0].size();
        map<vector<int>,int> mpp;
        for(int i=0;i<r;i++){
             mpp[grid[i]]++;
        }
       for(int j=0;j<c;j++){
        vector<int> n;
        for(int i=0;i<r;i++){
            n.push_back(grid[i][j]);
        }
        ans+=mpp[n];
       }
    return ans;
    }
};