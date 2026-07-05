class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>st;
        int l=0,r=0;
        for(;r<nums.size();r++){
            if(st.find(nums[r])!=st.end()) return true;
            st.insert(nums[r]);
            if(r-l+1>k){
                st.erase(nums[l]);
                l++;
            }
        }
        return false;
    }
};