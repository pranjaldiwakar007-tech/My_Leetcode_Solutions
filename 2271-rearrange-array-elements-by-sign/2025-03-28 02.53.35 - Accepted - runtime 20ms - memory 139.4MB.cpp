class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans,x;
         int c=0;
       for(int i=0;i<nums.size();i++){
          if(nums[i]>0){
            ans.push_back(nums[i]);
            ans.push_back(0);
          }
          else x.push_back(nums[i]);
       }
          for(int i=0;i<ans.size();i++){
          if(ans[i]==0){
            ans[i]=x[c];
            c++;
          }
       }
       return ans;
    }
};