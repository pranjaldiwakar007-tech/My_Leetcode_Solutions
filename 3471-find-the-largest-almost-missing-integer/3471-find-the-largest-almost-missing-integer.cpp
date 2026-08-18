class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int l=0,r=0;
        unordered_map<int,int>mpp;
       for(;r<nums.size();r++){
        // mpp[nums[r]]++;
            if(r-l+1==k){
                unordered_set<int>st(nums.begin()+l,nums.begin()+r+1);
                for(auto &it:st){
                    mpp[it]++;
                }
            l++;
            }
       }
       int maxi=-1;
       for(auto &it:mpp){
        int val=it.first;
        int cnt=it.second;
        if(cnt==1){
            maxi=max(maxi,val);
        }
       } 
       return maxi;
    }
};