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
    void fn(TreeNode* root, int maxx, int &count)
    {
        if(!root) return;
        if(maxx<=root->val)
        {
            count++;
            maxx = max(maxx, root->val);
        }
        fn(root->left, maxx, count);
        fn(root->right, maxx, count);
    }
public:
    int goodNodes(TreeNode* root) {
        int maxx = INT_MIN, count = 0;
        fn(root, maxx, count);
        return count;
    }
};