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
    void dfs(TreeNode* root, int targetsum, vector<vector<int>>& paths,vector<int>& path)
    {
        if(root==NULL)
            return;
        
        path.push_back(root->val);
        
        if(root->left==NULL && root->right==NULL && targetsum==root->val)
            paths.push_back(path);
        
        dfs(root->left,targetsum-root->val,paths,path);
        dfs(root->right,targetsum-root->val,paths,path);
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> paths;
        vector<int> path;
        dfs(root,targetSum,paths,path);
        return paths;
    }
};
