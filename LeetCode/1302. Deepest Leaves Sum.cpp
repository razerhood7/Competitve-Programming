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
    int deepestLeavesSum(TreeNode* root) {
        
        
        vector<vector<int>> result; 
        if(root == NULL)
            return 0;
        queue<TreeNode*> q;
        
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> level;
            
            for(int i=0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left != NULL)q.push(node->left);
                if(node->right != NULL)q.push(node->right);
                level.push_back(node->val);
            }
        // for(int i=0;i<level.size();i++)
        // {
        //     cout<<level[i];
        // }
            result.push_back(level);
        }

        int n = result.size();
        int sum = result[n-1].size();
        int res = 0;
        for(int i=0;i<sum;i++)
        {
            res+=result[n-1][i];
        }
        return res;
    }
};
