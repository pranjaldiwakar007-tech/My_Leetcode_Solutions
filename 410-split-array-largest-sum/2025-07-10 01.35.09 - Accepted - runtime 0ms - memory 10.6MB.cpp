class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
         if(m>nums.size())return -1;
        int ans=-1;
        int maxi=*max_element(nums.begin(),nums.end());
        int sum=accumulate(nums.begin(),nums.end(),0LL);
      int low=maxi,high=sum;
      while(low<=high){
        int mid=low+(high-low)/2;
            int c=checker(nums,mid,m);
            if(c<=m){
                ans=mid;
                high=mid-1;
                }
            else low=mid+1;
        }
        return ans;
    }
     int checker(vector<int>&nums,int mid,int m){
        int s=0,cnt=1,maxi=-1e9;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mid)return m+1;
            if(s+nums[i]>mid){
                cnt++;
                s=nums[i];
                // maxi=max(maxi,s);
                // s=0;
            }
            else s+=nums[i];
        }
        return cnt;
    }
};