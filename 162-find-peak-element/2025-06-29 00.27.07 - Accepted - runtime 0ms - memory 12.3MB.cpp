class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        if(n==1) return 0;
         while(low<high){
            int mid=low+(high-low)/2;
            // if(nums[mid]>=nums[mid-1] && nums[mid]>=nums[mid+1]){
            //     return mid;
            // }
            if(nums[mid]>nums[mid+1]){
             high=mid;
            }
            else{
                low=mid+1;
            }
         }
         return low;
    }
};