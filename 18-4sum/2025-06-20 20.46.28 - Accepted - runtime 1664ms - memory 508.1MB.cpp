class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>>st;
        set<long long>stt;
        for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
            stt.clear();
            for(int k=j+1;k<n;k++){
                if(stt.find((long long)target-nums[i]-nums[j]-nums[k])!=stt.end()){
                    vector<int>temp={nums[i],nums[j],nums[k],(int)(target-nums[i]-nums[j]-nums[k])};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                stt.insert(nums[k]);
            }
          }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};