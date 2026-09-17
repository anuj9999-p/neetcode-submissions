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
    int diameterOfBinaryTree(TreeNode* root) {
        int res=0;
        dfs(root,res);
        return res;
    }
    int dfs(TreeNode* root,int& res){
        if(!root) return 0;
        int maxl=dfs(root->left,res);
        int maxr=dfs(root->right,res);
        int t=maxl+maxr;
        res=max(res,maxl+maxr);
        return 1+max(maxl,maxr);
    }
};
