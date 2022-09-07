class Solution {
    void fn(TreeNode* root, string &ans)
    {
        if(!root) return;
        ans += to_string(root->val);
        if(root->left || root->right)
        {
            ans.push_back('(');
            fn(root->left, ans);
            ans.push_back(')');
        }
        if(root->right)
        {
            ans.push_back('(');
            fn(root->right, ans);
            ans.push_back(')');
        }
    }
public:
    string tree2str(TreeNode* root) {
        string ans = "";
        fn(root, ans);
        return ans;
    }
};