class Solution {
public:
    int solve(vector<int>& nums, int l, int r){
        int suml=0,sumr=0,maxl=0,res=0;
        int n=nums.size();
        for(int i=0;i<l;i++) suml+=nums[i];
        for(int i=l;i<l+r;i++) sumr+=nums[i];
        res=suml+sumr;
        maxl=suml;
        for(int i=l+r;i<n;i++){
            suml+=nums[i-r]-nums[i-r-l];
            sumr+=nums[i]-nums[i-r];
            maxl=max(maxl,suml);
            res=max(res,maxl+sumr);
        }
    return res;
    }
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        return max(solve(nums,firstLen,secondLen),solve(nums,secondLen,firstLen));
    }
};