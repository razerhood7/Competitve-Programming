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
private:
    void roottoleaf(TreeNode* root,int temp,int& sum)
    {
        if(root==NULL)
            return;
        
        temp=temp*10+root->val;
        
        if(root->left==NULL && root->right==NULL)
            sum+=temp;
        
        roottoleaf(root->left,temp,sum);
        roottoleaf(root->right,temp,sum);
    }
    
public:
    int sumNumbers(TreeNode* root) {
        int sum=0,temp=0;
        roottoleaf(root,temp,sum);
        return sum;
    }
};
