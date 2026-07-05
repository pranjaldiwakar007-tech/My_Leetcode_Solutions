class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>indices;
        int cnt=0;
        for(int i=0;i<nums.size();i++) {
            for(int j:indices[nums[i]]) {
                if((i*j)%k==0)
                    cnt++;
            }
            indices[nums[i]].push_back(i);
        }
        return cnt;
    }
};
