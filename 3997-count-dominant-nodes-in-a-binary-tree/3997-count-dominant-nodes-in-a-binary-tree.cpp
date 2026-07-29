class Solution {
public:
    int ans;
    int dfs(TreeNode* root){
        if(!root) return INT_MIN;
        int left=dfs(root->left);
        int right=dfs(root->right);
        int maxi=max(root->val,max(left,right));
        if(maxi==root->val) ans++;
        return maxi;
    }
    int countDominantNodes(TreeNode* root) {
        dfs(root);
        return ans;
    }
};