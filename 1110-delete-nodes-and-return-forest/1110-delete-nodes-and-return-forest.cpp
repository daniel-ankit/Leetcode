class Solution {
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_map<int, int>mp;
        for(auto x:to_delete) mp[x]++;
        vector<TreeNode*>ans;
        if(mp.find(root->val) == mp.end()) ans.push_back(root);
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            auto now = q.front();
            q.pop();
            if(now->left)
            {
                q.push(now->left);
                if(mp.find(now->left->val) != mp.end()) now->left = NULL;
            }
            if(now->right)
            {
                q.push(now->right);
                if(mp.find(now->right->val) != mp.end()) now->right = NULL;   
            }
            if(mp.find(now->val) != mp.end())
            {
                if(now->left) ans.push_back(now->left);
                if(now->right) ans.push_back(now->right);
            }
        }
        return ans;
    }
};