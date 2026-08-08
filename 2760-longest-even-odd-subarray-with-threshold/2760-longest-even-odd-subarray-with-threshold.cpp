class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size();
        int cur=1;
        int cnt=0;
        if(n==0) return n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && cnt==0 && nums[i]<=threshold)
            cnt=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<=threshold && nums[j]<=threshold && 
                nums[i]%2==0 && nums[j] % 2 != nums[j-1] % 2){
                    cur++;
                    cnt=max(cnt,cur);
                }
                else break;
            }
            cur=1;
        }
        return cnt;
    }
};