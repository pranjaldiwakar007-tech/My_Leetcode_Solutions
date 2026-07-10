class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0;
        int maxi=0;
        int cnt1=0,cnt0=0;
        int sum=accumulate(nums.begin(),nums.end(),0LL);
        if(sum==nums.size()) return sum-1;
        for(;r<nums.size();r++){
            if(nums[r]==0){
                cnt0++;
            }
            // cnt1++;
            // if(nums[r]==0 && nums[r-1]==0) {l=r;
            // cnt1=0;
            // }
            // if(cnt0==1 && nums[r]==0){
            //     continue;
            // }
            while(cnt0>1){
                if(nums[l]==0)
                cnt0--;
                l++;
            }
            maxi=max(maxi,r-l);
        }
        return maxi;
    }
};