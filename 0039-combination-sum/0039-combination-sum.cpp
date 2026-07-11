class Solution {
private:
void helper(int ind,vector<int> & candidates, int target,vector<int> &ans,vector<vector<int>> &res,int n){
        if(ind == n){
            if(target == 0){
            res.push_back(ans);
            }
            return;
        }

        helper(ind+1,candidates,target,ans,res,n);
        if(candidates[ind]<= target){
        ans.push_back(candidates[ind]);
        helper(ind,candidates,target - candidates[ind],ans,res,n);
        ans.pop_back();
        }
        // return ans;
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        int n=candidates.size();
        vector<vector<int>>res;
        helper(0,candidates,target,ans,res,n);
        return res;
    }
};