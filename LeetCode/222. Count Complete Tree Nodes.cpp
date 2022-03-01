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
    int countNodes(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        
        int lh = findhtleft(root);
        int rh = findhtright(root);
        
        if(lh == rh)
            return (1 <<lh) -1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    
    int findhtleft(TreeNode* root)
    {
        int hgt = 0;
        while(root)
        {
            hgt++;
            root = root->left;
        }
        
        return hgt;
    }
    
    int findhtright(TreeNode* root)
    {
        int hgt = 0;
        while(root)
        {
            hgt++;
            root = root->right;
        }
        
        return hgt;
    }
};
