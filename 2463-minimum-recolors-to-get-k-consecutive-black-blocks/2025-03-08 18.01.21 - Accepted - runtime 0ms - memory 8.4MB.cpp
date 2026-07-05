class Solution {
public:
    int minimumRecolors(string nums, int k) {
        int cnt=0;
        for(int i=0;i<k;i++){
            if(nums[i]=='W'){
                cnt++;
            }
        }
        int mini=cnt;
        for(int i=k;i<nums.size();i++){
            if(nums[i]=='W')cnt++;
            if(nums[i-k]=='W')cnt--;
            mini=min(cnt,mini);
        }
        return mini;
    }
};