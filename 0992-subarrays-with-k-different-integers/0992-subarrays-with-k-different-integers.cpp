class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int l=0,r=0,l_bada=0,n=nums.size(),ans=0;
        unordered_map<int,int>mpp;
        for(;r<n;r++){
            mpp[nums[r]]++;
            if(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
                l_bada=l;
            }
            while(mpp[nums[l]]>1){
                mpp[nums[l]]--;
                l++;
            }
            if(mpp.size()==k) ans+=1+l-l_bada;
        }
        return ans;
    }
};