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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
        {
            return false;
        }
        if(root->left==nullptr && root->right==nullptr)
        {
            
            if(targetSum==root->val)
            {
                return true;
            }
            return false;
        }
        bool lval=false,rval=false;
        if(root->left)
        {
            lval=hasPathSum(root->left,targetSum-root->val);
        }
        if(root->right)
        {
            rval=hasPathSum(root->right,targetSum-root->val);
        }
        
        return lval||rval;
    }
};