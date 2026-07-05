class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // int l=0,r=k;
        unordered_map<int,int>last;
        // if(k>=nums.size()) return true; // one valid testcase
        // while(r<nums.size()){
        //     if(nums[l]==nums[r] && abs(r-l)<=k){
        //         return true;
        //         break;
        //     }
        //     l++;
        //     r++;
        // }
        for(int i=0;i<nums.size();i++){
            if(last.count(nums[i]) && i-last[nums[i]] <=k) return true;
            last[nums[i]]=i;

        }
        return false;
    }
};