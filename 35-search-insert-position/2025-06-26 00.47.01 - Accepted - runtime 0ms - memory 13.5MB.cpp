class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return bs(nums,0,nums.size()-1,target,nums.size());
    }
    int bs(vector<int>&nums,int low,int high,int target,int ans){
        if(low>high)return ans;
        int mid=low+(high-low)/2;
         if(nums[mid]>=target){
            return bs(nums,low,mid-1,target,mid);
         }
         else{
            return bs(nums,mid+1,high,target,ans);
         }
    }
};