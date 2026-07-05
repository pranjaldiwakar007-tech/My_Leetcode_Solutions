class Solution {
public:
     bool sorted(vector<int>nums){
        vector<int>nn=nums;
        sort(nn.begin(),nn.end());
        return nn==nums;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;
        while (!sorted(nums)){
            int minSum = INT_MAX;
            int idx = -1;
            for (int i = 0; i < nums.size() - 1; ++i) {
                int sum = nums[i] + nums[i + 1];
                if (sum < minSum) {
                    minSum = sum;
                    idx = i; 
                }
            }
            nums[idx] = nums[idx] + nums[idx + 1];
            nums.erase(nums.begin() + idx + 1);
            count++;
        }
        return count;
    }
};
