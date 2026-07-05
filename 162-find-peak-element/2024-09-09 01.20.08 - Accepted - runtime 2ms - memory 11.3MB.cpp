class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int x=nums[0],ind=0;
        for(int i=1;i<n;i++){
            if(x<nums[i]){
                x=nums[i];
                ind=i;
            }
        }
        return ind;
    }
};