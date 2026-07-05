class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int last_el=nums[n-1];
        // for(auto it:mpp){
        //     int x=it.first;
        //     int cnt=it.second;
        //     if(x==last_el && cnt>1) return true; 
        //     else if(x!=last_el && cnt>1) return false;
        // }
        for(int i=1;i<n-1;i++){
            if(mpp[i]!=1) return false;
        }
        if(last_el==n-1) return true;
        return false;
    }
};