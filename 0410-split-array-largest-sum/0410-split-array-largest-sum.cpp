class Solution {
public:
    bool solve(vector<int>& nums, int k,int mid){
        int cnt=1,sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]>mid){
                cnt++;
                sum=nums[i];
            }
            else sum+=nums[i];
        }
        if(cnt<=k) return true;
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0LL);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(solve(nums,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};