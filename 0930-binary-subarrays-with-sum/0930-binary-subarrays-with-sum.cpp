class Solution {
public:
    int atMost(vector<int>&nums,int goal){
        if(goal<0) return 0;
        int l=0,r=0;
        int sum=0,cnt=0;
        for(;r<nums.size();r++){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            // if(sum==goal) cnt++;
            cnt+=(r-l+1);
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=atMost(nums,goal)-atMost(nums,goal-1);
        return ans;
    }
};