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
    void solve1(TreeNode* root1, vector<int>& res1)
    {
        if(root1 == NULL)
            return;
        
        if(root1->left == NULL && root1->right == NULL)
        {
            res1.push_back(root1->val);
            return; 
        }
        
        solve1(root1->left,res1);
        solve2(root1->right,res1);
    }
    
    void solve2(TreeNode* root2, vector<int>& res2)
    {
        if(root2 == NULL)
            return;
        
        if(root2->left == NULL && root2->right == NULL)
        {
            res2.push_back(root2->val);
            return; 
        }
        
        solve1(root2->left,res2);
        solve2(root2->right,res2);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int> res1;
        vector<int> res2;
        
        solve1(root1, res1);
        solve2(root2, res2);
        
        if(res1.size() != res2.size())
            return false;
        else
        {
            for(int i=0;i<res1.size();i++)
            {
                if(res1[i]!=res2[i])
                    return false;
            }
        }
        
        return true;
    }
};
