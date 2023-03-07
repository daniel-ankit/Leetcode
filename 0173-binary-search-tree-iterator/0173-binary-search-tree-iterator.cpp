class BSTIterator {
    stack<TreeNode*> S;
    void leftmost(TreeNode* root)
    {
        if(!root) return;
        S.push(root);
        if(root->left)
            leftmost(root->left);
    }
public:
    BSTIterator(TreeNode* root)
    {
        leftmost(root);
        
    }
    
    int next()
    {
        auto ret = S.top();
        S.pop();
        leftmost(ret->right);
        return ret->val;
    }
    
    bool hasNext()
    {
        return S.size();
    }
};