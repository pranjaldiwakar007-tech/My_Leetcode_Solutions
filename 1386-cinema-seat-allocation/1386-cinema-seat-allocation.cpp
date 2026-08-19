class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& nums) {
        int ans=2*n;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
        int row=nums[i][0];
        int flag25=1,flag47=1,flag69=1;
        while(i<nums.size() && row==nums[i][0]){
            if(nums[i][1]>=2 && nums[i][1]<=5){
                flag25=0;
                if(nums[i][1]>=4 && nums[i][1]<=5){
                    flag47=0;
                }
            }
            else if(nums[i][1]>=6 && nums[i][1]<=9){
                flag69=0;
                if(nums[i][1]>=6 && nums[i][1]<=7){
                    flag47=0;
                }
            }
            i++;
        }
        if(flag25==0 && flag47==0 && flag69==0) ans-=2;
        else if(flag25==0 || flag47==0 || flag69==0) ans--;
        i--;
        }
        return ans;
    }
};