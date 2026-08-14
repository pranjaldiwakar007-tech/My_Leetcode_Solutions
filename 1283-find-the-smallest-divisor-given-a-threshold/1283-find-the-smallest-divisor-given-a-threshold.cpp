class Solution {
public:
    long long divider(vector<int>& nums, int k,int mid){
        long long cnt=0;
        for(int i=0;i<nums.size();i++){
            cnt+=(nums[i]+mid-1)/mid;
        }
        return cnt;
    }
    int smallestDivisor(vector<int>& nums, int k) {
        int high=*max_element(nums.begin(),nums.end());
        int low=1;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long val=divider(nums,k,mid);
            if(val>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};