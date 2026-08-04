class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>ans;
       int mini=*min_element(nums.begin(),nums.end());
       int maxi=*max_element(nums.begin(),nums.end()); 
       for(int i=0;i<nums.size();i++) mpp[nums[i]]++;
       for(int i=mini;i<=maxi;i++){
        if(mpp[i]==0) ans.push_back(i);
       }
       return ans;
    }
};