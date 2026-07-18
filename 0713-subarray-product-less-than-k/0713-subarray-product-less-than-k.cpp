class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int mul=1,cnt=0;
        int l=0,r=0;
        for(;r<nums.size();r++){
            mul*=nums[r];
            while(mul>k){
                mul/=nums[l];
                l++;
            }
            if(mul<k) cnt+=(r-l+1);
        }
        return cnt;
    }
};