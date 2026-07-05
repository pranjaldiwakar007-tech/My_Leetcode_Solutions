class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int l=0;l<nums.size();l++){
            if(l>0 && nums[l-1]==nums[l]) continue;
            int mid=l+1,r=nums.size()-1;
        while(l<r &&mid<r &&l<mid){
            if(nums[l]+nums[mid]+nums[r]<0){
                mid++;
            }
            else if(nums[l]+nums[mid]+nums[r]>0){
                r--;
            }
            else {
                ans.push_back({nums[l],nums[mid],nums[r]});
                mid++;
                r--;
                while(mid<r&&nums[mid-1]==nums[mid]) mid++;
                while(mid<r&&nums[r+1]==nums[r]) r--;
            }
        }
        }
        return ans;
    }
};