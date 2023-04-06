class Solution {
    bool check(map<int, int>&mp)
    {
        int odd = 0;
        for(auto x:mp)
            if(x.second%2) odd++;
        return odd <= 1;
    }
    void dfs(TreeNode* root, map<int, int>&mp, int &cnt)
    {
        if(!root) return;
        mp[root->val]++;
        if(!root->left && !root->right && check(mp)) cnt++;
        dfs(root->left, mp, cnt);
        dfs(root->right, mp, cnt);
        mp[root->val]--;
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        map<int, int>mp;
        int cnt=0;
        dfs(root, mp, cnt);
        return cnt;
    }
};