class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int add=0,n=nums.size(),x;
        int sum=(n*(n+1))/2;
        for(int i=0;i<nums.size();i++){
            add+=nums[i];
        }
        return sum-add;
    }
};