class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>seen;
        int l=0,r=0,ans=0;
        int sum=0;
        for(;r<nums.size();r++){
            while(seen.find(nums[r])!=seen.end()){
                seen.erase(nums[l]);
                sum-=nums[l];
                l++;
            }
            sum+=nums[r];
            seen.insert(nums[r]);
            ans=max(ans,sum);
        }
        return ans;
    }
};