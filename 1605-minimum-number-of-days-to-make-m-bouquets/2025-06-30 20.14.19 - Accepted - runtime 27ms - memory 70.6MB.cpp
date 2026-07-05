class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size();
         int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
    int low=mini,high=maxi,ans=-1;
while(low<=high){
    int mid=(low+(high-low)/2);
    int cnt=0,x=0;
    for (int i=0;i<n;i++){
        if(nums[i]<=mid)
            cnt++;
         else{
            x+=cnt/k;
            cnt=0;
        }
    }
    x+=cnt/k;
    if(x>=m){
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