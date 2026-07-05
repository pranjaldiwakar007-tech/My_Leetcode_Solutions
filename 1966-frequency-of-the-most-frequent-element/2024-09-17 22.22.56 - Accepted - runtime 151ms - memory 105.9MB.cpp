class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    long long  ans=0;
    long long r=0,l=0,n=nums.size(),total=0;
    while(r<n)
    {
        total+=nums[r];
        while((1ll)*nums[r]*(r-l+1)-total>k)
        {
            total-=nums[l];
            l++; 
        }
        ans=max(ans,r-l+1);
        r++;
    }
    return ans;      
}
};