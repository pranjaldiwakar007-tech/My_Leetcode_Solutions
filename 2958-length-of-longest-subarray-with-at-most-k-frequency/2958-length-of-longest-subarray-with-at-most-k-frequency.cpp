class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l=0,r=0,cnt=0,cul=0;
        unordered_map<int,int>mpp;
        for(;r<nums.size();r++){
            mpp[nums[r]]++;
            // while(l<r && mpp[nums[r]]>k){
            //     mpp[nums[l]]--;
            //     l++;
            // }
            if(l<r && mpp[nums[r]]==k+1){
                cul++;
            }
                if(cul>0){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==k) cul--;
                l++;
            }
            if(cul==0) cnt=max(cnt,r-l+1);

        }
        return cnt;
    }
};