class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        long long pair=0,res=0,j=0,i=0;
        while(j<nums.size()){
            pair+=mpp[nums[j]];
            mpp[nums[j]]++;
            while(pair>=k) {
                res+=nums.size()-j;
                mpp[nums[i]]--;
                pair-=mpp[nums[i]];
                i++;
            }
            j++;
        }
        return res;
    }
};
