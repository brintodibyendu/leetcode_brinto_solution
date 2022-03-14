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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* tnode=root;
        if(tnode==NULL)
        {
            return nullptr;
        }
        
            TreeNode *temp=tnode->left;
            tnode->left=tnode->right;
            tnode->right=temp;
            if(tnode->left)
            {
                invertTree(tnode->left);
            }
        if(tnode->right)
            {
                invertTree(tnode->right);
            }
        return root;
    }
};