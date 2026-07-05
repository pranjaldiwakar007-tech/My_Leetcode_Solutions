class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),left=1,right=1;
        vector<int> res(n,1);
        for(int i=0;i<n;i++){
           res[i]=res[i]*left;
           left=nums[i]*left;

        }
        for(int i=n-1;i>=0;i--){
        res[i]=res[i]*right;
        right=nums[i]*right;
        }
        return res;
    }
};