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
    int height(TreeNode* root, bool &yes)
    {
        if(!root) return 0;
        int left = height(root->left, yes), right = height(root->right, yes);
        if(abs(left-right) > 1) yes = 0;
        return 1+max(left, right);
    }
public:
    bool isBalanced(TreeNode* root) {
        bool yes = 1;
        height(root, yes);
        return yes;
    }
};