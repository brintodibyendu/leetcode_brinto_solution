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
    TreeNode *node=nullptr;
    int overall_diff=99999;
    int minDiffInBST(TreeNode* root) {
        if(root==nullptr)
        {
            return -1;
        }
        if(root->left)
        {
            minDiffInBST(root->left);
        }
        if(node!=nullptr){
        overall_diff=min(overall_diff,root->val-node->val);
        }
        else{
            node=root;
        }
        node=root;
        if(root->right)
        {
            minDiffInBST(root->right);
        }
        return overall_diff;
    }
};