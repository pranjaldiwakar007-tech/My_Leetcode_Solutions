class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        // int max=*max_element(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        int cnt=0;
        for(int i=0;i<nums.size();i++) mpp[nums[i]]=i;
        for(int i=1;;i++){
            if(mpp.find(i)==mpp.end()){
                cnt++;
                if(cnt==k) return i;
            }
        }
        return 0;
    }
};