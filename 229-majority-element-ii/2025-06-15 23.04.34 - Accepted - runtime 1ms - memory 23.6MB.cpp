class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int t=n/3,l=0,r=0,cnt=0;
        sort(nums.begin(),nums.end());
       while(r<nums.size()){
        if(nums[l]==nums[r]){
            r++;
            cnt++;
        }
        else 
        {
        if(cnt>n/3 )ans.push_back(nums[l]);
            l=r;
            cnt=1;
            r++;
        }
       }
       if(cnt>n/3) ans.push_back(nums[l]);
       return ans;
    }
};