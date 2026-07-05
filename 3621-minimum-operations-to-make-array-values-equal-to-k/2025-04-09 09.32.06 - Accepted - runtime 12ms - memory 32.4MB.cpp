class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for(int num:nums){
            if(num<k){return -1;}
        }
    set<int>mpp;
    for(int num:nums){
        if(num>k){
            mpp.insert(num);
        }
    }
       return mpp.size();
    }
};