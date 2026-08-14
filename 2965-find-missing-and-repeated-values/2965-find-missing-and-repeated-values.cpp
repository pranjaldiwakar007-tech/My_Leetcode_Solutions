class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        int w=n*m;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mpp[nums[i][j]]++;
            }
        }
        int x=0,y=0;
        for(auto &it:mpp){
            int val=it.first;
            int cnt=it.second;
            if(cnt>1) x=val;
        }
        for(int i=1;i<=w;i++){
            if(mpp.find(i)==mpp.end()) {
                y=i;
                break;
            }
        }
        return {x,y};
    }
};