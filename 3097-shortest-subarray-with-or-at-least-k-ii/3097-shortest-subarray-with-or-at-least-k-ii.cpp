class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int l=0,r=0;
        int curOr=0;
        int mini=1e9;
        vector<int>bits(32,0);
        int n=nums.size();
        for(;r<n;r++){
            for(int b=0;b<32;b++){
            if(nums[r] & (1<<b)){
                    bits[b]++;
                    curOr|=(1<<b);
                }
            }
            while(l<=r && curOr>=k){
                mini=min(mini,r-l+1);
                for(int b=0;b<32;b++){
                if(nums[l] & (1<<b)){
                    bits[b]--;
                    if(bits[b]==0) curOr &= ~(1<<b);
                    }
                }
                l++;
            }
        }
        return mini==1e9?-1:mini;
    }
};