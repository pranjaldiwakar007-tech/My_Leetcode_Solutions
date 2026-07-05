class Solution {
public:
    int minDifference(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());

        int x = INT_MAX;

        int n = nums.size();

        if(n <= 4) return 0;

       x = min(x, nums[n-4] - nums[0]);
        x = min(x, nums[n-1] - nums[3]);
        x = min(x, nums[n-2] - nums[2]);
        x = min(x, nums[n-3] - nums[1]);

        return x;
    }
};