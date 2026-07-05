class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>hash;
        for(int it:nums){
         hash[it]++;
        }
      for(auto i:hash){
        if(i.second==1) return i.first;
      }
      return 0;
    }
};