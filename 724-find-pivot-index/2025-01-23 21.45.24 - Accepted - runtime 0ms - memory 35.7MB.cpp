class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l=0,r,tot;
        tot=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
            r=tot-l-nums[i];
            if(l==r) return i;
         l+=nums[i];
       }
       return -1;
    }
};