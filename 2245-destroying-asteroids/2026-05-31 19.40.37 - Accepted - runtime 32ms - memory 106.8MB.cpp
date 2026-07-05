class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& nums) {
        double ans=mass;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=ans) ans+=nums[i];
            else return false;
        }
        return true;
    }
};