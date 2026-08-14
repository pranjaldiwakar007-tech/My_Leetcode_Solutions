class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        int w=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(;w<n-3;w++){
            if(w>0 && nums[w]==nums[w-1]) continue;
            for(int x=w+1;x<n-2;x++){
                if(x!=w+1 && x>0 && nums[x-1]==nums[x]) continue;
                int y=x+1;
                int z=n-1;
                while(y<z){
                long long sum=(long long)nums[w]+nums[x]+nums[y]+nums[z];
                if(sum==target){
                    ans.push_back({nums[w],nums[x],nums[y],nums[z]});
                    z--;
                    y++;
                    while(y<z && nums[y-1]==nums[y]) y++;
                    while(y<z && nums[z+1]==nums[z]) z--;
                }
                else if(sum>target){
                    z--;
                }
                else{
                    y++;
                }
            }
            }
        }
        return ans;
    }
};