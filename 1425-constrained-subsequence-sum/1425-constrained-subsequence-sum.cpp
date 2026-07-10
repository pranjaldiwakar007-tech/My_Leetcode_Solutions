class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        deque<int>q;
        vector<int>ans(nums);
        int maxi=ans[0];
        for(int i=0;i<nums.size();i++){
            while(!q.empty() && q.front()<i-k){
                q.pop_front();
            }
            if(!q.empty()){
                ans[i]=max(ans[i],nums[i]+ans[q.front()]);
            }
            while(!q.empty() && ans[i]>=ans[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[q.front()]);
            }
            maxi=max(maxi,ans[i]);
        }
        // int sum=accumulate(ans.begin(),ans.end(),0LL);
        return maxi;
    }
};