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
    
    void treepaths(TreeNode* root,string res,vector<string> &ans)
    {
      
        if(root->left==NULL && root->right ==NULL)
        {
            ans.push_back(res);
            return;
        }
        
        if(root->left!=NULL)
        {
            treepaths(root->left,res+"->"+ to_string(root->left->val),ans);
        }
        
        if(root->right!=NULL)
        {
            treepaths(root->right,res+"->"+ to_string(root->right->val),ans);
        }
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        string res;
        vector<string> ans;
        if(root==NULL)
            return ans;
        
        treepaths(root,to_string(root->val),ans);
        return ans;
    }
};
