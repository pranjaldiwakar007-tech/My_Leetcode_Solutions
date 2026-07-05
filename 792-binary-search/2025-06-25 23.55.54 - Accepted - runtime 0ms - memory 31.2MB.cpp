class Solution {
public:
    int search(vector<int>& nums, int target) {
     return solver(nums,0,nums.size()-1,target);
    }
    int solver(vector<int>&nums,int low,int high,int target){
        if(low>high) return -1;
        int mid=(low+high)/2;
        if(nums[mid]>target){
          return solver(nums,low,mid-1,target);
        }
        else if(nums[mid]<target){
           return solver(nums,mid+1,high,target);
        }
        else{
            return mid;
        }
    }
};