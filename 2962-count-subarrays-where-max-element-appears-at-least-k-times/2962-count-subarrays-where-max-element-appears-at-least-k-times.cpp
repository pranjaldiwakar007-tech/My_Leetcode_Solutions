class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int l=0,r=0;
        int mx=*max_element(nums.begin(),nums.end());
        // unordered_map<int,int>mpp;
        int cnt=0;
        long long ans=0;
        for(;r<nums.size();r++){
            if(nums[r]==mx){
                cnt++;
            }
            while(cnt>=k){
                if(nums[l]==mx) cnt--;
                l++;
            }
            ans+=l;
        }
        return ans;
    }
};