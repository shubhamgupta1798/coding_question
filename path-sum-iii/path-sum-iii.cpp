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
    int pathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL)
        {
            return 0;
        }
        
        dfs(root,targetSum,targetSum,false);
        
        
        return ans;
    }
    void dfs(TreeNode* root, int targetSum,int current_sum,bool c)
    {
       // int ans=0;
        if(root==NULL)
        {
            return;
        }
        if(current_sum==root->val)
        {
            ans++;
        }
        if(c)
        {
            dfs(root->left,targetSum,current_sum-root->val,true);
             dfs(root->right,targetSum,current_sum-root->val,true);
        }
        else{
            dfs(root->left,targetSum,targetSum-root->val,true);
             dfs(root->right,targetSum,targetSum-root->val,true);
            dfs(root->left,targetSum,targetSum,false);
             dfs(root->right,targetSum,targetSum,false);
        }
        //return ans;
    }
};