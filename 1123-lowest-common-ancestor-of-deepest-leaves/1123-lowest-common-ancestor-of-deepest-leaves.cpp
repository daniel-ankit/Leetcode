class Solution {
    TreeNode* lca(TreeNode* root, TreeNode* a, TreeNode* b)
    {
        if(!root || root==a || root==b) return root;
        auto left = lca(root->left, a, b), right = lca(root->right, a, b);
        if(left && right) return root;
        if(!left) return right;
        return left;
    }
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<TreeNode*>last;
        while(!q.empty())
        {
            int n = q.size();
            vector<TreeNode*>level;
            while(n--)
            {
                auto now = q.front();
                level.push_back(now);
                q.pop();
                if(now->left) q.push(now->left);
                if(now->right) q.push(now->right);
            }
            last = level;
        }
        TreeNode* ans = last[0];
        for(auto x:last)
            ans = lca(root, ans, x);
        return ans;
    }
};