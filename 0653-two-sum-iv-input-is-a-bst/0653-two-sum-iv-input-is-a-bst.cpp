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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> hash;
       return inorder(root,&hash,k);
    }
    bool inorder(TreeNode* root, unordered_set<int>* hash,int k)
    {
        if(!root) return false;
        int a=k-root->val ;
        if (hash->find(a) != hash->end()) 
            return true;
        hash->insert(root->val);
        return inorder(root->left, hash, k) || inorder(root->right, hash, k);
        

    }
};