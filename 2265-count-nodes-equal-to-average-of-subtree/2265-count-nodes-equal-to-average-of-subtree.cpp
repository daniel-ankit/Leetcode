class Solution {
    int count = 0;
    pair<int, int> sum(TreeNode* root)
    {
        if(root==NULL) return {0, 0};
        auto left = sum(root->left), right = sum(root->right);
        int total = left.first + right.first + root->val, n = left.second+right.second+1;
        if(total/n == root->val) count++;
        return {total, n};
    }
public:
    int averageOfSubtree(TreeNode* root) {
        sum(root);
        return count;
    }
};