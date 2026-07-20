class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        k%=(n*m);
        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                int newidx=r*m+c+k;
                int newrow=(newidx/m)%n;
                int newcol=(newidx)%m;
                ans[newrow][newcol]=grid[r][c];
            }
        }
        return ans;
    }
};