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
void preorder(TreeNode* root,vector<string> &v,string str){
        if(!root) return;
        str+=to_string(root->val)+"->";
        if(!root->left and !root->right){
            str.pop_back();
            str.pop_back();
            v.push_back(str);
            return;
        }
        preorder(root->left,v,str);
        preorder(root->right,v,str);
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        preorder(root,v,"");
    return v; 
    } 
};