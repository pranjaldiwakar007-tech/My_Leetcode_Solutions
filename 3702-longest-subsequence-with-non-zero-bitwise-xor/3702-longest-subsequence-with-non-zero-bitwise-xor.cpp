class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        bool iszero=false;
        for(auto &it:nums){
            x^=it;
            if(x!=0) iszero=true;
        }
        if(x!=0) return nums.size();
        if(!iszero) return 0;
        return nums.size()-1;
    }
};