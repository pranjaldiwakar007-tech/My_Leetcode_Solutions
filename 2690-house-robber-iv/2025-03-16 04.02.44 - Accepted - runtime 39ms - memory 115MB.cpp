class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        int ans=high;
        while(low<=high){
        int mid=(low+high)/2;
            if(can(nums,mid,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    bool can(vector<int> nums,int mid,int k){
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=mid){
                cnt++;
                i++;
            }
        }
        return cnt>=k;
    }
};