class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[x]=nums[i];
                x++;
            }
        }
        for(int i=x;i<nums.size();i++){
            nums[i]=0;
        }
        return nums;
    }
};