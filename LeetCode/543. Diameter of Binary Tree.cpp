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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        finddia(root,diameter);
        return diameter;
    }
    
    int finddia(TreeNode* node,int& diameter)
    {
        if(node==NULL)
            return 0;
        
        int lh=finddia(node->left,diameter);
        int rh=finddia(node->right,diameter);
        
        diameter=max(diameter,lh+rh);
        
        return max(lh,rh)+1;
    }
};
