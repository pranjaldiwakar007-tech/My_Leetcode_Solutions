class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n=nums.size(),maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(abs(nums[i]-nums[j])<=min(nums[i],nums[j])){
                int x=nums[i]^nums[j];
                maxi=max(maxi,x);
                }
            }
        }
        return maxi;
    }
};