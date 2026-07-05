class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0) k++;
            else if(k>0){
                int temp=nums[i];
                nums[i]=0;
                nums[i-k]=temp;
            }
        }
    }
};