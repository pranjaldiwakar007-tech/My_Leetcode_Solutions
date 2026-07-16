class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxi=1;
        vector<long long >pref(n+1,0);
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+nums[i];
        }
        for(int i=n-1;i>=0;i--){
            int target=nums[i];
            int l=0,r=i;
            while(l<=r){
                int mid=l+(r-l)/2;
                long long curSum=pref[i+1]-pref[mid];
                int idx=i-mid+1;
                long long val=1LL*idx*target;
                if(val-curSum<=k){
                    maxi=max(maxi,idx);
                    r=mid-1;
                }
                else l=mid+1;
            }
        }
        return maxi;
    }
};