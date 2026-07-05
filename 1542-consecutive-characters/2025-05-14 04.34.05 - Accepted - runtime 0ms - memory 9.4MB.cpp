class Solution {
public:
    int maxPower(string nums) {
       int maxi=1,cnt=1;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==nums[i+1]){
            cnt++;
            maxi=max(maxi,cnt);
           }
           else cnt=1;
        }
        return maxi;
    }
};