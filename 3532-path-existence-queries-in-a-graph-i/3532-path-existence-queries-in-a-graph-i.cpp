class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<bool>ans;
        vector<int>comp(n,0);
        int idx=0;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]>maxDiff){
                idx++;
            }
            comp[i]=idx;
        }
        for(int i=0;i<queries.size();i++){
            int u=queries[i][0];
            int v=queries[i][1];
            if(comp[u]==comp[v]) ans.push_back(true);
            else ans.push_back(false);

        }
        return ans;
    }
};