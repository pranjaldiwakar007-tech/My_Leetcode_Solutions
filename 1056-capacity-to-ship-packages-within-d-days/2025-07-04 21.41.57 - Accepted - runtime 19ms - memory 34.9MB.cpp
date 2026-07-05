class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int mini=*max_element(nums.begin(),nums.end());
        int s=accumulate(nums.begin(),nums.end(),0LL);
        int low=mini,high=s;
        while(low<=high){
            int mid=low+(high-low)/2;
            int ans=f(mid,days,nums);
        if(ans<=days) high=mid-1;
        else low=mid+1;
        }
        return low;
    }
    int f(int mid,int days,vector<int>&nums){
            int day=1;
            int load=0;
        for(int i=0;i<nums.size();i++){
            if(load+nums[i]>mid){
                  day++;
                  load=nums[i];
            }
            else load+=nums[i];
        }
        return day;
    }
};