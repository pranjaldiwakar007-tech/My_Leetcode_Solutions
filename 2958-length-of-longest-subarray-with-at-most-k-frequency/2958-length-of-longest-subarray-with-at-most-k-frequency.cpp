class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int l=0,r=0,maxi=0;
        int n=nums.size();
        for(;r<n;r++){
            mpp[nums[r]]++;
            while(mpp[nums[r]]>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};