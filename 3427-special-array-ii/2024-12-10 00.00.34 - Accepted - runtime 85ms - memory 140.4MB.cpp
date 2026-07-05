class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) 
    {
        int n = nums.size();
        set<int> store;
        for(int i = 1; i < n; i++)
        if((nums[i] % 2) == nums[i - 1] % 2)
        store.insert(i);
        vector<bool> ans;
        for(auto q: queries)
        {
            int left = q[0], right = q[1];
            auto it = store.upper_bound(left);
            ans.push_back((*it <= right and it != store.end()) ? 0 : 1);
        }
        return ans;
    }
};