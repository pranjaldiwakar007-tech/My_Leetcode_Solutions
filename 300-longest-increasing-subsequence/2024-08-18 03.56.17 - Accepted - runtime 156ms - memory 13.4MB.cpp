class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> front(n+1,0),cur(n+1,0);
        for(int ind=n-1;ind>=0;ind--){
            for(int prev=ind-1;prev>=-1;prev--){
               int len=front[prev+1];
               if(prev==-1 || nums[ind]>nums[prev]) 
               len=max(len,1+front[ind+1]);
                cur[prev+1]=len;
            }
            front=cur;
        }
        return front[0];
    }
};