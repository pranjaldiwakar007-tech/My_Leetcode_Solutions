class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>st;
        int i=0;
        while(i<n-3){
            int j=i+1;
            while(j<n-2){
                int k=j+1;
                int l=n-1;
                while(k<n && k<l){
                    long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target){
                        st.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                while(k<l &&nums[k]==nums[k-1]) k++;
                while(k<l &&nums[l]==nums[l+1]) l--;
                    }
                    else if(sum>target){
                         l--;
                    }
                    else{
                        k++;
                    }
                }
                j++;
            }
            i++;
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};