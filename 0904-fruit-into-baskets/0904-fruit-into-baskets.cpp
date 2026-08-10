class Solution {
public:
    int totalFruit(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        int l=0,r=0,n=nums.size(),maxi=0,cnt=0;
        for(;r<n;r++){
            mpp[nums[r]]++;
            while(mpp.size()>2){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            if(mpp.size()<=2) maxi=max(maxi,r-l+1);
        }
    return maxi;
    }
};