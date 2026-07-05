class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
       int i=0,j=0;
       int res=0;
        int mask=0;
       while(j<nums.size()){
        while((mask&nums[j])!=0){
            mask^=nums[i];
            i++;
            
        }
        res=max(res,j-i+1);
        mask|=nums[j];
        j++;
       }
       return res;
    }
};