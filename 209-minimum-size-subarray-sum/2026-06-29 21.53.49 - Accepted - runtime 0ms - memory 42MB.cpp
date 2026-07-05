class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int x=accumulate(nums.begin(),nums.end(),0LL);
        int sum=0;
        int minL=nums.size();
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target){
                minL=min(minL,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(target>x) return 0;
        else return minL;
    }
};