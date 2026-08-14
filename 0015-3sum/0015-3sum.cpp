class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0;
        vector<vector<int>>ans;
        for(;l<n-2;l++){
            int r=n-1;
            int mid=l+1;
            if(l>0 && nums[l-1]==nums[l]){
                continue;
            }
            while(l<r && mid<r && r<n){
                if(nums[l]+nums[r]+nums[mid]>0){
                    r--;
                }
                else if(nums[l]+nums[r]+nums[mid]<0){
                    mid++;
                }
                else{
                    ans.push_back({nums[l],nums[mid],nums[r]});
                    mid++;
                    r--;
                    while(mid<r && nums[mid-1]==nums[mid]) mid++;
                    while(mid<r && nums[r+1]==nums[r]) r--;
                }
            }
        }
        return ans;
    }
};