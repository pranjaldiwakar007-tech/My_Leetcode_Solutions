class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int n=nums.size();
        long long x=0;
        long long cnt=0;
        for(int i=0;i<n;i++){
            x^=nums[i];
            if(mpp.find(x)!=mpp.end()){
                cnt+=mpp[x];
            }
            mpp[x]++;
        }
        return cnt;
    }
};