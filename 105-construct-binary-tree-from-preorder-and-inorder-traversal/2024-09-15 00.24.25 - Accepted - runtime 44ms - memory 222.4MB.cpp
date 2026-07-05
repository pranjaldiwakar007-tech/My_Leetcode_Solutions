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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> inList;
        for(int i=0;i<inorder.size();i++)
            inList[inorder[i]]=i;
TreeNode* root=buildTrees(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inList);
        return root;
    }
    TreeNode* buildTrees(vector<int> preorder,int ps,int pe,vector<int> inorder,int is,int ie,map<int,int> &inList){
if(ps>pe || is>ie)return NULL;
        TreeNode* root=new TreeNode(preorder[ps]);
        int inRoot=inList[preorder[ps]];
        int il=inRoot-is;
root->left=buildTrees(preorder,ps+1,ps+il,inorder,is,is+il,inList);
root->right=buildTrees(preorder,ps+il+1,pe,inorder,inRoot+1,ie,inList);
        return root;
    }
};