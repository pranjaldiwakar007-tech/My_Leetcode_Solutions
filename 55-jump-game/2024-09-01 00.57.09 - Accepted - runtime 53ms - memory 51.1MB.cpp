class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;;
        int maxInd=0;
        for(int i=0;i<nums.size();i++){
            if(maxInd<i) return false;
            maxInd=max(maxInd,nums[i]+i);
        }
        return maxInd;
    }
};