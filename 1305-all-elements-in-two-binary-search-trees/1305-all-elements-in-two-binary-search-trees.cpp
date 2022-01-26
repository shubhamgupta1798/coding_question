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
    vector<int> ans;
    void fn(TreeNode* root1,TreeNode* root2)
    {
        if(root1==NULL && root2==NULL)
        {
            return;
        }
        else if(root1==NULL)
        {
            fn(root1,root2->left);
            ans.push_back(root2->val);
            fn(root1,root2->right);
            return;
        }
        else if(root2==NULL)
        {
            fn(root1->left,root2);
            ans.push_back(root1->val);
            fn(root1->right,root2);
            return;
        }
        else if(root1->val>root2->val)
        {
            TreeNode* right=root2->right;
            root2->right=NULL;
            fn(root1->left,root2);
            root1->left=NULL;
            fn(root1,right);
            return;
        }
        else{
            TreeNode* right=root1->right;
            root1->right=NULL;
            fn(root1,root2->left);
            root2->left=NULL;
            fn(right,root2);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        fn(root1,root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};