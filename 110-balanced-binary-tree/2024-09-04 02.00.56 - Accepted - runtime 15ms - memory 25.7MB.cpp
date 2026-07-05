/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*, int> st;
    int height(TreeNode* node) {
        if (!node)
            return 0;

        if(st.find(node)!=st.end()) return st[node];

        int l = height(node->left);
        int r = height(node->right);

        return st[node]=1 + max(l, r);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int l=height(root->left);
        int r=height(root->right);
        if(abs(l-r)>1) return false;
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        if(!left||!right) return false;
        return true;
    }
};