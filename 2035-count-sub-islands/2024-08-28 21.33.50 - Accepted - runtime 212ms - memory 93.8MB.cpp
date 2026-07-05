// Jai Shree Ram
class Solution {
    void dfs(vector<vector<int>> & grid1, vector<vector<int>> & grid2, int r, int c, int n, int m, bool &b)
    {
        if(r >= 0 && r < n && c >= 0 && c < m && grid2[r][c])
        {
            grid2[r][c] = 0;
            dfs(grid1, grid2, r, c + 1, n, m, b);
            dfs(grid1, grid2, r, c - 1, n, m, b);
            dfs(grid1, grid2, r + 1, c, n, m, b);
            dfs(grid1, grid2, r - 1, c, n, m, b);
            if(grid1[r][c] == 0)
                b = false;
        }
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid1.size();
        int m =grid1[0].size();
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if( grid2[i][j] && grid1[i][j])
                {
                    bool b =true;
                    dfs(grid1, grid2, i, j, n, m, b);
                    if(b)count++;
                }
            }
        }
        return count;
    }
};