class CBTInserter {
    TreeNode* ans = NULL;
    queue<TreeNode*>temp;
public:
    CBTInserter(TreeNode* root) {
        ans = root;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            auto now = q.front();
            q.pop();
            if(!now->left || !now->right) temp.push(now);
            if(now->left) q.push(now->left);
            if(now->right) q.push(now->right);
        }
    }
    
    int insert(int val) {
        auto now = temp.front();
        if(!now->left)
        {
            now->left = new TreeNode(val);
            temp.push(now->left);
        }
        else
        {
            now->right = new TreeNode(val);
            temp.push(now->right);
            temp.pop();
        }
        return now->val;
    }
    
    TreeNode* get_root() {
        return ans;
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */