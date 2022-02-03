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
    TreeNode* minvalright(TreeNode* root)
    {
        while (root->left != NULL)
            root = root->left;
        return root;        
    }
    
    TreeNode* dnode(TreeNode* root,int key)
    {
        if(root==NULL)
            return NULL;
        
        if(key<root->val)
        {
            root->left=dnode(root->left,key);
        }
        
        else if(key>root->val)
        {
            root->right=dnode(root->right,key);
        }
        
        else
        {
            if(root->left==NULL || root->right==NULL)
            {
                return NULL;
            }
            
            else if(root->left==NULL)
            {
                TreeNode* temp=root->right;
                free(root);
                return temp;
            }
            else if(root->right==NULL)
            {
                TreeNode* temp=root->left;
                free(root);
                return temp;
            }
            
            TreeNode* temp=minvalright(root->right);
            
            root->val = temp->val;
            
            root->right = dnode(root->right, root->val);
        }
        
        return root;
    }
    
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
         if(!root) return nullptr;
        if(root->val < key)
            root->right = deleteNode(root->right, key);
        else if(root->val > key)
            root->left = deleteNode(root->left, key);
        else {
            if(!root->left && !root->right) return nullptr;
            if(!root->right) return root->left;
            if(!root->left) return root->right;
            else {
                TreeNode* crawl = root->right;
                while(crawl->left) {
                    crawl = crawl->left;
                }
                root->val = crawl->val;
                root->right = deleteNode(root->right, root->val);
            }
        }
        
        return root;
        
    }
};
