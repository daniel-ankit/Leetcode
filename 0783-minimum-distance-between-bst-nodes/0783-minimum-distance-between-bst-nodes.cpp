class Solution {
    void inorder(TreeNode* root, vector<int> &v)
    {
        if(root==NULL) return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
public:
    int minDiffInBST(TreeNode* root) {
        vector<int> V;
        inorder(root, V);
        int diff = INT_MAX;
        for(int i=1; i<V.size(); i++)
            diff = min(V[i]-V[i-1], diff);
        return diff;
    }
};