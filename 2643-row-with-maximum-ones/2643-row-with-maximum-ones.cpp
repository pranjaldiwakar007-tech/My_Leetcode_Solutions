class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& nums) {
        int ind = 0, maxCnt = 0;
        int n = nums.size();
        int m = nums[0].size();

        for(int i = 0; i < n; i++) {
            int cnt = 0;

            for(int j = 0; j < m; j++) {
                if(nums[i][j] == 1)
                    cnt++;
            }

            if(cnt > maxCnt) {
                maxCnt = cnt;
                ind = i;
            }
        }
        return {ind, maxCnt};
    }
};