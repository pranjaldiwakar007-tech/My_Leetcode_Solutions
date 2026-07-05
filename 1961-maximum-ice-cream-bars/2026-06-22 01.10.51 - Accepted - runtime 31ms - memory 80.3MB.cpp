class Solution {
public:
    int maxIceCream(vector<int>& nums, int coins) {
        int cnt=0,sum=0;
        int a=accumulate(nums.begin(),nums.end(),0LL);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=coins){
                cnt++;
                sum+=nums[i];
            }
        }
        return cnt;
    }
};