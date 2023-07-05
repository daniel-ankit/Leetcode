class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>>mp;
        queue<pair<pair<int, int>, TreeNode*>>q;
        q.push({{0, 0}, root});
        while(!q.empty())
        {
            auto x = q.front().first.first, y = q.front().first.second;
            auto node = q.front().second;
            q.pop();
            mp[x][y].insert(node->val);
            if(node->left) q.push({{x-1, y+1}, node->left});
            if(node->right) q.push({{x+1, y+1}, node->right});
        }
        vector<vector<int>>ans;
        for(auto x:mp)
        {
            vector<int>temp;
            for(auto y:x.second)
            {
                for(auto z:y.second)
                    temp.push_back(z);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};