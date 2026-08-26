class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end(),[](const vector<int>&p1,vector<int>&p2){
            return (p1[0]-p1[1]<p2[0]-p2[1]);
        });
        int tot=0;
        int n=nums.size()/2;
        for(int i=0;i<n;i++){
            tot+=nums[i][0];
            tot+=nums[i+n][1];
        }
        return tot;
    }
};