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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode *mergetree=new TreeNode();
        
        if(!root1 && !root2)
        {
            return nullptr;
        }
        
        if(!root1)
        {
            mergetree=root2;
            return mergetree;
        }
        if(!root2)
        {
            mergetree=root1;
            return mergetree;
        }
        mergetree->val=((root1) ? root1->val : 0)+ ((root2) ? root2->val : 0);
        
        
        
        if(root1->left && root2->left){
        mergetree->left=mergeTrees(root1->left,root2->left);
        }
        else if(root1->left)
        {
            mergetree->left=root1->left;
        }
        else if(root2->left)
        {
            mergetree->left=root2->left;
        }
        
        
        if(root1->right && root2->right){
        mergetree->right=mergeTrees(root1->right,root2->right);
        }
        else if(root1->right)
        {
            mergetree->right=root1->right;
        }
        else if(root2->right)
        {
            mergetree->right=root2->right;
        }
            return mergetree;
    }
};