/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        queue<Node*>q;
        if(root) q.push(root);
        while(!q.empty())
        {
            vector<int>level;
            int size = q.size();
            while(size--)
            {
                auto now = q.front();
                q.pop();
                level.push_back(now->val);
                for(auto x:now->children)
                    q.push(x);
            }
            ans.push_back(level);
        }
        return ans;
    }
};