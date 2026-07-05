class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0,idx=0;
        for (int n:nums) {
            if (n==0) c0++;
            else if(n==1) c1++;
            else c2++;
        }
        while(c0--) nums[idx++]=0;
        while(c1--) nums[idx++]=1;
        while(c2--) nums[idx++]=2;
    }
};