class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        if(nums.size()==1) return {0};
        vector<int>ans(nums.size());
        int sum1=accumulate(nums.begin(),nums.end(),0LL);
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            ans[i]=abs(sum2-abs(sum1-nums[i]));
            sum2+=nums[i];
            sum1-=nums[i];
        }
        return ans;
    }
};