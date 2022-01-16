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
    bool fn(TreeNode* root, int limit,int curr)
    {
        if(root==NULL)
        {
            return false;
        }
        if(root->left==NULL && root->right==NULL)
        {
            if(curr+root->val<limit)
            {
                return false;
            }
            else{
                return true;
            }
        }
        bool c=fn(root->left,limit,curr+root->val);
        
        bool c2=fn(root->right,limit,curr+root->val);
        if(!c)
        {
            root->left=NULL;
        }
        if(!c2)
        {
            root->right=NULL;
        }
        return c||c2;
        
    }
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        bool t=fn(root,limit,0);
        if(!t)
        {
            return NULL;
        }
        return root;
    }
};