class Solution {
public:
    int minElement(vector<int>& nums) {
        int res=36;
        for(int i=0;i<nums.size();i++){
            res = min(res,nums[i]-9*((nums[i]/10)+(nums[i]/100)+(nums[i]/1000)+
            nums[i]/10000));
        }
        return res;
    }
};