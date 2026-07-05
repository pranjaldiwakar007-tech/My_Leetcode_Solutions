class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mpp;
        for(auto i:nums) mpp[i]++;
        for(auto it:mpp) {
         if(it.second==2) ans.push_back(it.first);
        }
         return ans;
    }
};