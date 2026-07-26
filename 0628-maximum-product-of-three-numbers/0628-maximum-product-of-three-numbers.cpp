class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)cnt++;
        }
        if(cnt<2)
        return (long long)nums[0]*(long long)nums[1]*(long long)nums[2];
        else{
            if((long long)nums[n-1]*(long long)nums[n-2]*(long long)nums[0]>
            (long long)nums[0]*(long long)nums[1]*(long long)nums[2])
            return 
            (long long)nums[n-1]*(long long)nums[n-2]*(long long)nums[0];
        }
        return (long long)nums[0]*(long long)nums[1]*(long long)nums[2];
    }
};