class Solution {
    TreeNode* lca(TreeNode* root, TreeNode* a, TreeNode* b)
    {
        if(!root || root->val==a->val || root->val==b->val) return root;
        auto left = lca(root->left, a, b), right = lca(root->right, a, b);
        if(left && right) return root;
        if(!left) return right;
        return left;
    }
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
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
        for(int i=1; i<last.size(); i++)
            last[0] = lca(root, last[0], last[i]);
        return last[0];
    }
};