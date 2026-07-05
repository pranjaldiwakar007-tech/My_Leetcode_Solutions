class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int maxi=-1e8,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=maxi||cnt==0){
                cnt++;
                maxi=nums[i];
            }
        }
        return cnt;
    }
};