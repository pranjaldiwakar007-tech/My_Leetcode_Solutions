class Solution {
public:        
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int l=0,r=0;
        int sum=0,cnt=0;
        int cntz=0;
        for(;r<nums.size();r++){
            sum+=nums[r];
            while(l<r && (nums[l]==0 ||sum>goal)){
                if(nums[l]==0) cntz++;
                else cntz=0;
                sum-=nums[l];
                l++;
            }
            if(sum==goal)
            cnt+=1+cntz;

        }
        return cnt;
    }
};