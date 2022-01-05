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
    bool issame(TreeNode* left,TreeNode* right)
    {
        if(left==NULL)
        {
            if(right==NULL)
                return true;
            return false;
            
        }
        if(right==NULL)
        {
            return false;
        }
        if(left->val!=right->val)
        {
            return false;
        }
        return issame(left->right,right->left)&& issame(left->left, right->right);
        
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return issame(root->left,root->right);
    }
};