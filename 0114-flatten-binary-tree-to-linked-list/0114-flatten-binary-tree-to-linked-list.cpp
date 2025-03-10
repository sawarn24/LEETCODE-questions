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
    void flatten(TreeNode* root) {
        if(!root)return;

         stack<TreeNode*> abc;
         abc.push(root);
         while(!abc.empty()){
         TreeNode* cur=abc.top();
         abc.pop();
         if(cur->right)abc.push(cur->right);
         if(cur->left)abc.push(cur->left);
         if(!abc.empty())
         cur->right=abc.top();
         cur->left=NULL;
         }


        
        
    }
};