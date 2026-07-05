class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int req) {
 int low = INT_MAX, high = INT_MIN;
int n=matrix.size();
int m=matrix[0].size();
    for (int i = 0; i < n; i++) {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][m - 1]);
    }
    while (low <= high) {
        int mid = (low + high) / 2;
        int smallEqual = countSmallEqual(matrix, m, n, mid);
        if (smallEqual < req) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}
int upperBound(vector<int> &arr, int x, int n) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1; 
        }
    }
    return ans;
}
    int countSmallEqual(vector<vector<int>> &matrix, int m, int n, int x) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += upperBound(matrix[i], x, m);
    }
    return cnt;
}
};