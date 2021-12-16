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
    void inorder(vector<int> &V, TreeNode* root)
    {
        if(root==NULL) return;
        inorder(V, root->left);
        V.push_back(root->val);
        inorder(V, root->right);
    }
    bool isValidBST(TreeNode* root)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> V;
        inorder(V, root);
        for(int i=0; i<V.size()-1; i++)
            if(V[i]>=V[i+1]) return 0;
        return 1;
    }
};