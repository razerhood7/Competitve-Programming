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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        if(inorder.size() != postorder.size())
            return NULL;
        
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]] = i;
        }
        
        return buildPostIn(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1,mp);
    }
    
    TreeNode* buildPostIn(vector<int>& inorder, int inStart, int inEnd, vector<int>& postorder, int posStart, int posEnd, map<int,int> &mp)
    {
        if(inStart > inEnd || posStart > posEnd)
            return NULL;
                
        TreeNode* root = new TreeNode(postorder[posEnd]);
        
        int inroot = mp[postorder[posEnd]];
        int numsLeft = inroot - inStart;
        
        root->left = buildPostIn(inorder, inStart, inroot-1, postorder, posStart, posStart + numsLeft -1,mp);
        root->right = buildPostIn(inorder, inroot+1 , inEnd, postorder, posStart + numsLeft, posEnd-1,mp);
        
        return root;
    }
};
