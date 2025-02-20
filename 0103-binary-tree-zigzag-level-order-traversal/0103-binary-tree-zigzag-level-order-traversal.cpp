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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL)
        return result;
        queue<TreeNode*>nodes;
        nodes.push(root);
        bool chc=true;
        while(!nodes.empty())
        {
            int size=nodes.size();
            vector<int>row(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* n=nodes.front();
                nodes.pop();

                int index= chc?i:size-1-i;
                row[index]=n->val;
                if(n->left)
                {
                    nodes.push(n->left);

                }
                if(n->right)
                {
                    nodes.push(n->right);
                    
                }
            }
            result.push_back(row);
            chc=!chc;


        }
        return result;

        
    }
};