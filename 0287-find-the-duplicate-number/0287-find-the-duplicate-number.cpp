class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto &it:mpp){
            int num=it.first;
            int cnt=it.second;
            if(cnt>1) return num;
        }
        return -1;
    }
};