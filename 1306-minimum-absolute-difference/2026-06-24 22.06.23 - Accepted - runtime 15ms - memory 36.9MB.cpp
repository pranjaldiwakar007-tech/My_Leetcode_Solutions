class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        int diff=1e9;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(abs(nums[i]-nums[j])<diff) diff=abs(nums[i]-nums[j]);
        //     }
        // }
        //  for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         // int x=0;
        //         if(abs(nums[i]-nums[j])==diff)ans.push_back({nums[i],nums[j]});
        //     }
        //  }
        //  sort(ans.begin(),ans.end());
        //  return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            diff=min(diff,abs(nums[i+1]-nums[i]));
        }
        for(int i=0;i<n-1;i++){
            if(abs(nums[i+1]-nums[i])==diff) ans.push_back({nums[i],nums[i+1]});
        }
        return ans;
    }
};