class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size(),idx=0;
        vector<int>pref(n);
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
            pref[i]=pref[i-1]+nums[i];
            idx=i;
            }
            else break;
        }
        int m=pref.size();
        int val=pref[idx];
        for(int i=val;;i++){
            if(mpp.find(i)==mpp.end()) return i;
        }
        return 0;
    }
};