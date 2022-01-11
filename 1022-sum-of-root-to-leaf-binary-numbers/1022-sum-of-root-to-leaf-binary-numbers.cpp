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
    long int ans=0;
    int fn(string s)
    {
        int temp=0;
        for(int i=0;i<s.size();i++)
        {
           temp=temp*2+s[i];
        }
        return temp;
    }
    int sumRootToLeaf(TreeNode* root,string s="") {
        if(root==NULL)
        {
            return fn(s);
        }
        else {
            s+=root->val;
            //cout<<s;
            if(root->left==NULL && root->right==NULL)
            {
                return fn(s);
            }
            else if(root->left==NULL)
            {
                return sumRootToLeaf(root->right,s);
            }
            else if(root->right==NULL)
            {
               return sumRootToLeaf(root->left,s);
            }
            else{
                return sumRootToLeaf(root->left,s)+sumRootToLeaf(root->right,s);
            }
                
            //sumRootToLeaf(root->right,s);
        }
    }
};