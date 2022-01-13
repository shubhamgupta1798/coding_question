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
    void flatten(TreeNode* root) {
        TreeNode* curr=root;
        while(curr!=NULL){
            //cout<<curr->val<<curr->right->val;
            TreeNode* right=curr->right;
            if(curr->left!=NULL){
                curr->right=curr->left;
                curr->left=NULL;
                
            curr=curr->right;
            
            TreeNode* temp=curr;
            while(temp->right!=NULL && temp->right!=curr)
            {
                //cout<<"stuck";
                //cout<<temp->val;
                temp=temp->right;
            }
            temp->right=right;
            }
            else{
                curr=curr->right;
            }
        }
        return;
        //return root;
        
        
    }
};