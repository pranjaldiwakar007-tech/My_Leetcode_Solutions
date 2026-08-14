class Solution {
public:
    int f(vector<int>& nums, int k,int mid){
        int sum=0;
        int cnt=1;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]>mid) {
                cnt++;
                sum=nums[i];
            }
            else{
                sum+=nums[i];
            }
        }
        // x+=sum/mid;
        return cnt;
    }
    int shipWithinDays(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0LL);
        while(low<=high){
            int mid=low+(high-low)/2;
            int val=f(nums,k,mid);
            if(val>k){
                low=mid+1;
            }
            else high=mid-1;
        }
        return high+1;
    }
};