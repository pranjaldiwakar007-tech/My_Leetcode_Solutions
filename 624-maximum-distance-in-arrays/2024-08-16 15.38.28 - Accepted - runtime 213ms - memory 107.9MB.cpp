class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxD = 0;
        int mini = arrays[0][0];
        int maxi = arrays[0].back();
        for(int i = 1; i < arrays.size(); i++)
          {
            auto& it = arrays[i];
            int disMin = abs(it[0] - maxi);
            int disMax = abs(it.back() - mini);
            maxD = max({maxD, disMin, disMax});
            mini = min(mini, it[0]);
            maxi = max(maxi, it.back());
        }
        return maxD;
    }
};