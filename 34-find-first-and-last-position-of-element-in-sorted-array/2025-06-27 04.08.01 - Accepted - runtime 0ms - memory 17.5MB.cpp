class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        int down=0,up=nums.size()-1;
         while(down<=up){
            int mid=down+(up-down)/2;
            if(nums[mid]>target){
                up=mid-1;
            }
            else{
                down=mid+1;
            }
        }
        if(low<nums.size() && nums[low]==target) return {low,down-1};
        else return {-1,-1};
    }
};