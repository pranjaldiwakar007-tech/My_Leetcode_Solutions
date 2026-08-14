class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int  i=0;i<n;i++){
            // int u1=nums[i][0];
            // // int v1=nums[i][1];
            // if(i+1<n) int u2=nums[i+1][0];
            // it(i+1<n) int v2=nums[i+1][1];
            if(ans.empty()|| nums[i][0]>ans.back()[1]) 
            ans.push_back(nums[i]);
            else{
                ans.back()[1]=max(ans.back()[1],nums[i][1]);
            }
        }
        return ans;
    }
};