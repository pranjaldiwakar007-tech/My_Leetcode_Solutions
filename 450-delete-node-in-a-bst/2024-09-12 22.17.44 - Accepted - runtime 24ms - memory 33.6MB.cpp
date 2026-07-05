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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val==key) return findHelper(root);
        TreeNode* temp=root;
        while(root){
        if(root->val>key) {
        if(root->left && root->left->val==key) 
        {
          root->left=findHelper(root->left);
          break;
        }   
         else   root=root->left;
        }
        else {
            if(root->right && root->right->val==key){
                root->right=findHelper(root->right);
                break;
            }
            else root=root->right;
        }
    }
    return temp;
    }
   TreeNode* findHelper(TreeNode* root){
    if(!root->left) return root->right;
    if(!root->right) return root->left;
    TreeNode* rightChild=root->right;
    TreeNode* rightmost=rightest(root->left);
    rightmost->right=rightChild;
    return root->left;
   }
  TreeNode* rightest(TreeNode* root){
    if(!root->right) return root;
    return rightest(root->right);
   }
};