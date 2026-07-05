class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>>temp;
        int n=nums.size();
         sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
           int st=nums[i][0];
           int end=nums[i][1];
           if(!temp.empty() && end<=temp.back()[1]) continue;
           int j=i+1;
           for(;j<n;j++){
            if(end>=nums[j][0]){
                end=max(nums[j][1],end);
            }
             else break;  
           }
           temp.push_back({st,end});
           i=j-1;                
       }
       return temp;
    }
};