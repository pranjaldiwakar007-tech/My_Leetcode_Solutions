class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1=nums[0];
        int prev2=0;
        for(int i=0;i<nums.size();i++)
        {
            int picked=nums[i];
            if(i>1) picked+=prev2;
            int notpick=0+prev1;
        int curi=max(picked,notpick);
        prev2=prev1;
        prev1=curi;
        }
        return prev1;
    }
};