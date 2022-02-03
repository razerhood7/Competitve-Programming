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
    int maxTillNow = -1000000, curr = -1000000, prev = -1000000;
private:
void inOrder(TreeNode* root, vector<int> &ans) {        
        if(root == NULL)
            return;
        inOrder(root->left, ans);
		 
        if(root->val == prev)
            curr++;
        
        else if(prev != root->val)
            curr = 1;
                
        if(curr>maxTillNow) {
            ans.clear();
            ans.push_back(root->val);
            maxTillNow = curr;
        } 
        else if(curr == maxTillNow)
            ans.push_back(root->val);
        
        prev = root->val;
        inOrder(root->right, ans);
    }
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        vector<int> ans;
        inOrder(root,ans);
        //mostfrequent(res,ans);
        return ans;
    }
};
