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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        queue<TreeNode*> queu;
        queu.push(root);
        while(!queu.empty()){
            TreeNode* node=queu.front();
            queu.pop();
            swap(node->left,node->right);
            if(node->left) queu.push(node->left);
            if(node->right) queu.push(node->right);
         }
         return root;
    }
};
