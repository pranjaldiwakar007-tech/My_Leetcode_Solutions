class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto it:nums){
            if (mpp.count(it) != 0) return true;
            mpp[it] = 1;
        }
        return false;
    }
};