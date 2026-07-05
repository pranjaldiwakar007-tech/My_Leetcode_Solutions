int mod=998244353;
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
     int n=nums.size();
     int sum=0;
     for(int i=0;i<n;i++){
       sum|=nums[i];
     }
     int x=sum*(1<<(n-1));
    return x%mod;
  }
};