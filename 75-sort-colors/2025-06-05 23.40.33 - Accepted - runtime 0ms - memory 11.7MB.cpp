class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0=0,cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) cnt0++;if(nums[i]==1) cnt1++;if(nums[i]==2) cnt2++;
        }
        int x=0;
        while(cnt0--){
            nums[x++]=0;
        }
        while(cnt1--){
            nums[x++]=1;
        }
          while(cnt2--){
            nums[x++]=2;
        }      
    }
};