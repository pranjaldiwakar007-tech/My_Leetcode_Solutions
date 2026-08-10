class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int mini=1e9;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,r=0;
        for(;r<n;r++){
            if(r-l+1==k){
                int val=abs(nums[r]-nums[l]);
                mini=min(mini,val);
                l++;
            }
        }
        return mini;
    }
};