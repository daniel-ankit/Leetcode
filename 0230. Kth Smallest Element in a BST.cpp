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
    void inorder(vector<int> &V, TreeNode *root, int k)
    {
        if(!root) return;
        if(V.size()>=k) return;
        inorder(V, root->left, k);
        V.push_back(root->val);
        inorder(V, root->right, k);
    }
    int kthSmallest(TreeNode* root, int k)
    {
        vector<int> V;
        inorder(V, root, k);
        int ans = V[k-1];
        return ans;
    }
};