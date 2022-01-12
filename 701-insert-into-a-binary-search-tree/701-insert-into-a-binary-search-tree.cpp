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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp=root;
        if(root==NULL)
        {
            TreeNode* t=new TreeNode();
            t->val=val;
            root=t;
        }
        while(temp!=NULL)
        {
            cout<<temp->val;
            if(temp->val>val)
            {
                if(temp->left!=NULL)
                temp=temp->left;
                else{
                    TreeNode* t=new TreeNode();
                    t->val=val;
                    temp->left=t;
                    break;
                }
                
            }
            else
            {
                if(temp->right!=NULL)
                temp=temp->right;
                else{
                    TreeNode* t=new TreeNode();
                    t->val=val;
                    temp->right=t;
                    break;
                }
            }
        }
        
        //temp->val=val;
        return root;
    }
};