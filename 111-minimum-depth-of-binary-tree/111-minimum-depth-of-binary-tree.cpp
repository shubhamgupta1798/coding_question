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
    void find(TreeNode* root,int &ans,int height)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL )
        {
            ans=min(ans,height);
        }
        
        find(root->right,ans,height+1);
        find(root->left,ans,height+1);
        
    }
    int minDepth(TreeNode* root) {
        int ans=INT_MAX;
        if(root==NULL)
        {
            return 0;
        }
        find(root,ans,1);
        return ans;
    }
};