class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int layers = min(m, n) / 2;
        for (int layer = 0; layer < layers; layer++) {
            vector<int> arr;
            int top = layer;
            int bottom = m - layer - 1;
            int left = layer;
            int right = n - layer - 1;
            for (int j = left; j <= right; j++)
                arr.push_back(grid[top][j]);
            for (int i = top + 1; i <= bottom - 1; i++)
                arr.push_back(grid[i][right]);
            for (int j = right; j >= left; j--)
                arr.push_back(grid[bottom][j]);
            for (int i = bottom - 1; i >= top + 1; i--)
                arr.push_back(grid[i][left]);
            int sz = arr.size();
           int rot=k%sz;
            vector<int> temp(sz);
            for (int i = 0; i < sz; i++) {
                temp[i] = arr[(i + rot) % sz];
            }
            arr = temp;
            int cnt = 0;
            for (int j = left; j <= right; j++)
                grid[top][j] = arr[cnt++];
            for (int i = top + 1; i <= bottom - 1; i++)
                grid[i][right] = arr[cnt++];
            for (int j = right; j >= left; j--)
                grid[bottom][j] = arr[cnt++];
            for (int i = bottom - 1; i >= top + 1; i--)
                grid[i][left] = arr[cnt++];
        }
        return grid;
    }
};