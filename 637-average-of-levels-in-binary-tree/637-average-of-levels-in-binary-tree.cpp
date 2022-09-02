class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty())
        {
            int nodes = Q.size();
            double level = 0;
            for(int i=0; i<nodes; i++)
            {
                level += Q.front()->val;
                if(Q.front()->left) Q.push(Q.front()->left);
                if(Q.front()->right) Q.push(Q.front()->right);
                Q.pop();
            }
            ans.push_back(level/nodes);
        }
        return ans;
    }
};