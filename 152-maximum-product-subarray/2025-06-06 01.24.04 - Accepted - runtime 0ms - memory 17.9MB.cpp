class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int maxi=-1e8,sum=1;
        for(int i=0;i<nums.size();i++){
            sum*=nums[i];
            maxi=max(maxi,sum);
            if(nums[i]==0)sum=1;
        }
        sum=1;
        for(int i=nums.size()-1;i>0;i--){
            sum*=nums[i];
            maxi=max(maxi,sum);
            if(nums[i]==0)sum=1;
        }
        return maxi;
    }
};