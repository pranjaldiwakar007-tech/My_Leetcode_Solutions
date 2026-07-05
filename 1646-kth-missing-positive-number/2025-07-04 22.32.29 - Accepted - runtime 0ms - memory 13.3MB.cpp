class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        // vector<int>temp;
        // for(int i=0;i<nums.size();i++){
        //     temp.push_back(nums[i]-(i+1));
        // }
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int missing=nums[mid]-(mid+1);
            if(missing<k)low=mid+1;
            else high=mid-1;
        }
        return k+high+1;
    }
};