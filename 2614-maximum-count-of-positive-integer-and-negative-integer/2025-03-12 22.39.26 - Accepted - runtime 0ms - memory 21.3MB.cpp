class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)cnt1++;
            if(nums[i]>0)cnt2++;
        }
        return max(cnt1,cnt2);
    }
};