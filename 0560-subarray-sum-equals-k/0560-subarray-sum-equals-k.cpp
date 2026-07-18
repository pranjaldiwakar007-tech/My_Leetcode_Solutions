class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,cnt=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        for(auto &x:nums){
            sum+=x;
            if(mpp.find(sum-k)!=mpp.end()){
                cnt+=mpp[sum-k];
            }
            mpp[sum]++;
        }
        return cnt;
    }
};