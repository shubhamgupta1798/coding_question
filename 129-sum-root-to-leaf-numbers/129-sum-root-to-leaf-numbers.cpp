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
    int ans=0;
    int sumNumbers(TreeNode* root,int curr=0) {
        if(root==NULL)
        {
            return ans;
        }
        if(root->left==NULL && root->right==NULL)
        {
            ans+=curr*10+root->val;
        }
        sumNumbers(root->left,curr*10+root->val);
        sumNumbers(root->right,curr*10+root->val);
        return ans;
    }
};