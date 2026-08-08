class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int l=0,r=0;
        int ans=0;
        int n=nums.size();
        for(;r<n;r++){
            if(nums[r]>threshold){
                l=r+1;
                continue;
            }
            if(r==l && nums[r]%2!=0){
                l=r+1;
            }
            else if(r>0 && nums[r]%2==nums[r-1]%2){
                l=r;
                if(nums[r]%2!=0) l=r+1;
            }
            if(l<=r) ans=max(ans,r-l+1);
        }
        return ans;
    }
};