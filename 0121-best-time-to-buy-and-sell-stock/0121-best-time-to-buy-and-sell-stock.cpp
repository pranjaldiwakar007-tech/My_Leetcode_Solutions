class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int l=0,r=1;
        for(;r<n;r++){
            if(nums[l]<=nums[r]){
                maxi=max(maxi,nums[r]-nums[l]);
            }
            else{
                l=r;
            }
        }
        return maxi;
    }
};