class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,maxi=0;
        for(int r=0;r<n;r++){
            while(l<=r && (long long)nums[l]*k<nums[r]) l++;
            maxi=max(maxi,r-l+1);
        }
        return nums.size()-maxi;
    }
};