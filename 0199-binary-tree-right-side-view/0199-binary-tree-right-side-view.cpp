class Solution {
public:
    vector<int> rightSideView(TreeNode* root)
    {
        vector<int> view;
        if(root==NULL) return view;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty())
        {
            int nodes = Q.size();
            vector<int> level;
            for(int i=0; i<nodes; i++)
            {
                TreeNode* now = Q.front();
                Q.pop();
                level.push_back(now->val);
                if(now->left) Q.push(now->left);
                if(now->right) Q.push(now->right);
            }
            view.push_back(level[level.size()-1]);
        }
        return view;
    }
};