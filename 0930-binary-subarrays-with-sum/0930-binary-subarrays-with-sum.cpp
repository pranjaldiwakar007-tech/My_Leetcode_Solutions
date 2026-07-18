class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map<int,int>mpp;
        int sum=0,cnt=0;
        mpp[0]=1;
        for(auto &x:nums){
            sum+=x;
            if(mpp.find(sum-goal)!=mpp.end()){
                cnt+=mpp[sum-goal];
            }
            mpp[sum]++;
        }
        return cnt;
    }
};