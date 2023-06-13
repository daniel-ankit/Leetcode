class Solution {
    void populate(unordered_map<TreeNode*, TreeNode*>&mp, int val, TreeNode* &find, TreeNode* root){
        if(!root) return;
        if(root->val == val) find = root;
        if(root->left) mp[root->left] = root;
        if(root->right) mp[root->right] = root;
        populate(mp, val, find, root->left);
        populate(mp, val, find, root->right);
    }
public:
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*, TreeNode*>mp;
        map<TreeNode*, bool>vis;
        mp[root] = NULL;
        TreeNode* find = NULL;
        populate(mp, start, find, root);
        queue<TreeNode*>q;
        q.push(find);
        vis[find] = 1;
        int time = 0;
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                auto now = q.front();
                q.pop();
                if(now->left && !vis[now->left])
                {
                    q.push(now->left);
                    vis[now->left] = 1;
                }
                if(now->right && !vis[now->right])
                {
                    q.push(now->right);
                    vis[now->right] = 1;
                }
                if(mp[now] && !vis[mp[now]])
                {
                    q.push(mp[now]);
                    vis[mp[now]] = 1;
                }
            }
            time++;
        }
        return time-1;
        
    }
};