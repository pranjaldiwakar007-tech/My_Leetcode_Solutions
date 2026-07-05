class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        int x=0;
        for(int i:nums){
            mpp[i]++;
     }   
     for(auto i:mpp){
        if(i.second>nums.size()/2){
            x=i.first;
        }
     }
        return x;
    }
};