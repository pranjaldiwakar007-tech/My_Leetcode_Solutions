class Solution {
public:
    int maximumLengthSubstring(string nums) {
        unordered_map<char,int>mpp;
        int maxi=0;
        int l=0,r=0;
        int n=nums.size();
        for(;r<n;r++){
            mpp[nums[r]]++;
            while(mpp[nums[r]]>2){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};