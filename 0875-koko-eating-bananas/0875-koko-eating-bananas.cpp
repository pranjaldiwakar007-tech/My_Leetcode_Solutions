class Solution {
public:
    int n;
    long long f(vector<int>& nums,int mid){
        long long tot=0;
        for(int i=0;i<n;i++){
            tot+=ceil((nums[i]+mid-1)/mid);
        }
        return tot;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
        n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        int low=1,high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long ans=f(nums,mid);
            if(ans<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};