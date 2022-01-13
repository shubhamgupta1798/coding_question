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
    //int dfs()
    int ans=INT_MIN;
    int fn(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=fn(root->left);
        int right=fn(root->right);
        //cout<<root->val<<left<<right; 
        ans=max(ans,max(left,0)+max(0,right)+root->val);
        
        return max(max(left,right),0)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        fn(root);
        return ans;
    }
};