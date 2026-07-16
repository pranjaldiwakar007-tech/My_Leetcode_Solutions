class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0,r=0;
        int maxi=1;
        long long sum=0;
        for(;r<nums.size();r++){
            sum+=nums[r];
            // int diff=1LL*(r-l+1)*nums[r]-sum;
            while(1LL*(r-l+1)*nums[r]-sum>k){
                sum-=nums[l];
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};