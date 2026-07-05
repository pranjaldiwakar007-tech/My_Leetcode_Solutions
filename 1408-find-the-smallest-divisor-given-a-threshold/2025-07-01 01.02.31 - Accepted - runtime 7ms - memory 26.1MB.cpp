class Solution {
public:
    int smallestDivisor(vector<int>& nums, int h) {
         int maxi=*max_element(nums.begin(),nums.end());
        int low=1,high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long ans=f(mid,nums);
            if(ans<=h) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
    long long f(int mid,vector<int>&nums){
        long long tot=0;
        for(int i=0;i<nums.size();i++){
            tot+=ceil((double)nums[i]/mid);
        }
        return tot;
    }
};