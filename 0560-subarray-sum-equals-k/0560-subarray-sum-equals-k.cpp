class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        int n=nums.size();
        int cnt=0;
        vector<int>pref(n,0);
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
         }
         mpp[0]=1;
        for(int i=0;i<n;i++){
            // pref[i]=pref[i-1]+nums[i];
            if(mpp.find(pref[i]-k)!=mpp.end()){
                cnt+=mpp[pref[i]-k];
            }
            mpp[pref[i]]++;
        }
        return cnt;
    }
};