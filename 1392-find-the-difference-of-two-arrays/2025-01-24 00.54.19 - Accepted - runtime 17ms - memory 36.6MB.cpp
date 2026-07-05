class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> s(2);
        unordered_set<int > st1(nums1.begin(),nums1.end());
         unordered_set<int > st2(nums2.begin(),nums2.end());
         for(int it:nums2){
        if(st1.find(it)!=st1.end()){
            st1.erase(it);
            st2.erase(it);
            }
        }
      return {
        vector<int>(st1.begin(),st1.end()),vector<int>(st2.begin(),st2.end())
      };
    }
};