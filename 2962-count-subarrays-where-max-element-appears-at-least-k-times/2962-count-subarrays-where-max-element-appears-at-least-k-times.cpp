class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        vector<int>ind;
        long long res=0;
        int mx=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mx) ind.push_back(i);
            int size=ind.size();
            if(size>=k){
            int last_i=ind[size-k];
            res+=last_i+1;
            }
        }
        return res;
    }
};