class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit=0,mini=nums[0];
        for(int i=1;i<nums.size();i++){
            profit=max(profit,nums[i]-mini);
            mini=min(mini,nums[i]);
        }
        return profit;
    }
};