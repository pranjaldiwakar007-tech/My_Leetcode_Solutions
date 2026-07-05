class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cnt=0;
                int sum=0,maxi=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0) cnt++;
        }
        int x;
        x=*max_element(nums.begin(),nums.end());
        if(cnt==0)
        return x;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<0) sum=0;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};