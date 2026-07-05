class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int prev=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            prev+=(nums[i]*i);
        }
        int res=prev;
        for(int i=1;i<n;i++){
            int cur=prev+sum-n*nums[n-i];
            res=max(res,cur);
            prev=cur;
        }
        return res;
    }
};