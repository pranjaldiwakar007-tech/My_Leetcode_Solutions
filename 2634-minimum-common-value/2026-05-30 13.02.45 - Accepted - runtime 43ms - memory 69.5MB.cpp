class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        for(int num:nums1){
            mpp[num]++;
        }
        int mini=1e9+1;
        for(auto it:nums2){
            if(mpp.find(it)!=mpp.end()) mini=min(mini,it); 
        }
        if(mini==1e9+1) return -1;
        return mini;
    }
};