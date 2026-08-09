class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l=0,r=0,cnt=0;
        unordered_map<int,int>mpp;
        for(;r<nums.size();r++){
            mpp[nums[r]]++;
            while(l<r && mpp[nums[r]]>k){
                mpp[nums[l]]--;
                l++;
            }
            cnt=max(cnt,r-l+1);

        }
        return cnt;
    }
};